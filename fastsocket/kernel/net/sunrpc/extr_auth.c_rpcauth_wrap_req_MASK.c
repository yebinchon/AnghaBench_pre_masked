
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_pid; TYPE_1__* tk_rqstp; } ;
struct rpc_cred {TYPE_2__* cr_ops; } ;
typedef int (* kxdrproc_t ) (void*,int *,void*) ;
typedef int __be32 ;
struct TYPE_4__ {int (* crwrap_req ) (struct rpc_task*,int (*) (void*,int *,void*),void*,int *,void*) ;int cr_name; } ;
struct TYPE_3__ {struct rpc_cred* rq_cred; } ;


 int FUNC_0 (char*,int ,int ,struct rpc_cred*) ;
 int FUNC_1 (struct rpc_task*,int (*) (void*,int *,void*),void*,int *,void*) ;

int
FUNC_2(struct rpc_task *VAR_0, kxdrproc_t VAR_1, void *VAR_2,
  __be32 *VAR_3, void *VAR_4)
{
 struct rpc_cred *VAR_5 = VAR_0->tk_rqstp->rq_cred;

 FUNC_0("RPC: %5u using %s cred %p to wrap rpc data\n",
   VAR_0->tk_pid, VAR_5->cr_ops->cr_name, VAR_5);
 if (VAR_5->cr_ops->crwrap_req)
  return VAR_5->cr_ops->crwrap_req(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_1(VAR_2, VAR_3, VAR_4);
}
