
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nelem; TYPE_1__** tab; int size; } ;
struct TYPE_7__ {struct TYPE_7__* nval; scalar_t__ sval; struct TYPE_7__* cnext; } ;
typedef TYPE_1__ Cell ;
typedef TYPE_2__ Array ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(Cell *VAR_0, const char *VAR_1)
{
 Array *VAR_2;
 Cell *VAR_3, *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_2 = (Array *) VAR_0->sval;
 VAR_5 = FUNC_2(VAR_1, VAR_2->size);
 for (VAR_3 = VAR_2->tab[VAR_5]; VAR_3 != ((void*)0); VAR_4 = VAR_3, VAR_3 = VAR_3->cnext)
  if (FUNC_3(VAR_1, VAR_3->nval) == 0) {
   if (VAR_4 == ((void*)0))
    VAR_2->tab[VAR_5] = VAR_3->cnext;
   else
    VAR_4->cnext = VAR_3->cnext;
   if (FUNC_1(VAR_3))
    FUNC_4(VAR_3->sval);
   FUNC_0(VAR_3->nval);
   FUNC_0(VAR_3);
   VAR_2->nelem--;
   return;
  }
}
