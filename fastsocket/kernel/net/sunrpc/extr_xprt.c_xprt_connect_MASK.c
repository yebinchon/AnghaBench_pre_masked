
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int connect_start; } ;
struct rpc_xprt {TYPE_3__* ops; TYPE_2__ stat; int state; int pending; } ;
struct rpc_task {TYPE_1__* tk_rqstp; int tk_timeout; int tk_status; int tk_pid; struct rpc_xprt* tk_xprt; } ;
struct TYPE_6__ {int (* connect ) (struct rpc_task*) ;int (* close ) (struct rpc_xprt*) ;} ;
struct TYPE_4__ {int rq_timeout; scalar_t__ rq_bytes_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,struct rpc_xprt*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (struct rpc_task*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rpc_xprt*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct rpc_xprt*) ;
 int FUNC_8 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_9 (struct rpc_xprt*,struct rpc_task*) ;
 scalar_t__ FUNC_10 (struct rpc_xprt*) ;

void FUNC_11(struct rpc_task *VAR_5)
{
 struct rpc_xprt *VAR_6 = VAR_5->tk_xprt;

 FUNC_0("RPC: %5u xprt_connect xprt %p %s connected\n", VAR_5->tk_pid,
   VAR_6, (FUNC_7(VAR_6) ? "is" : "is not"));

 if (!FUNC_6(VAR_6)) {
  VAR_5->tk_status = -VAR_0;
  return;
 }
 if (!FUNC_8(VAR_6, VAR_5))
  return;

 if (FUNC_4(VAR_1, &VAR_6->state))
  VAR_6->ops->close(VAR_6);

 if (FUNC_7(VAR_6))
  FUNC_9(VAR_6, VAR_5);
 else {
  if (VAR_5->tk_rqstp)
   VAR_5->tk_rqstp->rq_bytes_sent = 0;

  VAR_5->tk_timeout = VAR_5->tk_rqstp->rq_timeout;
  FUNC_1(&VAR_6->pending, VAR_5, VAR_4);

  if (FUNC_5(VAR_2, &VAR_6->state))
   return;
  if (FUNC_10(VAR_6))
   return;
  VAR_6->stat.connect_start = VAR_3;
  VAR_6->ops->connect(VAR_5);
 }
}
