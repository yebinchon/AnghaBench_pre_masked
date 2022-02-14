
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_cwnd_stamp; int snd_nxt; int high_seq; scalar_t__ snd_cwnd_cnt; int snd_cwnd; int snd_ssthresh; scalar_t__ undo_marker; scalar_t__ bytes_acked; scalar_t__ prior_ssthresh; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; TYPE_1__* icsk_ca_ops; } ;
struct TYPE_2__ {int (* ssthresh ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tcp_sock*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 int FUNC_5 (struct sock*,scalar_t__) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int VAR_1 ;

void FUNC_7(struct sock *VAR_2, const int VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_2);
 const struct inet_connection_sock *VAR_5 = FUNC_1(VAR_2);

 VAR_4->prior_ssthresh = 0;
 VAR_4->bytes_acked = 0;
 if (VAR_5->icsk_ca_state < VAR_0) {
  VAR_4->undo_marker = 0;
  if (VAR_3)
   VAR_4->snd_ssthresh = VAR_5->icsk_ca_ops->ssthresh(VAR_2);
  VAR_4->snd_cwnd = FUNC_2(VAR_4->snd_cwnd,
       FUNC_4(VAR_4) + 1U);
  VAR_4->snd_cwnd_cnt = 0;
  VAR_4->high_seq = VAR_4->snd_nxt;
  VAR_4->snd_cwnd_stamp = VAR_1;
  FUNC_0(VAR_4);

  FUNC_5(VAR_2, VAR_0);
 }
}
