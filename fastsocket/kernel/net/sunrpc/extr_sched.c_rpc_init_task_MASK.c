
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {int workqueue; scalar_t__ priority; int callback_data; TYPE_1__* callback_ops; int flags; } ;
struct rpc_task {int tk_garb_retry; int tk_cred_retry; int tk_rebind_retry; int tk_start; int tk_action; TYPE_1__* tk_ops; int tk_workqueue; int tk_owner; scalar_t__ tk_priority; int tk_task; int tk_calldata; int tk_flags; int tk_count; } ;
struct TYPE_5__ {int tgid; } ;
struct TYPE_4__ {int * rpc_call_prepare; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct rpc_task*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct rpc_task *VAR_3, const struct rpc_task_setup *VAR_4)
{
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 FUNC_1(&VAR_3->tk_count, 1);
 VAR_3->tk_flags = VAR_4->flags;
 VAR_3->tk_ops = VAR_4->callback_ops;
 VAR_3->tk_calldata = VAR_4->callback_data;
 FUNC_0(&VAR_3->tk_task);


 VAR_3->tk_garb_retry = 2;
 VAR_3->tk_cred_retry = 2;
 VAR_3->tk_rebind_retry = 2;

 VAR_3->tk_priority = VAR_4->priority - VAR_0;
 VAR_3->tk_owner = VAR_1->tgid;


 VAR_3->tk_workqueue = VAR_4->workqueue;

 if (VAR_3->tk_ops->rpc_call_prepare != ((void*)0))
  VAR_3->tk_action = VAR_2;


 VAR_3->tk_start = FUNC_3();

 FUNC_2("RPC:       new task initialized, procpid %u\n",
    FUNC_5(VAR_1));
}
