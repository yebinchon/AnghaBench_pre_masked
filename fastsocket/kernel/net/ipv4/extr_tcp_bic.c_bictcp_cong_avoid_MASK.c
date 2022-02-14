
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; } ;
struct sock {int dummy; } ;
struct bictcp {int cnt; } ;


 int FUNC_0 (struct bictcp*,scalar_t__) ;
 struct bictcp* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*,int ) ;
 int FUNC_3 (struct sock*,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_0);
 struct bictcp *VAR_4 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0, VAR_2))
  return;

 if (VAR_3->snd_cwnd <= VAR_3->snd_ssthresh)
  FUNC_5(VAR_3);
 else {
  FUNC_0(VAR_4, VAR_3->snd_cwnd);
  FUNC_2(VAR_3, VAR_4->cnt);
 }

}
