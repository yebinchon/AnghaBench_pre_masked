
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_r_ack_ratio; } ;
struct ccid2_hc_rx_sock {int ccid2hcrx_data; } ;
struct TYPE_2__ {int dccpd_type; } ;




 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct ccid2_hc_rx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 const struct dccp_sock *VAR_2 = FUNC_3(VAR_0);
 struct ccid2_hc_rx_sock *VAR_3 = FUNC_1(VAR_0);

 switch (FUNC_0(VAR_1)->dccpd_type) {
 case 129:
 case 128:
  VAR_3->ccid2hcrx_data++;
  if (VAR_3->ccid2hcrx_data >= VAR_2->dccps_r_ack_ratio) {
   FUNC_2(VAR_0);
   VAR_3->ccid2hcrx_data = 0;
  }
  break;
 }
}
