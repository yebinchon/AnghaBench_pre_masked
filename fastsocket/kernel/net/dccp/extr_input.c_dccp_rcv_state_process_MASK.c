
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_role; int * dccps_hc_rx_ackvec; } ;
struct dccp_skb_cb {scalar_t__ dccpd_ack_seq; int dccpd_seq; void* dccpd_reset_code; } ;
struct dccp_hdr {scalar_t__ dccph_type; } ;
struct TYPE_4__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_3__ {scalar_t__ (* conn_request ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

 void* VAR_14 ;

 scalar_t__ VAR_15 ;
 struct dccp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *,struct sock*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct dccp_hdr*,unsigned int) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,struct dccp_hdr*,unsigned int) ;
 int FUNC_12 (struct sock*,int ,scalar_t__) ;
 struct dccp_sock* FUNC_13 (struct sock*) ;
 TYPE_2__* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_16 (struct sock*,struct sk_buff*) ;
 int FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct sock *VAR_18, struct sk_buff *VAR_19,
      struct dccp_hdr *VAR_20, unsigned VAR_21)
{
 struct dccp_sock *VAR_22 = FUNC_13(VAR_18);
 struct dccp_skb_cb *VAR_23 = FUNC_0(VAR_19);
 const int VAR_24 = VAR_18->sk_state;
 int VAR_25 = 0;
 if (VAR_18->sk_state == VAR_2) {
  if (VAR_20->dccph_type == VAR_8) {
   if (FUNC_14(VAR_18)->icsk_af_ops->conn_request(VAR_18,
            VAR_19) < 0)
    return 1;
   goto discard;
  }
  if (VAR_20->dccph_type == VAR_9)
   goto discard;


  VAR_23->dccpd_reset_code = VAR_14;
  return 1;
 } else if (VAR_18->sk_state == VAR_1) {
  VAR_23->dccpd_reset_code = VAR_14;
  return 1;
 }

 if (VAR_18->sk_state != 129 && VAR_18->sk_state != 128) {
  if (FUNC_3(VAR_18, VAR_19))
   goto discard;




  if (FUNC_6(VAR_18, ((void*)0), VAR_19))
   return 1;

  if (VAR_23->dccpd_ack_seq != VAR_13)
   FUNC_5(VAR_18, VAR_19);

  if (VAR_22->dccps_hc_rx_ackvec != ((void*)0) &&
      FUNC_2(VAR_22->dccps_hc_rx_ackvec, VAR_18,
        FUNC_0(VAR_19)->dccpd_seq,
        VAR_0))
   goto discard;

  FUNC_4(VAR_18, VAR_19);
 }
 if (VAR_20->dccph_type == VAR_9) {
  FUNC_10(VAR_18, VAR_19);
  return 0;
 } else if ((VAR_22->dccps_role != VAR_15 &&
      VAR_20->dccph_type == VAR_10) ||
      (VAR_22->dccps_role == VAR_15 &&
       VAR_20->dccph_type == VAR_8) ||
      (VAR_18->sk_state == 128 &&
       VAR_20->dccph_type == VAR_6)) {
  FUNC_12(VAR_18, VAR_23->dccpd_seq, VAR_11);
  goto discard;
 } else if (VAR_20->dccph_type == VAR_5) {
  if (FUNC_8(VAR_18, VAR_19))
   return 0;
  goto discard;
 } else if (VAR_20->dccph_type == VAR_4) {
  if (FUNC_7(VAR_18, VAR_19))
   return 0;
  goto discard;
 }

 switch (VAR_18->sk_state) {
 case 129:
  VAR_25 = FUNC_9(VAR_18, VAR_19, VAR_20, VAR_21);
  if (VAR_25 >= 0)
   return VAR_25;

  FUNC_1(VAR_19);
  return 0;

 case 128:
 case 130:
  VAR_25 = FUNC_11(VAR_18, VAR_19,
         VAR_20, VAR_21);
  break;
 }

 if (VAR_20->dccph_type == VAR_3 ||
     VAR_20->dccph_type == VAR_7) {
  switch (VAR_24) {
  case 130:
   VAR_18->sk_state_change(VAR_18);
   FUNC_15(VAR_18, VAR_17, VAR_16);
   break;
  }
 } else if (FUNC_18(VAR_20->dccph_type == VAR_11)) {
  FUNC_12(VAR_18, VAR_23->dccpd_seq, VAR_12);
  goto discard;
 }

 if (!VAR_25) {
discard:
  FUNC_1(VAR_19);
 }
 return 0;
}
