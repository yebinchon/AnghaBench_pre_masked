
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct sk_buff {struct sock* sk; } ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;
struct TYPE_2__ {struct sock* next_c; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct l2cap_conn *VAR_2, struct sk_buff *VAR_3)
{
 struct l2cap_chan_list *VAR_4 = &VAR_2->chan_list;
 struct sk_buff *VAR_5;
 struct sock *VAR_6;

 FUNC_0("conn %p", VAR_2);

 FUNC_3(&VAR_4->lock);
 for (VAR_6 = VAR_4->head; VAR_6; VAR_6 = FUNC_2(VAR_6)->next_c) {
  if (VAR_6->sk_type != VAR_1)
   continue;


  if (VAR_3->sk == VAR_6)
   continue;
  VAR_5 = FUNC_5(VAR_3, VAR_0);
  if (!VAR_5)
   continue;

  if (FUNC_6(VAR_6, VAR_5))
   FUNC_1(VAR_5);
 }
 FUNC_4(&VAR_4->lock);
}
