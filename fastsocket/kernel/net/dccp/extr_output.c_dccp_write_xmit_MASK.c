
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {scalar_t__ sk_state; int sk_write_queue; } ;
struct sk_buff {int len; } ;
struct dccp_sock {int dccps_mss_cache; int dccps_hc_tx_ccid; int dccps_featneg; int dccps_xmit_timer; } ;
struct dccp_skb_cb {void* dccpd_type; } ;
struct TYPE_2__ {int icsk_rto; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct dccp_skb_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int const) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,struct sock*,int ,int const) ;
 int FUNC_4 (int ,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct sock*) ;
 struct dccp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,int) ;
 TYPE_1__* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ,int ,int ) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct sock*,int *,scalar_t__) ;
 int FUNC_19 (int *) ;
 struct sk_buff* FUNC_20 (int *) ;

void FUNC_21(struct sock *VAR_8, int VAR_9)
{
 struct dccp_sock *VAR_10 = FUNC_9(VAR_8);
 struct sk_buff *VAR_11;

 while ((VAR_11 = FUNC_20(&VAR_8->sk_write_queue))) {
  int VAR_12 = FUNC_4(VAR_10->dccps_hc_tx_ccid, VAR_8, VAR_11);

  if (VAR_12 > 0) {
   if (!VAR_9) {
    FUNC_18(VAR_8, &VAR_10->dccps_xmit_timer,
      FUNC_17(VAR_12)+VAR_7);
    break;
   } else
    VAR_12 = FUNC_11(VAR_8, VAR_11, VAR_12);
   if (VAR_12 && VAR_12 != -VAR_5)
    FUNC_0("err=%d after dccp_wait_for_ccid", VAR_12);
  }

  FUNC_19(&VAR_8->sk_write_queue);
  if (VAR_12 == 0) {
   struct dccp_skb_cb *VAR_13 = FUNC_1(VAR_11);
   const int VAR_14 = VAR_11->len;

   if (VAR_8->sk_state == VAR_1) {
    const u32 VAR_15 = VAR_10->dccps_mss_cache - VAR_0;







    if (!FUNC_16(&VAR_10->dccps_featneg) && VAR_14 > VAR_15) {
     FUNC_2("Payload too large (%d) for featneg.\n", VAR_14);
     FUNC_8(VAR_8);
     FUNC_6(&VAR_10->dccps_featneg);
    }

    FUNC_14(VAR_8);
    FUNC_13(VAR_8, VAR_6,
        FUNC_12(VAR_8)->icsk_rto,
        VAR_4);
    VAR_13->dccpd_type = VAR_3;
   } else if (FUNC_5(VAR_8))
    VAR_13->dccpd_type = VAR_3;
   else
    VAR_13->dccpd_type = VAR_2;

   VAR_12 = FUNC_10(VAR_8, VAR_11);
   FUNC_3(VAR_10->dccps_hc_tx_ccid, VAR_8, 0, VAR_14);
   if (VAR_12)
    FUNC_0("err=%d after ccid_hc_tx_packet_sent",
      VAR_12);
  } else {
   FUNC_7("packet discarded due to err=%d\n", VAR_12);
   FUNC_15(VAR_11);
  }
 }
}
