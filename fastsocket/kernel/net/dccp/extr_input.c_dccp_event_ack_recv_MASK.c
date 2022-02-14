
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int * dccps_hc_rx_ackvec; } ;
struct TYPE_2__ {int dccpd_ack_seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sock*,int ) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->dccps_hc_rx_ackvec != ((void*)0))
  FUNC_1(VAR_2->dccps_hc_rx_ackvec, VAR_0,
         FUNC_0(VAR_1)->dccpd_ack_seq);
}
