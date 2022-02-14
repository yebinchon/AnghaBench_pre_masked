
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd_cnt; scalar_t__ snd_cwnd; int snd_cwnd_stamp; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_4, int VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = VAR_6->snd_cwnd_cnt + 1;

 if ((VAR_5 & (VAR_0 | VAR_1)) ||
     (FUNC_2(VAR_6) && !(VAR_5 & VAR_2))) {
  VAR_6->snd_cwnd_cnt = VAR_7 & 1;
  VAR_7 >>= 1;

  if (VAR_7 && VAR_6->snd_cwnd > FUNC_1(VAR_4))
   VAR_6->snd_cwnd -= VAR_7;

  VAR_6->snd_cwnd = FUNC_0(VAR_6->snd_cwnd, FUNC_3(VAR_6) + 1);
  VAR_6->snd_cwnd_stamp = VAR_3;
 }
}
