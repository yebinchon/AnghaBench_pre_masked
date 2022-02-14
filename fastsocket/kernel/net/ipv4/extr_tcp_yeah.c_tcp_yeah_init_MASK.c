
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yeah {int reno_count; scalar_t__ lastQ; scalar_t__ doing_reno_now; } ;
struct tcp_sock {int snd_cwnd_clamp; } ;
struct sock {int dummy; } ;


 struct yeah* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct yeah *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(VAR_1);

 VAR_3->doing_reno_now = 0;
 VAR_3->lastQ = 0;

 VAR_3->reno_count = 2;



 VAR_2->snd_cwnd_clamp = FUNC_1(VAR_0, VAR_2->snd_cwnd_clamp, 0xffffffff/128);

}
