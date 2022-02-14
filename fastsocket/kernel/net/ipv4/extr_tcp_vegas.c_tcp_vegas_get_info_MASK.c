
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vegas {int minRTT; int baseRTT; int cntRTT; int doing_vegas_now; } ;
struct tcpvegas_info {int tcpv_minrtt; int tcpv_rtt; int tcpv_rttcnt; int tcpv_enabled; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int info ;


 int VAR_0 ;
 struct vegas* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*,int,int,struct tcpvegas_info*) ;

void FUNC_2(struct sock *VAR_1, u32 VAR_2, struct sk_buff *VAR_3)
{
 const struct vegas *VAR_4 = FUNC_0(VAR_1);
 if (VAR_2 & (1 << (VAR_0 - 1))) {
  struct tcpvegas_info VAR_5 = {
   .tcpv_enabled = VAR_4->doing_vegas_now,
   .tcpv_rttcnt = VAR_4->cntRTT,
   .tcpv_rtt = VAR_4->baseRTT,
   .tcpv_minrtt = VAR_4->minRTT,
  };

  FUNC_1(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);
 }
}
