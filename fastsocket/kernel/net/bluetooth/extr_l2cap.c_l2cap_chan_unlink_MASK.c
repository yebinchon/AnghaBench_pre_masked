
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct TYPE_2__ {struct sock* next_c; struct sock* prev_c; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct l2cap_chan_list *VAR_0, struct sock *VAR_1)
{
 struct sock *VAR_2 = FUNC_1(VAR_1)->next_c, *VAR_3 = FUNC_1(VAR_1)->prev_c;

 FUNC_2(&VAR_0->lock);
 if (VAR_1 == VAR_0->head)
  VAR_0->head = VAR_2;

 if (VAR_2)
  FUNC_1(VAR_2)->prev_c = VAR_3;
 if (VAR_3)
  FUNC_1(VAR_3)->next_c = VAR_2;
 FUNC_3(&VAR_0->lock);

 FUNC_0(VAR_1);
}
