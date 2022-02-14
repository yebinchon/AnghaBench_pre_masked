
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int probe_seq_start; } ;
struct tcp_sock {scalar_t__ reordering; scalar_t__ fackets_out; scalar_t__ retrans_out; scalar_t__ undo_retrans; int prr_delivered; int prr_out; int snd_cwnd; int prior_cwnd; int snd_cwnd_cnt; int bytes_acked; int snd_ssthresh; scalar_t__ prior_ssthresh; int snd_una; int undo_marker; int snd_nxt; int high_seq; TYPE_2__ mtu_probe; scalar_t__ retrans_stamp; scalar_t__ sacked_out; int packets_out; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int probe_size; } ;
struct inet_connection_sock {int const icsk_ca_state; TYPE_3__* icsk_ca_ops; TYPE_1__ icsk_mtup; int icsk_retransmits; } ;
struct TYPE_6__ {int (* ssthresh ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;

 int const VAR_8 ;

 int const VAR_9 ;

 int FUNC_1 (struct tcp_sock*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sock*,int) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (struct tcp_sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct tcp_sock*) ;
 int FUNC_14 (struct tcp_sock*) ;
 int FUNC_15 (struct sock*,scalar_t__) ;
 int FUNC_16 (struct tcp_sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct tcp_sock*) ;
 int FUNC_19 (struct sock*,int const) ;
 int FUNC_20 (struct sock*) ;
 struct tcp_sock* FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*,int) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*,int) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*,int,int,int) ;
 int FUNC_29 (struct sock*,int) ;
 int FUNC_30 (struct tcp_sock*) ;
 int FUNC_31 (struct sock*) ;

__attribute__((used)) static void FUNC_32(struct sock *VAR_10, int VAR_11,
      int VAR_12, bool VAR_13,
      int VAR_14)
{
 struct inet_connection_sock *VAR_15 = FUNC_4(VAR_10);
 struct tcp_sock *VAR_16 = FUNC_21(VAR_10);
 int VAR_17 = VAR_13 || ((VAR_14 & VAR_2) &&
        (FUNC_11(VAR_16) > VAR_16->reordering));
 int VAR_18 = 0, VAR_19;

 if (FUNC_2(!VAR_16->packets_out && VAR_16->sacked_out))
  VAR_16->sacked_out = 0;
 if (FUNC_2(!VAR_16->sacked_out && VAR_16->fackets_out))
  VAR_16->fackets_out = 0;



 if (VAR_14 & VAR_3)
  VAR_16->prior_ssthresh = 0;


 if (FUNC_8(VAR_10, VAR_14))
  return;


 if (FUNC_13(VAR_16) && (VAR_14 & VAR_1) &&
     FUNC_3(VAR_16->snd_una, VAR_16->high_seq) &&
     VAR_15->icsk_ca_state != VAR_9 &&
     VAR_16->fackets_out > VAR_16->reordering) {
  FUNC_15(VAR_10, VAR_16->fackets_out - VAR_16->reordering);
  FUNC_0(FUNC_5(VAR_10), VAR_5);
 }


 FUNC_30(VAR_16);



 if (VAR_15->icsk_ca_state == VAR_9) {
  FUNC_2(VAR_16->retrans_out != 0);
  VAR_16->retrans_stamp = 0;
 } else if (!FUNC_3(VAR_16->snd_una, VAR_16->high_seq)) {
  switch (VAR_15->icsk_ca_state) {
  case 129:
   VAR_15->icsk_retransmits = 0;
   if (FUNC_27(VAR_10))
    return;
   break;

  case 130:


   if (VAR_16->snd_una != VAR_16->high_seq) {
    FUNC_9(VAR_10);
    FUNC_19(VAR_10, VAR_9);
   }
   break;

  case 128:
   if (FUNC_14(VAR_16))
    FUNC_18(VAR_16);
   if (FUNC_27(VAR_10))
    return;
   FUNC_9(VAR_10);
   break;
  }
 }


 switch (VAR_15->icsk_ca_state) {
 case 128:
  if (!(VAR_14 & VAR_4)) {
   if (FUNC_14(VAR_16) && VAR_13)
    FUNC_7(VAR_10);
  } else
   VAR_17 = FUNC_26(VAR_10, VAR_11);
  break;
 case 129:
  if (VAR_14 & VAR_0)
   VAR_15->icsk_retransmits = 0;
  if (FUNC_14(VAR_16) && VAR_14 & VAR_4)
   FUNC_18(VAR_16);
  if (!FUNC_25(VAR_10)) {
   FUNC_16(VAR_16);
   FUNC_31(VAR_10);
   return;
  }
  if (VAR_15->icsk_ca_state != VAR_9)
   return;

 default:
  if (FUNC_14(VAR_16)) {
   if (VAR_14 & VAR_4)
    FUNC_18(VAR_16);
   if (VAR_13)
    FUNC_7(VAR_10);
  }

  if (VAR_15->icsk_ca_state <= VAR_8)
   FUNC_24(VAR_10);

  if (!FUNC_22(VAR_10)) {
   FUNC_23(VAR_10, VAR_14);
   return;
  }


  if (VAR_15->icsk_ca_state < 130 &&
      VAR_15->icsk_mtup.probe_size &&
      VAR_16->snd_una == VAR_16->mtu_probe.probe_seq_start) {
   FUNC_17(VAR_10);

   VAR_16->snd_cwnd++;
   FUNC_20(VAR_10);
   return;
  }



  if (FUNC_14(VAR_16))
   VAR_19 = VAR_6;
  else
   VAR_19 = VAR_7;

  FUNC_0(FUNC_5(VAR_10), VAR_19);

  VAR_16->high_seq = VAR_16->snd_nxt;
  VAR_16->prior_ssthresh = 0;
  VAR_16->undo_marker = VAR_16->snd_una;
  VAR_16->undo_retrans = VAR_16->retrans_out;

  if (VAR_15->icsk_ca_state < 130) {
   if (!(VAR_14 & VAR_3))
    VAR_16->prior_ssthresh = FUNC_10(VAR_10);
   VAR_16->snd_ssthresh = VAR_15->icsk_ca_ops->ssthresh(VAR_10);
   FUNC_1(VAR_16);
  }

  VAR_16->bytes_acked = 0;
  VAR_16->snd_cwnd_cnt = 0;
  VAR_16->prior_cwnd = VAR_16->snd_cwnd;
  VAR_16->prr_delivered = 0;
  VAR_16->prr_out = 0;
  FUNC_19(VAR_10, 128);
  VAR_18 = 1;
 }

 if (VAR_17 || (FUNC_13(VAR_16) && FUNC_12(VAR_10)))
  FUNC_29(VAR_10, VAR_18);
 VAR_16->prr_delivered += VAR_12;
 FUNC_28(VAR_10, VAR_12, VAR_18, VAR_14);
 FUNC_31(VAR_10);
}
