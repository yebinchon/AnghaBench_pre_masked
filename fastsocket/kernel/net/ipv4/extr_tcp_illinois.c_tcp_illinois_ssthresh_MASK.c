
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct illinois {int beta; } ;


 int VAR_0 ;
 struct illinois* FUNC_0 (struct sock*) ;
 int FUNC_1 (int,unsigned int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct illinois *VAR_3 = FUNC_0(VAR_1);


 return FUNC_1(VAR_2->snd_cwnd - ((VAR_2->snd_cwnd * VAR_3->beta) >> VAR_0), 2U);
}
