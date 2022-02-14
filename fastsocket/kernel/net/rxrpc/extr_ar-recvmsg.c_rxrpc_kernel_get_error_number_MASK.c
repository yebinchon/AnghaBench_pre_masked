
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxrpc_skb_priv {int error; } ;


 struct rxrpc_skb_priv* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct sk_buff *VAR_0)
{
 struct rxrpc_skb_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->error;
}
