
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rxrpc_skb_priv {int need_resend; unsigned long resend_at; } ;
struct rxrpc_call {int acks_head; int acks_tail; int acks_winsz; unsigned long* acks_window; int acks_unacked; int acks_hard; } ;
struct rxrpc_ackpacket {int nAcks; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct rxrpc_call*,int,unsigned long) ;
 struct rxrpc_skb_priv* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct rxrpc_call *VAR_3,
       struct rxrpc_ackpacket *VAR_4,
       struct sk_buff *VAR_5)
{
 struct rxrpc_skb_priv *VAR_6;
 struct sk_buff *VAR_7;
 unsigned long *VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11[VAR_1], VAR_12;

 FUNC_2("{%d,%d},{%d},",
        VAR_3->acks_hard,
        FUNC_0(VAR_3->acks_head, VAR_3->acks_tail, VAR_3->acks_winsz),
        VAR_4->nAcks);

 if (FUNC_6(VAR_5, 0, VAR_11, VAR_4->nAcks) < 0)
  goto protocol_error;

 VAR_12 = 0;
 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->nAcks; VAR_10++) {
  VAR_8 = VAR_3->acks_window;
  VAR_8 += (VAR_3->acks_tail + VAR_10) & (VAR_3->acks_winsz - 1);
  FUNC_8();
  VAR_7 = (struct sk_buff *) (*VAR_8 & ~1);
  VAR_6 = FUNC_5(VAR_7);

  switch (VAR_11[VAR_10]) {
  case 129:
   VAR_6->need_resend = 0;
   *VAR_8 |= 1;
   break;
  case 128:
   VAR_6->need_resend = 1;
   *VAR_8 &= ~1;
   VAR_12 = 1;
   break;
  default:
   FUNC_1("Unsupported ACK type %d", VAR_11[VAR_10]);
   goto protocol_error;
  }
 }

 FUNC_7();
 VAR_3->acks_unacked = (VAR_3->acks_tail + VAR_10) & (VAR_3->acks_winsz - 1);



 for (VAR_10 = VAR_3->acks_unacked;
      VAR_10 != VAR_3->acks_head;
      VAR_10 = (VAR_10 + 1) & (VAR_3->acks_winsz - 1)
      ) {
  VAR_8 = VAR_3->acks_window + VAR_10;
  FUNC_8();
  VAR_7 = (struct sk_buff *) (*VAR_8 & ~1);
  VAR_6 = FUNC_5(VAR_7);

  if (*VAR_8 & 1) {

   VAR_6->need_resend = 1;
   *VAR_8 &= ~1;
   VAR_12 |= 1;
  } else if (VAR_6->need_resend) {
   ;
  } else if (FUNC_9(VAR_2 + 1, VAR_6->resend_at)) {
   VAR_6->need_resend = 1;
   VAR_12 |= 1;
  } else if (VAR_12 & 2) {
   if (FUNC_10(VAR_6->resend_at, VAR_9))
    VAR_9 = VAR_6->resend_at;
  } else {
   VAR_9 = VAR_6->resend_at;
   VAR_12 |= 2;
  }
 }

 FUNC_4(VAR_3, VAR_12, VAR_9);
 FUNC_3(" = 0");
 return 0;

protocol_error:
 FUNC_3(" = -EPROTO");
 return -VAR_0;
}
