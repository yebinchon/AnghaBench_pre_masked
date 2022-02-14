
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; TYPE_1__** tab; } ;
struct TYPE_5__ {struct TYPE_5__* cnext; int nval; } ;
typedef TYPE_1__ Cell ;
typedef TYPE_2__ Array ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(Array *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 Cell *VAR_5, *VAR_6, **VAR_7;

 VAR_4 = VAR_0 * VAR_1->size;
 VAR_7 = (Cell **) FUNC_0(VAR_4, sizeof(Cell *));
 if (VAR_7 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  for (VAR_5 = VAR_1->tab[VAR_2]; VAR_5; VAR_5 = VAR_6) {
   VAR_6 = VAR_5->cnext;
   VAR_3 = FUNC_2(VAR_5->nval, VAR_4);
   VAR_5->cnext = VAR_7[VAR_3];
   VAR_7[VAR_3] = VAR_5;
  }
 }
 FUNC_1(VAR_1->tab);
 VAR_1->tab = VAR_7;
 VAR_1->size = VAR_4;
}
