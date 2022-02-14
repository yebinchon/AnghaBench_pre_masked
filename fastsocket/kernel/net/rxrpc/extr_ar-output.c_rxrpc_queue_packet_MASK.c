
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int seq; int serial; } ;
struct rxrpc_skb_priv {int need_resend; scalar_t__ resend_at; TYPE_1__ hdr; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct rxrpc_call {size_t acks_head; unsigned long* acks_window; int acks_winsz; int state; TYPE_2__* conn; int ack_timer; TYPE_3__ resend_timer; int flags; int state_lock; } ;
struct TYPE_5__ {int trans; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct sk_buff*,...) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rxrpc_call*) ;
 int VAR_6 ;
 int FUNC_8 (int ,struct sk_buff*) ;
 struct rxrpc_skb_priv* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct rxrpc_call *VAR_7, struct sk_buff *VAR_8,
          bool VAR_9)
{
 struct rxrpc_skb_priv *VAR_10 = FUNC_9(VAR_8);
 int VAR_11;

 FUNC_3("queue skb %p [%d]", VAR_8, VAR_7->acks_head);

 FUNC_0(VAR_7->acks_window != ((void*)0));
 VAR_7->acks_window[VAR_7->acks_head] = (unsigned long) VAR_8;
 FUNC_10();
 VAR_7->acks_head = (VAR_7->acks_head + 1) & (VAR_7->acks_winsz - 1);

 if (VAR_9 || VAR_7->state == 129) {
  FUNC_1("________awaiting reply/ACK__________");
  FUNC_13(&VAR_7->state_lock);
  switch (VAR_7->state) {
  case 130:
   VAR_7->state = VAR_2;
   break;
  case 129:
   VAR_7->state = 128;
   if (!VAR_9)
    break;
  case 128:
   VAR_7->state = VAR_4;
   break;
  default:
   break;
  }
  FUNC_14(&VAR_7->state_lock);
 }

 FUNC_4("Tx DATA %%%u { #%u }",
        FUNC_6(VAR_10->hdr.serial), FUNC_6(VAR_10->hdr.seq));

 VAR_10->need_resend = 0;
 VAR_10->resend_at = VAR_5 + VAR_6 * VAR_1;
 if (!FUNC_11(VAR_3, &VAR_7->flags)) {
  FUNC_1("run timer");
  VAR_7->resend_timer.expires = VAR_10->resend_at;
  FUNC_5(&VAR_7->resend_timer);
 }



 VAR_11 = -VAR_0;
 if (FUNC_12(&VAR_7->ack_timer) >= 0) {


  VAR_11 = FUNC_8(VAR_7->conn->trans, VAR_8);
  FUNC_3("sent skb %p", VAR_8);
 } else {
  FUNC_1("failed to delete ACK timer");
 }

 if (VAR_11 < 0) {
  FUNC_1("need instant resend %d", VAR_11);
  VAR_10->need_resend = 1;
  FUNC_7(VAR_7);
 }

 FUNC_2("");
}
