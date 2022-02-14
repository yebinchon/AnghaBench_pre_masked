
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* zIdx; struct TYPE_5__* zEQP; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ IdxStatement ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(IdxStatement *VAR_0, IdxStatement *VAR_1){
  IdxStatement *VAR_2;
  IdxStatement *VAR_3;
  for(VAR_2=VAR_0; VAR_2!=VAR_1; VAR_2=VAR_3){
    VAR_3 = VAR_2->pNext;
    FUNC_0(VAR_2->zEQP);
    FUNC_0(VAR_2->zIdx);
    FUNC_0(VAR_2);
  }
}
