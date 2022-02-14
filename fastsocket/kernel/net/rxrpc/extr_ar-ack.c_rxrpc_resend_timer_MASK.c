
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rxrpc_skb_priv {int need_resend; unsigned long resend_at; } ;
struct rxrpc_call {int acks_unacked; int acks_head; int acks_winsz; unsigned long* acks_window; int acks_tail; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct rxrpc_call*,int,unsigned long) ;
 struct rxrpc_skb_priv* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct rxrpc_call *VAR_1)
{
 struct rxrpc_skb_priv *VAR_2;
 struct sk_buff *VAR_3;
 unsigned long *VAR_4, VAR_5;
 int VAR_6;
 u8 VAR_7;

 FUNC_1("%d,%d,%d",
        VAR_1->acks_tail, VAR_1->acks_unacked, VAR_1->acks_head);

 VAR_7 = 0;
 VAR_5 = 0;

 for (VAR_6 = VAR_1->acks_unacked;
      VAR_6 != VAR_1->acks_head;
      VAR_6 = (VAR_6 + 1) & (VAR_1->acks_winsz - 1)
      ) {
  VAR_4 = VAR_1->acks_window + VAR_6;
  FUNC_5();
  VAR_3 = (struct sk_buff *) (*VAR_4 & ~1);
  VAR_2 = FUNC_4(VAR_3);

  FUNC_0(!(*VAR_4 & 1));

  if (VAR_2->need_resend) {
   ;
  } else if (FUNC_6(VAR_0 + 1, VAR_2->resend_at)) {
   VAR_2->need_resend = 1;
   VAR_7 |= 1;
  } else if (VAR_7 & 2) {
   if (FUNC_7(VAR_2->resend_at, VAR_5))
    VAR_5 = VAR_2->resend_at;
  } else {
   VAR_5 = VAR_2->resend_at;
   VAR_7 |= 2;
  }
 }

 FUNC_3(VAR_1, VAR_7, VAR_5);
 FUNC_2("");
}
