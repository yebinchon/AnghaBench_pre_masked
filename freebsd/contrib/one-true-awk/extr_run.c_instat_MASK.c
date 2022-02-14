
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int size; TYPE_1__** tab; } ;
struct TYPE_13__ {struct TYPE_13__* cnext; int nval; scalar_t__ sval; } ;
typedef int Node ;
typedef TYPE_1__ Cell ;
typedef TYPE_2__ Array ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

Cell *FUNC_8(Node **VAR_1, int VAR_2)
{
 Cell *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 Array *VAR_8;
 int VAR_9;

 VAR_4 = FUNC_0(VAR_1[0]);
 VAR_5 = FUNC_0(VAR_1[1]);
 if (!FUNC_1(VAR_5)) {
  return VAR_0;
 }
 VAR_8 = (Array *) VAR_5->sval;
 FUNC_7(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_8->size; VAR_9++) {
  for (VAR_6 = VAR_8->tab[VAR_9]; VAR_6 != ((void*)0); VAR_6 = VAR_7) {
   FUNC_6(VAR_4, VAR_6->nval);
   VAR_7 = VAR_6->cnext;
   VAR_3 = FUNC_0(VAR_1[2]);
   if (FUNC_2(VAR_3)) {
    FUNC_7(VAR_4);
    return VAR_0;
   }
   if (FUNC_4(VAR_3) || FUNC_3(VAR_3) || FUNC_5(VAR_3)) {
    FUNC_7(VAR_4);
    return(VAR_3);
   }
   FUNC_7(VAR_3);
  }
 }
 return VAR_0;
}
