
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_ssthresh; } ;
struct sock {int dummy; } ;


 struct tcp_sock* FUNC_0 (struct sock const*) ;

u32 FUNC_1(const struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->snd_ssthresh/2;
}
