
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_tcp {struct waiting_tcp* next_waiting; } ;
struct outside_network {struct waiting_tcp* tcp_wait_last; struct waiting_tcp* tcp_wait_first; } ;



__attribute__((used)) static void
FUNC_0(struct outside_network* VAR_0, struct waiting_tcp* VAR_1)
{
 struct waiting_tcp* VAR_2 = VAR_0->tcp_wait_first, *VAR_3 = ((void*)0);
 while(VAR_2) {
  if(VAR_2 == VAR_1) {

   if(VAR_3)
    VAR_3->next_waiting = VAR_1->next_waiting;
   else VAR_0->tcp_wait_first = VAR_1->next_waiting;
   if(VAR_0->tcp_wait_last == VAR_1)
    VAR_0->tcp_wait_last = VAR_3;
   return;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next_waiting;
 }
}
