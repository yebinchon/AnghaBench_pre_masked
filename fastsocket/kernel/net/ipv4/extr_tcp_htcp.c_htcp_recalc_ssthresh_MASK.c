
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct htcp {int beta; } ;


 int FUNC_0 (struct sock*) ;
 struct htcp* FUNC_1 (struct sock*) ;
 int FUNC_2 (int,unsigned int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static u32 FUNC_4(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_3(VAR_0);
 const struct htcp *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0);
 return FUNC_2((VAR_1->snd_cwnd * VAR_2->beta) >> 7, 2U);
}
