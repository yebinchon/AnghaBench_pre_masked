
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int tk_pid; TYPE_1__* tk_rqstp; } ;
struct rpc_cred {TYPE_4__* cr_ops; TYPE_3__* cr_auth; } ;
typedef int __be32 ;
struct TYPE_8__ {int * (* crvalidate ) (struct rpc_task*,int *) ;} ;
struct TYPE_7__ {TYPE_2__* au_ops; } ;
struct TYPE_6__ {int au_name; } ;
struct TYPE_5__ {struct rpc_cred* rq_cred; } ;


 int FUNC_0 (char*,int ,int ,struct rpc_cred*) ;
 int * FUNC_1 (struct rpc_task*,int *) ;

__be32 *
FUNC_2(struct rpc_task *VAR_0, __be32 *VAR_1)
{
 struct rpc_cred *VAR_2 = VAR_0->tk_rqstp->rq_cred;

 FUNC_0("RPC: %5u validating %s cred %p\n",
  VAR_0->tk_pid, VAR_2->cr_auth->au_ops->au_name, VAR_2);

 return VAR_2->cr_ops->crvalidate(VAR_0, VAR_1);
}
