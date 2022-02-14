
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rpc_cred; } ;
struct rpc_task {int tk_status; int tk_pid; TYPE_5__* tk_rqstp; int tk_flags; TYPE_1__ tk_msg; } ;
struct rpc_cred {TYPE_4__* cr_ops; TYPE_3__* cr_auth; } ;
struct TYPE_10__ {struct rpc_cred* rq_cred; } ;
struct TYPE_9__ {int (* crrefresh ) (struct rpc_task*) ;} ;
struct TYPE_8__ {TYPE_2__* au_ops; } ;
struct TYPE_7__ {int au_name; } ;


 int FUNC_0 (char*,int ,int ,struct rpc_cred*) ;
 int FUNC_1 (struct rpc_task*,int ,int ) ;
 int FUNC_2 (struct rpc_task*) ;

int
FUNC_3(struct rpc_task *VAR_0)
{
 struct rpc_cred *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->tk_rqstp->rq_cred;
 if (VAR_1 == ((void*)0)) {
  VAR_2 = FUNC_1(VAR_0, VAR_0->tk_msg.rpc_cred, VAR_0->tk_flags);
  if (VAR_2 < 0)
   goto out;
  VAR_1 = VAR_0->tk_rqstp->rq_cred;
 };
 FUNC_0("RPC: %5u refreshing %s cred %p\n",
  VAR_0->tk_pid, VAR_1->cr_auth->au_ops->au_name, VAR_1);

 VAR_2 = VAR_1->cr_ops->crrefresh(VAR_0);
out:
 if (VAR_2 < 0)
  VAR_0->tk_status = VAR_2;
 return VAR_2;
}
