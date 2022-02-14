
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; int tk_xprt; struct rpc_rqst* tk_rqstp; struct rpc_clnt* tk_client; } ;
struct rpc_rqst {TYPE_3__* rq_svec; int rq_slen; int rq_xid; } ;
struct rpc_clnt {int cl_vers; int cl_prog; } ;
typedef int __be32 ;
struct TYPE_6__ {int * iov_base; } ;
struct TYPE_4__ {int p_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int * FUNC_1 (struct rpc_task*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int * FUNC_3 (int ,int *) ;

__attribute__((used)) static __be32 *
FUNC_4(struct rpc_task *VAR_2)
{
 struct rpc_clnt *VAR_3 = VAR_2->tk_client;
 struct rpc_rqst *VAR_4 = VAR_2->tk_rqstp;
 __be32 *VAR_5 = VAR_4->rq_svec[0].iov_base;



 VAR_5 = FUNC_3(VAR_2->tk_xprt, VAR_5);
 *VAR_5++ = VAR_4->rq_xid;
 *VAR_5++ = FUNC_0(VAR_0);
 *VAR_5++ = FUNC_0(VAR_1);
 *VAR_5++ = FUNC_0(VAR_3->cl_prog);
 *VAR_5++ = FUNC_0(VAR_3->cl_vers);
 *VAR_5++ = FUNC_0(VAR_2->tk_msg.rpc_proc->p_proc);
 VAR_5 = FUNC_1(VAR_2, VAR_5);
 VAR_4->rq_slen = FUNC_2(&VAR_4->rq_svec[0], VAR_5);
 return VAR_5;
}
