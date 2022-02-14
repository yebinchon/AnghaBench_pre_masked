
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ head; } ;
struct TYPE_3__ {int seq; int serial; } ;
struct rxrpc_skb_priv {int need_resend; unsigned long resend_at; TYPE_1__ hdr; } ;
struct rxrpc_header {int serial; } ;
struct rxrpc_call {int acks_head; int acks_tail; int acks_winsz; unsigned long* acks_window; TYPE_2__* conn; int sequence; int acks_unacked; int acks_hard; } ;
struct TYPE_4__ {int trans; int serial; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 void* VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ,struct sk_buff*) ;
 int FUNC_9 (struct rxrpc_call*,int,unsigned long) ;
 struct rxrpc_skb_priv* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (void*,unsigned long) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct rxrpc_call *VAR_3)
{
 struct rxrpc_skb_priv *VAR_4;
 struct rxrpc_header *VAR_5;
 struct sk_buff *VAR_6;
 unsigned long *VAR_7, VAR_8;
 int VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_1("{%d,%d,%d,%d},",
        VAR_3->acks_hard, VAR_3->acks_unacked,
        FUNC_5(&VAR_3->sequence),
        FUNC_0(VAR_3->acks_head, VAR_3->acks_tail, VAR_3->acks_winsz));

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_8 = 0;

 for (VAR_9 = VAR_3->acks_tail;
      VAR_9 != VAR_3->acks_head || VAR_10;
      VAR_9 = (VAR_9 + 1) & (VAR_3->acks_winsz - 1)
      ) {
  VAR_7 = VAR_3->acks_window + VAR_9;
  FUNC_11();
  if (*VAR_7 & 1)
   continue;

  VAR_6 = (struct sk_buff *) *VAR_7;
  VAR_4 = FUNC_10(VAR_6);

  if (VAR_4->need_resend) {
   VAR_4->need_resend = 0;


   VAR_4->hdr.serial =
    FUNC_6(FUNC_4(&VAR_3->conn->serial));

   VAR_5 = (struct rxrpc_header *) VAR_6->head;
   VAR_5->serial = VAR_4->hdr.serial;

   FUNC_3("Tx DATA %%%u { #%d }",
          FUNC_7(VAR_4->hdr.serial), FUNC_7(VAR_4->hdr.seq));
   if (FUNC_8(VAR_3->conn->trans, VAR_6) < 0) {
    VAR_10 = 0;
    VAR_4->resend_at = VAR_1 + 3;
   } else {
    VAR_4->resend_at =
     VAR_1 + VAR_2 * VAR_0;
   }
  }

  if (FUNC_12(VAR_1 + 1, VAR_4->resend_at)) {
   VAR_4->need_resend = 1;
   VAR_11 |= 1;
  } else if (VAR_11 & 2) {
   if (FUNC_13(VAR_4->resend_at, VAR_8))
    VAR_8 = VAR_4->resend_at;
  } else {
   VAR_8 = VAR_4->resend_at;
   VAR_11 |= 2;
  }
 }

 FUNC_9(VAR_3, VAR_11, VAR_8);
 FUNC_2("");
}
