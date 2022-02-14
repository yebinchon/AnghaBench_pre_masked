
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pThread; scalar_t__ bDone; } ;
typedef TYPE_1__ SortSubtask ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,void* (*) (void*),void*) ;

__attribute__((used)) static int FUNC_2(
  SortSubtask *VAR_0,
  void *(*VAR_1)(void*),
  void *VAR_2
){
  FUNC_0( VAR_0->pThread==0 && VAR_0->bDone==0 );
  return FUNC_1(&VAR_0->pThread, VAR_1, VAR_2);
}
