
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ qlen; } ;
struct TYPE_9__ {int max_slots; int pending_u; int sending_u; int bklog_u; scalar_t__ recvs; scalar_t__ sends; int req_u; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct TYPE_7__ {scalar_t__ qlen; } ;
struct rpc_xprt {int transport_lock; TYPE_5__ pending; TYPE_4__ stat; TYPE_3__ sending; TYPE_2__ backlog; int num_reqs; TYPE_1__* ops; int connect_cookie; int timer; int recv; } ;
struct rpc_task {int tk_status; int tk_flags; int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_reply_bytes_recvd; int rq_xtime; int rq_connect_cookie; int rq_bytes_sent; int rq_list; int rq_rcv_buf; int rq_private_buf; int rq_slen; struct rpc_xprt* rq_xprt; } ;
struct TYPE_6__ {int (* send_request ) (struct rpc_task*) ;int (* set_retrans_timeout ) (struct rpc_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (TYPE_5__*,struct rpc_task*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct rpc_task*) ;
 int FUNC_12 (struct rpc_task*) ;
 int FUNC_13 (struct rpc_xprt*) ;
 int FUNC_14 (struct rpc_rqst*) ;
 int VAR_2 ;

void FUNC_15(struct rpc_task *VAR_3)
{
 struct rpc_rqst *VAR_4 = VAR_3->tk_rqstp;
 struct rpc_xprt *VAR_5 = VAR_4->rq_xprt;
 int VAR_6, VAR_7;

 FUNC_2("RPC: %5u xprt_transmit(%u)\n", VAR_3->tk_pid, VAR_4->rq_slen);

 if (!VAR_4->rq_reply_bytes_recvd) {
  if (FUNC_5(&VAR_4->rq_list) && FUNC_7(VAR_3)) {



   FUNC_9(&VAR_5->transport_lock);

   FUNC_6(&VAR_4->rq_private_buf, &VAR_4->rq_rcv_buf,
     sizeof(VAR_4->rq_private_buf));

   FUNC_4(&VAR_4->rq_list, &VAR_5->recv);
   FUNC_10(&VAR_5->transport_lock);
   FUNC_14(VAR_4);

   FUNC_1(&VAR_5->timer);
  }
 } else if (!VAR_4->rq_bytes_sent)
  return;

 VAR_4->rq_connect_cookie = VAR_5->connect_cookie;
 VAR_4->rq_xtime = FUNC_3();
 VAR_6 = VAR_5->ops->send_request(VAR_3);
 if (VAR_6 != 0) {
  VAR_3->tk_status = VAR_6;
  return;
 }

 FUNC_2("RPC: %5u xmit complete\n", VAR_3->tk_pid);
 VAR_3->tk_flags |= VAR_1;
 FUNC_9(&VAR_5->transport_lock);

 VAR_5->ops->set_retrans_timeout(VAR_3);

 VAR_7 = FUNC_0(&VAR_5->num_reqs);
 if (VAR_7 > VAR_5->stat.max_slots)
  VAR_5->stat.max_slots = VAR_7;
 VAR_5->stat.sends++;
 VAR_5->stat.req_u += VAR_5->stat.sends - VAR_5->stat.recvs;
 VAR_5->stat.bklog_u += VAR_5->backlog.qlen;
 VAR_5->stat.sending_u += VAR_5->sending.qlen;
 VAR_5->stat.pending_u += VAR_5->pending.qlen;


 if (!FUNC_13(VAR_5))
  VAR_3->tk_status = -VAR_0;
 else if (!VAR_4->rq_reply_bytes_recvd && FUNC_7(VAR_3)) {




  FUNC_8(&VAR_5->pending, VAR_3, VAR_2);
 }
 FUNC_10(&VAR_5->transport_lock);
}
