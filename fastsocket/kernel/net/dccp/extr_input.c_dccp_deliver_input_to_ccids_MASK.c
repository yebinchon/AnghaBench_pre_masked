
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; } ;
struct sock {int sk_shutdown; TYPE_1__ sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_hc_tx_ccid; int dccps_hc_rx_ccid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sock*,struct sk_buff*) ;
 int FUNC_1 (int ,struct sock*,struct sk_buff*) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 const struct dccp_sock *VAR_4 = FUNC_2(VAR_2);


 if (!(VAR_2->sk_shutdown & VAR_0))
  FUNC_0(VAR_4->dccps_hc_rx_ccid, VAR_2, VAR_3);




 if (VAR_2->sk_write_queue.qlen > 0 || !(VAR_2->sk_shutdown & VAR_1))
  FUNC_1(VAR_4->dccps_hc_tx_ccid, VAR_2, VAR_3);
}
