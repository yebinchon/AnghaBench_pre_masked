
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct tcp_sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_3(VAR_1);

 if (!FUNC_2(VAR_1, VAR_3))
  return;

 if (VAR_4->snd_cwnd <= VAR_4->snd_ssthresh)
  FUNC_4(VAR_4);
 else
  FUNC_1(VAR_4, FUNC_0(VAR_4->snd_cwnd, VAR_0));
}
