
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int transport_lock; TYPE_1__* ops; } ;
struct rpc_task {int tk_status; int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_reply_bytes_recvd; struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* timer ) (struct rpc_task*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 if (VAR_1->tk_status != -VAR_0)
  return;
 FUNC_0("RPC: %5u xprt_timer\n", VAR_1->tk_pid);

 FUNC_1(&VAR_3->transport_lock);
 if (!VAR_2->rq_reply_bytes_recvd) {
  if (VAR_3->ops->timer)
   VAR_3->ops->timer(VAR_1);
 } else
  VAR_1->tk_status = 0;
 FUNC_2(&VAR_3->transport_lock);
}
