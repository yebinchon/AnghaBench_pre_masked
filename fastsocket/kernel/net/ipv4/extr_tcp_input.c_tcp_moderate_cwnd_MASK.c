
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd_stamp; int snd_cwnd; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct tcp_sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_3(struct tcp_sock *VAR_1)
{
 VAR_1->snd_cwnd = FUNC_0(VAR_1->snd_cwnd,
      FUNC_2(VAR_1) + FUNC_1(VAR_1));
 VAR_1->snd_cwnd_stamp = VAR_0;
}
