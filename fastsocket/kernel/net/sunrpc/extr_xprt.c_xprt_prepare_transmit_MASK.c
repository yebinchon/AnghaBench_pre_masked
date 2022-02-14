
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int transport_lock; TYPE_1__* ops; } ;
struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_reply_bytes_recvd; int rq_bytes_sent; struct rpc_xprt* rq_xprt; } ;
struct TYPE_2__ {int (* reserve_xprt ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_xprt*,struct rpc_task*) ;

int FUNC_4(struct rpc_task *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_1->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;
 int VAR_4 = 0;

 FUNC_0("RPC: %5u xprt_prepare_transmit\n", VAR_1->tk_pid);

 FUNC_1(&VAR_3->transport_lock);
 if (VAR_2->rq_reply_bytes_recvd && !VAR_2->rq_bytes_sent) {
  VAR_4 = VAR_2->rq_reply_bytes_recvd;
  goto out_unlock;
 }
 if (!VAR_3->ops->reserve_xprt(VAR_3, VAR_1))
  VAR_4 = -VAR_0;
out_unlock:
 FUNC_2(&VAR_3->transport_lock);
 return VAR_4;
}
