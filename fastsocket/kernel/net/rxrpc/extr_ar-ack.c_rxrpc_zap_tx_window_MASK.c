
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int seq; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {int acks_winsz; unsigned long* acks_window; int acks_tail; int acks_head; } ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct rxrpc_skb_priv* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct rxrpc_call *VAR_0)
{
 struct rxrpc_skb_priv *VAR_1;
 struct sk_buff *VAR_2;
 unsigned long VAR_3, *VAR_4;
 u8 VAR_5 = VAR_0->acks_winsz;
 int VAR_6;

 VAR_4 = VAR_0->acks_window;
 VAR_0->acks_window = ((void*)0);

 while (FUNC_0(VAR_0->acks_head, VAR_0->acks_tail, VAR_5) > 0) {
  VAR_6 = VAR_0->acks_tail;
  FUNC_7();
  VAR_3 = VAR_4[VAR_6] & ~1;
  FUNC_6();
  VAR_0->acks_tail = (VAR_0->acks_tail + 1) & (VAR_5 - 1);

  VAR_2 = (struct sk_buff *) VAR_3;
  VAR_1 = FUNC_5(VAR_2);
  FUNC_1("+++ clear Tx %u", FUNC_3(VAR_1->hdr.seq));
  FUNC_4(VAR_2);
 }

 FUNC_2(VAR_4);
}
