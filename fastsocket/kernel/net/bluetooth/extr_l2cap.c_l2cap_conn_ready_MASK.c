
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;
struct TYPE_2__ {struct sock* next_c; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct l2cap_conn *VAR_3)
{
 struct l2cap_chan_list *VAR_4 = &VAR_3->chan_list;
 struct sock *VAR_5;

 FUNC_0("conn %p", VAR_3);

 FUNC_6(&VAR_4->lock);

 for (VAR_5 = VAR_4->head; VAR_5; VAR_5 = FUNC_4(VAR_5)->next_c) {
  FUNC_1(VAR_5);

  if (VAR_5->sk_type != VAR_2) {
   FUNC_5(VAR_5);
   VAR_5->sk_state = VAR_1;
   VAR_5->sk_state_change(VAR_5);
  } else if (VAR_5->sk_state == VAR_0)
   FUNC_3(VAR_5);

  FUNC_2(VAR_5);
 }

 FUNC_7(&VAR_4->lock);
}
