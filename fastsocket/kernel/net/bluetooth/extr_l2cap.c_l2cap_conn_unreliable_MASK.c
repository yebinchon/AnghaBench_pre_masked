
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err; } ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;
struct TYPE_2__ {scalar_t__ force_reliable; struct sock* next_c; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct l2cap_conn *VAR_0, int VAR_1)
{
 struct l2cap_chan_list *VAR_2 = &VAR_0->chan_list;
 struct sock *VAR_3;

 FUNC_0("conn %p", VAR_0);

 FUNC_2(&VAR_2->lock);

 for (VAR_3 = VAR_2->head; VAR_3; VAR_3 = FUNC_1(VAR_3)->next_c) {
  if (FUNC_1(VAR_3)->force_reliable)
   VAR_3->sk_err = VAR_1;
 }

 FUNC_3(&VAR_2->lock);
}
