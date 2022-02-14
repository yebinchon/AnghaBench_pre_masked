
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt {int dummy; } ;
struct rpc_task {int tk_pid; TYPE_2__* tk_client; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_xid; int * rq_release_snd_buf; int * rq_buffer; struct rpc_xprt* rq_xprt; struct rpc_task* rq_task; int rq_timeout; int rq_list; } ;
struct TYPE_4__ {TYPE_1__* cl_timeout; } ;
struct TYPE_3__ {int to_initval; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,struct rpc_rqst*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_rqst*) ;

__attribute__((used)) static void FUNC_5(struct rpc_task *VAR_0, struct rpc_xprt *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;

 FUNC_0(&VAR_2->rq_list);
 VAR_2->rq_timeout = VAR_0->tk_client->cl_timeout->to_initval;
 VAR_2->rq_task = VAR_0;
 VAR_2->rq_xprt = VAR_1;
 VAR_2->rq_buffer = ((void*)0);
 VAR_2->rq_xid = FUNC_3(VAR_1);
 VAR_2->rq_release_snd_buf = ((void*)0);
 FUNC_4(VAR_2);
 FUNC_1("RPC: %5u reserved req %p xid %08x\n", VAR_0->tk_pid,
   VAR_2, FUNC_2(VAR_2->rq_xid));
}
