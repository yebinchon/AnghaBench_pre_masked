
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tcphdr {int doff; int rst; } ;
struct tcp_options_received {scalar_t__ rcv_tsecr; scalar_t__ saw_tstamp; int rcv_tsval; scalar_t__ ts_recent_stamp; int ts_recent; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int retrans; scalar_t__ rcv_wnd; TYPE_3__* rsk_ops; int ts_recent; } ;
typedef int __be32 ;
struct TYPE_14__ {scalar_t__ seq; scalar_t__ ack_seq; scalar_t__ end_seq; } ;
struct TYPE_8__ {int rskq_defer_accept; } ;
struct TYPE_13__ {TYPE_2__* icsk_af_ops; TYPE_1__ icsk_accept_queue; } ;
struct TYPE_12__ {int acked; } ;
struct TYPE_11__ {scalar_t__ rcv_isn; scalar_t__ snt_isn; scalar_t__ snt_synack; } ;
struct TYPE_10__ {int (* send_reset ) (struct sock*,struct sk_buff*) ;int (* send_ack ) (struct sock*,struct sk_buff*,struct request_sock*) ;int (* rtx_syn_ack ) (struct sock*,struct request_sock*) ;} ;
struct TYPE_9__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 TYPE_7__* FUNC_2 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 TYPE_6__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_7 (struct sock*,struct request_sock*,struct request_sock**) ;
 int FUNC_8 (struct sock*,struct request_sock*) ;
 int FUNC_9 (struct sock*,struct request_sock*,struct request_sock**) ;
 TYPE_5__* FUNC_10 (struct request_sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct request_sock*) ;
 int FUNC_13 (struct sock*,struct sk_buff*,struct request_sock*) ;
 struct sock* FUNC_14 (struct sock*,struct sk_buff*,struct request_sock*,int *) ;
 int FUNC_15 (struct sock*,struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_16 (struct tcphdr const*) ;
 struct tcphdr* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,struct tcp_options_received*,int ) ;
 int FUNC_20 (struct tcp_options_received*,int ) ;
 TYPE_4__* FUNC_21 (struct request_sock*) ;

struct sock *FUNC_22(struct sock *VAR_9, struct sk_buff *VAR_10,
      struct request_sock *VAR_11,
      struct request_sock **VAR_12)
{
 const struct tcphdr *VAR_13 = FUNC_17(VAR_10);
 __be32 VAR_14 = FUNC_16(VAR_13) & (VAR_4|VAR_5|VAR_3);
 int VAR_15 = 0;
 struct tcp_options_received VAR_16;
 struct sock *VAR_17;

 VAR_16.saw_tstamp = 0;
 if (VAR_13->doff > (sizeof(struct tcphdr)>>2)) {
  FUNC_19(VAR_10, &VAR_16, 0);

  if (VAR_16.saw_tstamp) {
   VAR_16.ts_recent = VAR_11->ts_recent;




   VAR_16.ts_recent_stamp = FUNC_4() - ((VAR_7/VAR_0)<<VAR_11->retrans);
   VAR_15 = FUNC_20(&VAR_16, VAR_13->rst);
  }
 }


 if (FUNC_2(VAR_10)->seq == FUNC_21(VAR_11)->rcv_isn &&
     VAR_14 == VAR_5 &&
     !VAR_15) {
  VAR_11->rsk_ops->rtx_syn_ack(VAR_9, VAR_11);
  return ((void*)0);
 }
 if ((VAR_14 & VAR_3) &&
     (FUNC_2(VAR_10)->ack_seq != FUNC_21(VAR_11)->snt_isn + 1))
  return VAR_9;
 if (VAR_15 || !FUNC_18(FUNC_2(VAR_10)->seq, FUNC_2(VAR_10)->end_seq,
       FUNC_21(VAR_11)->rcv_isn + 1, FUNC_21(VAR_11)->rcv_isn + 1 + VAR_11->rcv_wnd)) {

  if (!(VAR_14 & VAR_4))
   VAR_11->rsk_ops->send_ack(VAR_9, VAR_10, VAR_11);
  if (VAR_15)
   FUNC_0(FUNC_11(VAR_9), VAR_2);
  return ((void*)0);
 }



 if (VAR_16.saw_tstamp && !FUNC_3(FUNC_2(VAR_10)->seq, FUNC_21(VAR_11)->rcv_isn + 1))
  VAR_11->ts_recent = VAR_16.rcv_tsval;

 if (FUNC_2(VAR_10)->seq == FUNC_21(VAR_11)->rcv_isn) {


  VAR_14 &= ~VAR_5;
 }




 if (VAR_14 & (VAR_4|VAR_5)) {
  FUNC_1(FUNC_11(VAR_9), VAR_6);
  goto embryonic_reset;
 }




 if (!(VAR_14 & VAR_3))
  return ((void*)0);


 if (VAR_11->retrans < FUNC_5(VAR_9)->icsk_accept_queue.rskq_defer_accept &&
     FUNC_2(VAR_10)->end_seq == FUNC_21(VAR_11)->rcv_isn + 1) {
  FUNC_10(VAR_11)->acked = 1;
  return ((void*)0);
 }
 if (VAR_16.saw_tstamp && VAR_16.rcv_tsecr)
  FUNC_21(VAR_11)->snt_synack = VAR_16.rcv_tsecr;
 else if (VAR_11->retrans)
  FUNC_21(VAR_11)->snt_synack = 0;







 VAR_17 = FUNC_5(VAR_9)->icsk_af_ops->syn_recv_sock(VAR_9, VAR_10, VAR_11, ((void*)0));
 if (VAR_17 == ((void*)0))
  goto listen_overflow;

 FUNC_9(VAR_9, VAR_11, VAR_12);
 FUNC_8(VAR_9, VAR_11);

 FUNC_6(VAR_9, VAR_11, VAR_17);
 return VAR_17;

listen_overflow:
 if (!VAR_8) {
  FUNC_10(VAR_11)->acked = 1;
  return ((void*)0);
 }

embryonic_reset:
 FUNC_0(FUNC_11(VAR_9), VAR_1);
 if (!(VAR_14 & VAR_4))
  VAR_11->rsk_ops->send_reset(VAR_9, VAR_10);

 FUNC_7(VAR_9, VAR_11, VAR_12);
 return ((void*)0);
}
