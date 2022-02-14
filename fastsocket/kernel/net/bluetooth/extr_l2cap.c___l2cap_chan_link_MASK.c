
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_chan_list {struct sock* head; } ;
struct TYPE_2__ {struct sock* prev_c; struct sock* next_c; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static inline void FUNC_2(struct l2cap_chan_list *VAR_0, struct sock *VAR_1)
{
 FUNC_1(VAR_1);

 if (VAR_0->head)
  FUNC_0(VAR_0->head)->prev_c = VAR_1;

 FUNC_0(VAR_1)->next_c = VAR_0->head;
 FUNC_0(VAR_1)->prev_c = ((void*)0);
 VAR_0->head = VAR_1;
}
