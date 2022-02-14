
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_cwnd_stamp; int snd_ssthresh; int snd_cwnd; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_3(VAR_3);


 if (VAR_4->undo_marker) {
  if (FUNC_0(VAR_3)->icsk_ca_state == VAR_1)
   VAR_4->snd_cwnd = FUNC_1(VAR_4->snd_cwnd, VAR_4->snd_ssthresh);
  else
   VAR_4->snd_cwnd = VAR_4->snd_ssthresh;
  VAR_4->snd_cwnd_stamp = VAR_2;
 }
 FUNC_2(VAR_3, VAR_0);
}
