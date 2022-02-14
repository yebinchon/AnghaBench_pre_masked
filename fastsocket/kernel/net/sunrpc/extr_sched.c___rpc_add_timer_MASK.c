
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int list; int expires; } ;
struct rpc_wait_queue {TYPE_3__ timer_list; } ;
struct TYPE_4__ {int timer_list; scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_1__ tk_wait; } ;
struct rpc_task {int tk_timeout; TYPE_2__ u; int tk_pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_wait_queue*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct rpc_wait_queue *VAR_2, struct rpc_task *VAR_3)
{
 if (!VAR_3->tk_timeout)
  return;

 FUNC_0("RPC: %5u setting alarm for %lu ms\n",
   VAR_3->tk_pid, VAR_3->tk_timeout * 1000 / VAR_0);

 VAR_3->u.tk_wait.expires = VAR_1 + VAR_3->tk_timeout;
 if (FUNC_2(&VAR_2->timer_list.list) || FUNC_4(VAR_3->u.tk_wait.expires, VAR_2->timer_list.expires))
  FUNC_3(VAR_2, VAR_3->u.tk_wait.expires);
 FUNC_1(&VAR_3->u.tk_wait.timer_list, &VAR_2->timer_list.list);
}
