
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ mark; } ;
struct rxrpc_skb_priv {struct rxrpc_call* call; scalar_t__ error; } ;
struct rxrpc_call {int lock; int flags; int ack_timer; int resend_timer; int debug_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (char*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rxrpc_skb_priv*,int ,int) ;
 int FUNC_7 (struct rxrpc_call*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct rxrpc_call*,struct sk_buff*,int,int) ;
 struct rxrpc_skb_priv* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct rxrpc_call *VAR_6, u32 VAR_7, u32 VAR_8,
         bool VAR_9)
{
 struct rxrpc_skb_priv *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;

 FUNC_1("{%d,%lx},%u,%u,%d",
        VAR_6->debug_id, VAR_6->flags, VAR_7, VAR_8, VAR_9);


 if (VAR_9) {
  FUNC_5(&VAR_6->resend_timer);
  FUNC_5(&VAR_6->ack_timer);
  FUNC_4(VAR_3, &VAR_6->flags);
 }

 if (VAR_7 != VAR_5 &&
     !FUNC_13(VAR_2, &VAR_6->flags)) {
  FUNC_2("[no userid]");
  return 0;
 }

 if (!FUNC_13(VAR_4, &VAR_6->flags)) {
  VAR_11 = FUNC_3(0, VAR_1);
  if (!VAR_11)
   return -VAR_0;

  FUNC_8(VAR_11);

  VAR_11->mark = VAR_7;

  VAR_10 = FUNC_10(VAR_11);
  FUNC_6(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->error = VAR_8;
  VAR_10->call = VAR_6;
  FUNC_7(VAR_6);

  FUNC_11(&VAR_6->lock);
  VAR_12 = FUNC_9(VAR_6, VAR_11, 1, VAR_9);
  FUNC_12(&VAR_6->lock);
  FUNC_0(VAR_12 < 0);
 }

 return 0;
}
