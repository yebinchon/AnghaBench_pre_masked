
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data_len; } ;
struct TYPE_2__ {int flags; void* serial; int _rsvd; void* seq; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_jumbo_header {int flags; int _rsvd; } ;
struct rxrpc_call {scalar_t__ state; int state_lock; int events; int abort_code; } ;
typedef int jhdr ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct rxrpc_call*) ;
 struct rxrpc_skb_priv* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ,int *) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,struct rxrpc_jumbo_header*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct rxrpc_call *VAR_7,
           struct sk_buff *VAR_8)
{
 struct rxrpc_jumbo_header VAR_9;
 struct rxrpc_skb_priv *VAR_10;
 struct sk_buff *VAR_11;

 FUNC_2(",{%u,%u}", VAR_8->data_len, VAR_8->len);

 VAR_10 = FUNC_13(VAR_8);

 do {
  VAR_10->hdr.flags &= ~VAR_5;



  VAR_11 = FUNC_15(VAR_8, VAR_0);
  if (!VAR_11) {

   FUNC_8(VAR_8, VAR_4);
   break;
  }
  FUNC_11(VAR_11);

  FUNC_8(VAR_11, VAR_4);

  if (!FUNC_7(VAR_8, VAR_4))
   goto protocol_error;

  if (FUNC_16(VAR_8, 0, &VAR_9, sizeof(VAR_9)) < 0)
   goto protocol_error;
  if (!FUNC_7(VAR_8, sizeof(VAR_9)))
   FUNC_0();

  VAR_10->hdr.seq = FUNC_5(FUNC_6(VAR_10->hdr.seq) + 1);
  VAR_10->hdr.serial = FUNC_5(FUNC_6(VAR_10->hdr.serial) + 1);
  VAR_10->hdr.flags = VAR_9.flags;
  VAR_10->hdr._rsvd = VAR_9._rsvd;

  FUNC_4("Rx DATA Jumbo %%%u", FUNC_6(VAR_10->hdr.serial) - 1);

  FUNC_9(VAR_7, VAR_11);
  VAR_11 = ((void*)0);

 } while (VAR_10->hdr.flags & VAR_5);

 FUNC_9(VAR_7, VAR_8);
 FUNC_3("");
 return;

protocol_error:
 FUNC_1("protocol error");
 FUNC_10(VAR_11);
 FUNC_10(VAR_8);
 FUNC_17(&VAR_7->state_lock);
 if (VAR_7->state <= VAR_2) {
  VAR_7->state = VAR_3;
  VAR_7->abort_code = VAR_6;
  FUNC_14(VAR_1, &VAR_7->events);
  FUNC_12(VAR_7);
 }
 FUNC_18(&VAR_7->state_lock);
 FUNC_3("");
}
