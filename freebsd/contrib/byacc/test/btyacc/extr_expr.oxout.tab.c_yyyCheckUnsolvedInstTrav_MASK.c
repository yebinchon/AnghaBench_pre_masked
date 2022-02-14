
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ yyyRCT ;
struct TYPE_3__ {int refCountListLen; int cLlen; struct TYPE_3__** cL; scalar_t__* refCountList; } ;
typedef TYPE_1__ yyyGNT ;



void FUNC_0(yyyGNT *VAR_0,long *VAR_1,long *VAR_2)
  {yyyGNT **VAR_3;
   yyyRCT *VAR_4;
   int VAR_5;


   VAR_4 = VAR_0->refCountList;
   VAR_5 = VAR_0->refCountListLen;
   while (VAR_5--)
      if (*VAR_4++) {*VAR_2 += *(VAR_4 - 1); (*VAR_1)++;}
   VAR_3 = VAR_0->cL;
   VAR_5 = VAR_0->cLlen;
   while (VAR_5--)
     {
      FUNC_0(*VAR_3,VAR_1,VAR_2);
      VAR_3++;
     }
  }
