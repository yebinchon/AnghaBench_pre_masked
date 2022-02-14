
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_6__ {scalar_t__ qlen; int lock; } ;
struct TYPE_5__ {unsigned long expires; } ;
struct neigh_table {TYPE_3__ proxy_queue; TYPE_1__ proxy_timer; } ;
struct neigh_parms {unsigned long proxy_delay; scalar_t__ proxy_qlen; } ;
struct TYPE_7__ {unsigned long sched_next; int flags; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_1 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

void FUNC_11(struct neigh_table *VAR_2, struct neigh_parms *VAR_3,
      struct sk_buff *VAR_4)
{
 unsigned long VAR_5 = VAR_1;
 unsigned long VAR_6 = VAR_5 + (FUNC_6() % VAR_3->proxy_delay);

 if (VAR_2->proxy_queue.qlen > VAR_3->proxy_qlen) {
  FUNC_4(VAR_4);
  return;
 }

 FUNC_0(VAR_4)->sched_next = VAR_6;
 FUNC_0(VAR_4)->flags |= VAR_0;

 FUNC_8(&VAR_2->proxy_queue.lock);
 if (FUNC_2(&VAR_2->proxy_timer)) {
  if (FUNC_10(VAR_2->proxy_timer.expires, VAR_6))
   VAR_6 = VAR_2->proxy_timer.expires;
 }
 FUNC_7(VAR_4);
 FUNC_3(VAR_4->dev);
 FUNC_1(&VAR_2->proxy_queue, VAR_4);
 FUNC_5(&VAR_2->proxy_timer, VAR_6);
 FUNC_9(&VAR_2->proxy_queue.lock);
}
