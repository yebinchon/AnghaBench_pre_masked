
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bictcp {int loss_cwnd; } ;


 struct bictcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_2(VAR_0);
 const struct bictcp *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1->snd_cwnd, VAR_2->loss_cwnd);
}
