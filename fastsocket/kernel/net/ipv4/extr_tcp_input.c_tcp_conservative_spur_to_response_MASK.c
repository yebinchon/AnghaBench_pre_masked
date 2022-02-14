
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ bytes_acked; scalar_t__ snd_cwnd_cnt; int snd_ssthresh; int snd_cwnd; } ;


 int FUNC_0 (struct tcp_sock*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_3(struct tcp_sock *VAR_0)
{
 VAR_0->snd_cwnd = FUNC_1(VAR_0->snd_cwnd, VAR_0->snd_ssthresh);
 VAR_0->snd_cwnd_cnt = 0;
 VAR_0->bytes_acked = 0;
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
