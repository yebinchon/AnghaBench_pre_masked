
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pRow; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
struct TYPE_6__ {TYPE_4__ sGraph; } ;
typedef TYPE_1__ ShellState ;
typedef TYPE_2__ EQPGraphRow ;


 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(ShellState *VAR_0){
  EQPGraphRow *VAR_1, *VAR_2;
  for(VAR_1 = VAR_0->sGraph.pRow; VAR_1; VAR_1 = VAR_2){
    VAR_2 = VAR_1->pNext;
    FUNC_1(VAR_1);
  }
  FUNC_0(&VAR_0->sGraph, 0, sizeof(VAR_0->sGraph));
}
