
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int pending; } ;
struct rpc_task {int tk_timeout; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_timeout; struct rpc_xprt* rq_xprt; } ;
typedef int rpc_action ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (int *,struct rpc_task*,int ) ;

void FUNC_2(struct rpc_task *VAR_0, rpc_action VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 VAR_0->tk_timeout = FUNC_0(VAR_0) ? VAR_2->rq_timeout : 0;
 FUNC_1(&VAR_3->pending, VAR_0, VAR_1);
}
