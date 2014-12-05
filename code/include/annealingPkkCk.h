//Copyright 2014 Pol Colomer de Simon. All rights reserved. Code under License GPLv3.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "./graph_library.h"
#include "./rewiring.h"
#include "../main.h"

//----- HEADERS --------//

int    rewiring_PkkCk_annealing(GRAPH G,double B,double increment,double accmin,int rewires,gsl_rng* randgsl);
double calc_AH_pkkck(GRAPH G,int s1,int s2,int r1,int r2,double *ck,double *ck2,double *ck_aim);