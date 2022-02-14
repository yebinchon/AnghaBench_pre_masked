
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pOrderBy; int pGroupBy; int pEList; int pLimit; int pHaving; int pWhere; struct TYPE_3__* pPrior; } ;
typedef TYPE_1__ Select ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(Select *VAR_0, int *VAR_1){
  Select *VAR_2;
  for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->pPrior){
    FUNC_0(VAR_2->pWhere, VAR_1);
    FUNC_0(VAR_2->pHaving, VAR_1);
    FUNC_0(VAR_2->pLimit, VAR_1);
    FUNC_1(VAR_2->pEList, VAR_1);
    FUNC_1(VAR_2->pGroupBy, VAR_1);
    FUNC_1(VAR_2->pOrderBy, VAR_1);
  }
}
