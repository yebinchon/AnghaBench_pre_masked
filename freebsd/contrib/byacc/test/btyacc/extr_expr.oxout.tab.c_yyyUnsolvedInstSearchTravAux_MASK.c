
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cLlen; struct TYPE_4__** cL; } ;
typedef TYPE_1__ yyyGNT ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(yyyGNT *VAR_0)
  {yyyGNT **VAR_1;
   int VAR_2;

   FUNC_0(VAR_0);
   VAR_1 = VAR_0->cL;
   VAR_2 = VAR_0->cLlen;
   while (VAR_2--)
     {
      FUNC_1(*VAR_1);
      VAR_1++;
     }
  }
