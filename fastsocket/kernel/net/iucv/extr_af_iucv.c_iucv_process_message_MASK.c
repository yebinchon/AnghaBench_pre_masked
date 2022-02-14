
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; int sk_rcvbuf; } ;
struct sk_buff {unsigned int len; int truesize; int * data; } ;
struct iucv_path {int dummy; } ;
struct iucv_message {int flags; int rmmsg; int class; } ;
struct TYPE_4__ {int backlog_skb_q; } ;
struct TYPE_3__ {int (* message_receive ) (struct iucv_path*,struct iucv_message*,int,int *,unsigned int,int *) ;int (* path_sever ) (struct iucv_path*,int *) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sock*,struct sk_buff*,unsigned int) ;
 unsigned int FUNC_2 (struct iucv_message*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int *,int ) ;
 TYPE_1__* VAR_4 ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (struct iucv_path*,struct iucv_message*,int,int *,unsigned int,int *) ;
 int FUNC_13 (struct iucv_path*,int *) ;

__attribute__((used)) static void FUNC_14(struct sock *VAR_5, struct sk_buff *VAR_6,
     struct iucv_path *VAR_7,
     struct iucv_message *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_2(VAR_8);



 FUNC_6(FUNC_0(VAR_6), &VAR_8->class, VAR_0);


 if ((VAR_8->flags & VAR_1) && VAR_10 > 7) {
  if (FUNC_5(VAR_8->rmmsg, VAR_3, 8) == 0) {
   VAR_6->data = ((void*)0);
   VAR_6->len = 0;
  }
 } else {
  VAR_9 = VAR_4->message_receive(VAR_7, VAR_8,
           VAR_8->flags & VAR_1,
           VAR_6->data, VAR_10, ((void*)0));
  if (VAR_9) {
   FUNC_4(VAR_6);
   return;
  }



  if (VAR_5->sk_type == VAR_2 &&
      VAR_6->truesize >= VAR_5->sk_rcvbuf / 4) {
   VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_10);
   FUNC_4(VAR_6);
   VAR_6 = ((void*)0);
   if (VAR_9) {
    VAR_4->path_sever(VAR_7, ((void*)0));
    return;
   }
   VAR_6 = FUNC_7(&FUNC_3(VAR_5)->backlog_skb_q);
  } else {
   FUNC_10(VAR_6);
   FUNC_9(VAR_6);
   VAR_6->len = VAR_10;
  }
 }

 if (FUNC_11(VAR_5, VAR_6))
  FUNC_8(&FUNC_3(VAR_5)->backlog_skb_q, VAR_6);
}
