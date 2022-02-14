
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
struct pending {struct pending* pkt; scalar_t__ timer; TYPE_1__ node; struct pending* next_waiting; } ;
struct outside_network {int pending; struct pending* udp_wait_last; struct pending* udp_wait_first; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pending*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct outside_network* VAR_0, struct pending* VAR_1)
{
 if(!VAR_1)
  return;
 if(VAR_0 && VAR_0->udp_wait_first &&
  (VAR_1->next_waiting || VAR_1 == VAR_0->udp_wait_last) ) {

  struct pending* VAR_2 = ((void*)0), *VAR_3 = VAR_0->udp_wait_first;
  while(VAR_3 && VAR_3 != VAR_1) {
   VAR_2 = VAR_3;
   VAR_3 = VAR_3->next_waiting;
  }
  if(VAR_3) {
   FUNC_2(VAR_3 == VAR_1);
   if(VAR_2)
    VAR_2->next_waiting = VAR_1->next_waiting;
   else VAR_0->udp_wait_first = VAR_1->next_waiting;
   if(VAR_0->udp_wait_last == VAR_1)
    VAR_0->udp_wait_last = VAR_2;
  }
 }
 if(VAR_0) {
  (void)FUNC_3(VAR_0->pending, VAR_1->node.key);
 }
 if(VAR_1->timer)
  FUNC_0(VAR_1->timer);
 FUNC_1(VAR_1->pkt);
 FUNC_1(VAR_1);
}
