
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iCol; struct TYPE_4__* pLink; } ;
typedef TYPE_1__ IdxConstraint ;



__attribute__((used)) static int FUNC_0(IdxConstraint *VAR_0, IdxConstraint *VAR_1){
  IdxConstraint *VAR_2;
  for(VAR_2=VAR_0; VAR_2; VAR_2=VAR_2->pLink){
    if( VAR_1->iCol==VAR_2->iCol ) return 1;
  }
  return 0;
}
