
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_timestamp_echo; scalar_t__ dccps_hc_rx_insert_options; int dccps_hc_rx_ccid; int * dccps_hc_rx_ackvec; scalar_t__ dccps_send_ndp_count; } ;
struct TYPE_2__ {scalar_t__ dccpd_type; scalar_t__ dccpd_opt_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct dccp_sock*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct dccp_sock*,int *,struct sk_buff*) ;
 struct dccp_sock* FUNC_9 (struct sock*) ;

int FUNC_10(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_9(VAR_2);

 FUNC_0(VAR_3)->dccpd_opt_len = 0;

 if (VAR_4->dccps_send_ndp_count && FUNC_5(VAR_2, VAR_3))
  return -1;

 if (FUNC_0(VAR_3)->dccpd_type != VAR_0) {


  if (FUNC_3(VAR_4, ((void*)0), VAR_3))
   return -1;

  if (FUNC_0(VAR_3)->dccpd_type == VAR_1) {




   if (FUNC_7(VAR_2, VAR_3))
    return -1;

  } else if (VAR_4->dccps_hc_rx_ackvec != ((void*)0) &&
      FUNC_2(VAR_4->dccps_hc_rx_ackvec) &&
      FUNC_4(VAR_2, VAR_3)) {
    return -1;
  }
 }

 if (VAR_4->dccps_hc_rx_insert_options) {
  if (FUNC_1(VAR_4->dccps_hc_rx_ccid, VAR_2, VAR_3))
   return -1;
  VAR_4->dccps_hc_rx_insert_options = 0;
 }

 if (VAR_4->dccps_timestamp_echo != 0 &&
     FUNC_8(VAR_4, ((void*)0), VAR_3))
  return -1;

 FUNC_6(VAR_3);
 return 0;
}
