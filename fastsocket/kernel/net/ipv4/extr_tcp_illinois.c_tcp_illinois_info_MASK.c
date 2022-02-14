
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tcpvegas_info {int tcpv_enabled; scalar_t__ tcpv_rttcnt; int tcpv_rtt; int tcpv_minrtt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct illinois {scalar_t__ cnt_rtt; int sum_rtt; int base_rtt; } ;
typedef int info ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct illinois* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int,int,struct tcpvegas_info*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, u32 VAR_2,
         struct sk_buff *VAR_3)
{
 const struct illinois *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 & (1 << (VAR_0 - 1))) {
  struct tcpvegas_info VAR_5 = {
   .tcpv_enabled = 1,
   .tcpv_rttcnt = VAR_4->cnt_rtt,
   .tcpv_minrtt = VAR_4->base_rtt,
  };

  if (VAR_5.tcpv_rttcnt > 0) {
   u64 VAR_6 = VAR_4->sum_rtt;

   FUNC_0(VAR_6, VAR_5.tcpv_rttcnt);
   VAR_5.tcpv_rtt = VAR_6;
  }
  FUNC_2(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);
 }
}
