
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pRange; int pEq; int pOrder; struct TYPE_5__* pNextScan; } ;
typedef TYPE_1__ IdxScan ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(IdxScan *VAR_0, IdxScan *VAR_1){
  IdxScan *VAR_2;
  IdxScan *VAR_3;
  for(VAR_2=VAR_0; VAR_2!=VAR_1; VAR_2=VAR_3){
    VAR_3 = VAR_2->pNextScan;
    FUNC_0(VAR_2->pOrder);
    FUNC_0(VAR_2->pEq);
    FUNC_0(VAR_2->pRange);
    FUNC_1(VAR_2);
  }
}
