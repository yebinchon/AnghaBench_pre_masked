
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; } ;
struct sock {int dummy; } ;
struct bictcp {int cnt; int end_seq; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct bictcp*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct bictcp* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_1);
 struct bictcp *VAR_5 = FUNC_3(VAR_1);

 if (!FUNC_5(VAR_1, VAR_3))
  return;

 if (VAR_4->snd_cwnd <= VAR_4->snd_ssthresh) {
  if (VAR_0 && FUNC_0(VAR_2, VAR_5->end_seq))
   FUNC_1(VAR_1);
  FUNC_7(VAR_4);
 } else {
  FUNC_2(VAR_5, VAR_4->snd_cwnd);
  FUNC_4(VAR_4, VAR_5->cnt);
 }

}
