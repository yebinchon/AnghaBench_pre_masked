
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int tk_pid; TYPE_1__* tk_rqstp; } ;
struct rpc_cred {int cr_flags; TYPE_3__* cr_auth; } ;
struct TYPE_6__ {TYPE_2__* au_ops; } ;
struct TYPE_5__ {int au_name; } ;
struct TYPE_4__ {struct rpc_cred* rq_cred; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ,int ,struct rpc_cred*) ;

void
FUNC_2(struct rpc_task *VAR_1)
{
 struct rpc_cred *VAR_2 = VAR_1->tk_rqstp->rq_cred;

 FUNC_1("RPC: %5u invalidating %s cred %p\n",
  VAR_1->tk_pid, VAR_2->cr_auth->au_ops->au_name, VAR_2);
 if (VAR_2)
  FUNC_0(VAR_0, &VAR_2->cr_flags);
}
