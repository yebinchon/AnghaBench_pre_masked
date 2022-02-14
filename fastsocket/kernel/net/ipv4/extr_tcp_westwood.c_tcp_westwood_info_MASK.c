
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct westwood {int rtt_min; int rtt; } ;
struct tcpvegas_info {int tcpv_enabled; int tcpv_minrtt; int tcpv_rtt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int info ;


 int VAR_0 ;
 struct westwood* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int,int,struct tcpvegas_info*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, u32 VAR_2,
         struct sk_buff *VAR_3)
{
 const struct westwood *VAR_4 = FUNC_0(VAR_1);
 if (VAR_2 & (1 << (VAR_0 - 1))) {
  struct tcpvegas_info VAR_5 = {
   .tcpv_enabled = 1,
   .tcpv_rtt = FUNC_1(VAR_4->rtt),
   .tcpv_minrtt = FUNC_1(VAR_4->rtt_min),
  };

  FUNC_2(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);
 }
}
