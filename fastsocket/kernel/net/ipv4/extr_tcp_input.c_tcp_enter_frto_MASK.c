
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int frto_counter; scalar_t__ snd_una; scalar_t__ high_seq; int snd_cwnd; scalar_t__ undo_marker; scalar_t__ frto_highmark; scalar_t__ snd_nxt; int retrans_out; scalar_t__ undo_retrans; int snd_ssthresh; int prior_ssthresh; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {int icsk_ca_state; TYPE_1__* icsk_ca_ops; int icsk_retransmits; } ;
struct TYPE_4__ {int sacked; } ;
struct TYPE_3__ {int (* ssthresh ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct tcp_sock*) ;
 scalar_t__ FUNC_9 (struct tcp_sock*) ;
 int FUNC_10 (struct sock*,int) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct tcp_sock*) ;
 struct sk_buff* FUNC_14 (struct sock*) ;

void FUNC_15(struct sock *VAR_7)
{
 const struct inet_connection_sock *VAR_8 = FUNC_2(VAR_7);
 struct tcp_sock *VAR_9 = FUNC_11(VAR_7);
 struct sk_buff *VAR_10;

 if ((!VAR_9->frto_counter && VAR_8->icsk_ca_state <= VAR_5) ||
     VAR_9->snd_una == VAR_9->high_seq ||
     ((VAR_8->icsk_ca_state == VAR_6 || VAR_9->frto_counter) &&
      !VAR_8->icsk_retransmits)) {
  VAR_9->prior_ssthresh = FUNC_7(VAR_7);
  if (VAR_9->frto_counter) {
   u32 VAR_11;
   VAR_11 = VAR_9->snd_cwnd;
   VAR_9->snd_cwnd = 2;
   VAR_9->snd_ssthresh = VAR_8->icsk_ca_ops->ssthresh(VAR_7);
   VAR_9->snd_cwnd = VAR_11;
  } else {
   VAR_9->snd_ssthresh = VAR_8->icsk_ca_ops->ssthresh(VAR_7);
  }







  FUNC_6(VAR_7, VAR_0);
 }

 VAR_9->undo_marker = VAR_9->snd_una;
 VAR_9->undo_retrans = 0;

 VAR_10 = FUNC_14(VAR_7);
 if (FUNC_0(VAR_10)->sacked & VAR_1)
  VAR_9->undo_marker = 0;
 if (FUNC_0(VAR_10)->sacked & VAR_2) {
  FUNC_0(VAR_10)->sacked &= ~VAR_2;
  VAR_9->retrans_out -= FUNC_12(VAR_10);
 }
 FUNC_13(VAR_9);


 VAR_9->snd_cwnd = FUNC_3(VAR_9->snd_cwnd, FUNC_9(VAR_9) + 1);




 if (FUNC_8(VAR_9) && (VAR_9->frto_counter ||
     ((1 << VAR_8->icsk_ca_state) & (VAR_4|VAR_3))) &&
     FUNC_1(VAR_9->high_seq, VAR_9->snd_una)) {
  VAR_9->frto_highmark = VAR_9->high_seq;
 } else {
  VAR_9->frto_highmark = VAR_9->snd_nxt;
 }
 FUNC_10(VAR_7, VAR_5);
 VAR_9->high_seq = VAR_9->snd_nxt;
 VAR_9->frto_counter = 1;
}
