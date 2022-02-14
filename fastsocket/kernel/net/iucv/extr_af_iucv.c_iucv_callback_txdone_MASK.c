
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff_head {int lock; struct sk_buff* next; } ;
struct sk_buff {struct sk_buff* next; } ;
struct iucv_path {struct sock* private; } ;
struct iucv_message {int tag; } ;
struct TYPE_2__ {struct sk_buff_head send_skb_q; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff_head*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct iucv_path *VAR_3,
     struct iucv_message *VAR_4)
{
 struct sock *VAR_5 = VAR_3->private;
 struct sk_buff *VAR_6 = ((void*)0);
 struct sk_buff_head *VAR_7 = &FUNC_4(VAR_5)->send_skb_q;
 struct sk_buff *VAR_8 = VAR_7->next;
 unsigned long VAR_9;

 FUNC_2(VAR_5);
 if (!FUNC_8(VAR_7)) {
  FUNC_9(&VAR_7->lock, VAR_9);

  while (VAR_8 != (struct sk_buff *)VAR_7) {
   if (!FUNC_7(&VAR_4->tag, FUNC_0(VAR_8), VAR_0)) {
    VAR_6 = VAR_8;
    break;
   }
   VAR_8 = VAR_8->next;
  }
  if (VAR_6)
   FUNC_1(VAR_6, VAR_7);

  FUNC_10(&VAR_7->lock, VAR_9);

  if (VAR_6) {
   FUNC_6(VAR_6);

   FUNC_5(VAR_5);
  }
 }

 if (VAR_5->sk_state == VAR_2) {
  if (FUNC_8(&FUNC_4(VAR_5)->send_skb_q)) {
   VAR_5->sk_state = VAR_1;
   VAR_5->sk_state_change(VAR_5);
  }
 }
 FUNC_3(VAR_5);

}
