
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_type; } ;
struct sk_buff {scalar_t__ len; void* protocol; TYPE_1__* dev; struct af_iucv_trans_hdr* head; } ;
struct iucv_sock {int msglimit; int msg_recv; int send_skb_q; TYPE_1__* hs_dev; struct iucv_message* src_name; struct iucv_message* src_user_id; struct iucv_message* dst_name; struct iucv_message* dst_user_id; } ;
struct iucv_message {int dummy; } ;
struct af_iucv_trans_hdr {int version; scalar_t__ flags; int window; int iucv_hdr; int * srcAppName; int * srcUserID; int * destAppName; int * destUserID; void* magic; } ;
struct TYPE_2__ {int flags; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 struct iucv_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,struct iucv_message*,int) ;
 int FUNC_8 (struct af_iucv_trans_hdr*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_18(struct iucv_message *VAR_11, struct sock *VAR_12,
     struct sk_buff *VAR_13, u8 VAR_14)
{
 struct iucv_sock *VAR_15 = FUNC_5(VAR_12);
 struct af_iucv_trans_hdr *VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18, VAR_19 = 0;

 FUNC_8(VAR_13->head, 0, VAR_6);
 VAR_16 = (struct af_iucv_trans_hdr *)FUNC_12(VAR_13,
     sizeof(struct af_iucv_trans_hdr));
 FUNC_14(VAR_13);
 FUNC_15(VAR_13);
 FUNC_12(VAR_13, VAR_6);
 FUNC_14(VAR_13);
 FUNC_8(VAR_16, 0, sizeof(struct af_iucv_trans_hdr));

 VAR_16->magic = VAR_7;
 VAR_16->version = 1;
 VAR_16->flags = VAR_14;
 if (VAR_14 == VAR_0)
  VAR_16->window = VAR_15->msglimit;
 else if ((VAR_14 == VAR_1) || !VAR_14) {
  VAR_19 = FUNC_2(&VAR_15->msg_recv);
  VAR_16->window = VAR_19;
  if (VAR_19)
   VAR_16->flags = VAR_16->flags | VAR_1;
 }
 FUNC_7(VAR_16->destUserID, VAR_15->dst_user_id, 8);
 FUNC_7(VAR_16->destAppName, VAR_15->dst_name, 8);
 FUNC_7(VAR_16->srcUserID, VAR_15->src_user_id, 8);
 FUNC_7(VAR_16->srcAppName, VAR_15->src_name, 8);
 FUNC_0(VAR_16->destUserID, sizeof(VAR_16->destUserID));
 FUNC_0(VAR_16->destAppName, sizeof(VAR_16->destAppName));
 FUNC_0(VAR_16->srcUserID, sizeof(VAR_16->srcUserID));
 FUNC_0(VAR_16->srcAppName, sizeof(VAR_16->srcAppName));
 if (VAR_11)
  FUNC_7(&VAR_16->iucv_hdr, VAR_11, sizeof(struct iucv_message));

 VAR_13->dev = VAR_15->hs_dev;
 if (!VAR_13->dev)
  return -VAR_4;
 if (!(VAR_13->dev->flags & VAR_9) || !FUNC_10(VAR_13->dev))
  return -VAR_3;
 if (VAR_13->len > VAR_13->dev->mtu) {
  if (VAR_12->sk_type == VAR_10)
   return -VAR_2;
  else
   FUNC_16(VAR_13, VAR_13->dev->mtu);
 }
 VAR_13->protocol = VAR_7;
 VAR_17 = FUNC_11(VAR_13, VAR_8);
 if (!VAR_17)
  return -VAR_5;
 FUNC_13(&VAR_15->send_skb_q, VAR_17);
 VAR_18 = FUNC_4(VAR_13);
 if (FUNC_9(VAR_18)) {
  FUNC_17(VAR_17, &VAR_15->send_skb_q);
  FUNC_6(VAR_17);
 } else {
  FUNC_3(VAR_19, &VAR_15->msg_recv);
  FUNC_1(FUNC_2(&VAR_15->msg_recv) < 0);
 }
 return FUNC_9(VAR_18);
}
