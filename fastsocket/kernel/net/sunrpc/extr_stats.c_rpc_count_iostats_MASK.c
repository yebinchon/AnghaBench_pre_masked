
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {int tk_start; scalar_t__ tk_timeouts; TYPE_2__ tk_msg; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_rtt; int rq_xtime; scalar_t__ rq_reply_bytes_recvd; scalar_t__ rq_xmit_bytes_sent; scalar_t__ rq_ntrans; } ;
struct rpc_iostats {void* om_execute; void* om_rtt; void* om_queue; int om_bytes_recv; int om_bytes_sent; int om_timeouts; int om_ntrans; int om_ops; } ;
typedef int ktime_t ;
struct TYPE_3__ {size_t p_statidx; } ;


 void* FUNC_0 (void*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(const struct rpc_task *VAR_0, struct rpc_iostats *VAR_1)
{
 struct rpc_rqst *VAR_2 = VAR_0->tk_rqstp;
 struct rpc_iostats *VAR_3;
 ktime_t VAR_4;

 if (!VAR_1 || !VAR_2)
  return;

 VAR_3 = &VAR_1[VAR_0->tk_msg.rpc_proc->p_statidx];

 VAR_3->om_ops++;
 VAR_3->om_ntrans += VAR_2->rq_ntrans;
 VAR_3->om_timeouts += VAR_0->tk_timeouts;

 VAR_3->om_bytes_sent += VAR_2->rq_xmit_bytes_sent;
 VAR_3->om_bytes_recv += VAR_2->rq_reply_bytes_recvd;

 VAR_4 = FUNC_2(VAR_2->rq_xtime, VAR_0->tk_start);
 VAR_3->om_queue = FUNC_0(VAR_3->om_queue, VAR_4);

 VAR_3->om_rtt = FUNC_0(VAR_3->om_rtt, VAR_2->rq_rtt);

 VAR_4 = FUNC_2(FUNC_1(), VAR_0->tk_start);
 VAR_3->om_execute = FUNC_0(VAR_3->om_execute, VAR_4);
}
