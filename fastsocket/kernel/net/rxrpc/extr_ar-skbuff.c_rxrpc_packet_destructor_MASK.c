
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ sk; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct rxrpc_skb_priv {struct rxrpc_call* call; TYPE_1__ hdr; } ;
struct rxrpc_call {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*,struct rxrpc_call*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rxrpc_call*,struct rxrpc_skb_priv*) ;
 int FUNC_3 (struct rxrpc_call*) ;
 struct rxrpc_skb_priv* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct sk_buff *VAR_1)
{
 struct rxrpc_skb_priv *VAR_2 = FUNC_4(VAR_1);
 struct rxrpc_call *VAR_3 = VAR_2->call;

 FUNC_0("%p{%p}", VAR_1, VAR_3);

 if (VAR_3) {

  if (VAR_2->hdr.type == VAR_0)
   FUNC_2(VAR_3, VAR_2);
  FUNC_3(VAR_3);
  VAR_2->call = ((void*)0);
 }

 if (VAR_1->sk)
  FUNC_5(VAR_1);
 FUNC_1("");
}
