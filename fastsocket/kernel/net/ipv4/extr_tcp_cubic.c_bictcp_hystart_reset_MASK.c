
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_nxt; } ;
struct sock {int dummy; } ;
struct bictcp {scalar_t__ sample_cnt; scalar_t__ curr_rtt; int end_seq; int last_ack; int round_start; } ;


 int FUNC_0 () ;
 struct bictcp* FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_2(VAR_0);
 struct bictcp *VAR_2 = FUNC_1(VAR_0);

 VAR_2->round_start = VAR_2->last_ack = FUNC_0();
 VAR_2->end_seq = VAR_1->snd_nxt;
 VAR_2->curr_rtt = 0;
 VAR_2->sample_cnt = 0;
}
