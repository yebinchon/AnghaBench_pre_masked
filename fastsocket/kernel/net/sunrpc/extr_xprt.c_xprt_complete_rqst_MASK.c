
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recvs; } ;
struct rpc_xprt {int pending; TYPE_2__* ops; TYPE_1__ stat; } ;
struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct TYPE_6__ {int len; } ;
struct rpc_rqst {int rq_reply_bytes_recvd; TYPE_3__ rq_private_buf; int rq_list; int rq_xtime; int rq_rtt; int rq_xid; struct rpc_xprt* rq_xprt; } ;
struct TYPE_5__ {int * timer; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct rpc_task*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct rpc_task*) ;

void FUNC_8(struct rpc_task *VAR_0, int VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;
 struct rpc_xprt *VAR_3 = VAR_2->rq_xprt;

 FUNC_0("RPC: %5u xid %08x complete (%d bytes received)\n",
   VAR_0->tk_pid, FUNC_4(VAR_2->rq_xid), VAR_1);

 VAR_3->stat.recvs++;
 VAR_2->rq_rtt = FUNC_2(FUNC_1(), VAR_2->rq_xtime);
 if (VAR_3->ops->timer != ((void*)0))
  FUNC_7(VAR_0);

 FUNC_3(&VAR_2->rq_list);
 VAR_2->rq_private_buf.len = VAR_1;


 FUNC_6();
 VAR_2->rq_reply_bytes_recvd = VAR_1;
 FUNC_5(&VAR_3->pending, VAR_0);
}
