
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timer; int list; } ;
struct rpc_wait_queue {TYPE_3__ timer_list; } ;
struct TYPE_4__ {int timer_list; } ;
struct TYPE_5__ {TYPE_1__ tk_wait; } ;
struct rpc_task {scalar_t__ tk_timeout; TYPE_2__ u; int tk_pid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rpc_wait_queue *VAR_0, struct rpc_task *VAR_1)
{
 if (VAR_1->tk_timeout == 0)
  return;
 FUNC_1("RPC: %5u disabling timer\n", VAR_1->tk_pid);
 VAR_1->tk_timeout = 0;
 FUNC_2(&VAR_1->u.tk_wait.timer_list);
 if (FUNC_3(&VAR_0->timer_list.list))
  FUNC_0(&VAR_0->timer_list.timer);
}
