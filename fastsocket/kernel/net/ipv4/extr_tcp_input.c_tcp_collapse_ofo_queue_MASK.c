
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int out_of_order_queue; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int end_seq; int seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sock*,int *,struct sk_buff*,struct sk_buff*,int ,int ) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_7(VAR_0);
 struct sk_buff *VAR_2 = FUNC_3(&VAR_1->out_of_order_queue);
 struct sk_buff *VAR_3;
 u32 VAR_4, VAR_5;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = FUNC_0(VAR_2)->seq;
 VAR_5 = FUNC_0(VAR_2)->end_seq;
 VAR_3 = VAR_2;

 for (;;) {
  struct sk_buff *VAR_6 = ((void*)0);

  if (!FUNC_4(&VAR_1->out_of_order_queue, VAR_2))
   VAR_6 = FUNC_5(&VAR_1->out_of_order_queue, VAR_2);
  VAR_2 = VAR_6;



  if (!VAR_2 ||
      FUNC_1(FUNC_0(VAR_2)->seq, VAR_5) ||
      FUNC_2(FUNC_0(VAR_2)->end_seq, VAR_4)) {
   FUNC_6(VAR_0, &VAR_1->out_of_order_queue,
         VAR_3, VAR_2, VAR_4, VAR_5);
   VAR_3 = VAR_2;
   if (!VAR_2)
    break;

   VAR_4 = FUNC_0(VAR_2)->seq;
   VAR_5 = FUNC_0(VAR_2)->end_seq;
  } else {
   if (FUNC_2(FUNC_0(VAR_2)->seq, VAR_4))
    VAR_4 = FUNC_0(VAR_2)->seq;
   if (FUNC_1(FUNC_0(VAR_2)->end_seq, VAR_5))
    VAR_5 = FUNC_0(VAR_2)->end_seq;
  }
 }
}
