
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int prior_ssthresh; int snd_ssthresh; int snd_cwnd_stamp; void* snd_cwnd; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_2__ {void* (* undo_cwnd ) (struct sock*) ;} ;


 int FUNC_0 (struct tcp_sock*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, const bool VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_1);

 if (VAR_3->prior_ssthresh) {
  const struct inet_connection_sock *VAR_4 = FUNC_1(VAR_1);

  if (VAR_4->icsk_ca_ops->undo_cwnd)
   VAR_3->snd_cwnd = VAR_4->icsk_ca_ops->undo_cwnd(VAR_1);
  else
   VAR_3->snd_cwnd = FUNC_2(VAR_3->snd_cwnd, VAR_3->snd_ssthresh << 1);

  if (VAR_2 && VAR_3->prior_ssthresh > VAR_3->snd_ssthresh) {
   VAR_3->snd_ssthresh = VAR_3->prior_ssthresh;
   FUNC_0(VAR_3);
  }
 } else {
  VAR_3->snd_cwnd = FUNC_2(VAR_3->snd_cwnd, VAR_3->snd_ssthresh);
 }
 VAR_3->snd_cwnd_stamp = VAR_0;
}
