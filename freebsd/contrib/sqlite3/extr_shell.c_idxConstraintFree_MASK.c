
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; } ;
typedef TYPE_1__ IdxConstraint ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(IdxConstraint *VAR_0){
  IdxConstraint *VAR_1;
  IdxConstraint *VAR_2;

  for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_1){
    VAR_1 = VAR_2->pNext;
    FUNC_0(VAR_2);
  }
}
