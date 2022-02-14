
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ v_count; int v_usecount; } ;
typedef TYPE_1__ vnode_t ;
typedef int taskq_t ;
typedef int task_func_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(vnode_t *VAR_2, taskq_t *VAR_3)
{
 FUNC_0(VAR_2->v_count > 0);
 if (FUNC_1(&VAR_2->v_usecount)) {
  return;
 }
 FUNC_0(FUNC_2((taskq_t *)VAR_3,
     (task_func_t *)VAR_1, VAR_2, VAR_0) != 0);
}
