
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; scalar_t__ evcb_pri; } ;
struct event_base {scalar_t__ nactivequeues; int active_later_queue; int event_count_active; int event_count_active_max; } ;


 int FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct event_base*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct event_callback*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct event_base *VAR_3, struct event_callback *VAR_4)
{
 FUNC_0(VAR_3);
 if (VAR_4->evcb_flags & (VAR_1|VAR_0)) {

  return;
 }

 FUNC_2(VAR_3, VAR_4->evcb_flags);
 VAR_4->evcb_flags |= VAR_1;
 VAR_3->event_count_active++;
 FUNC_3(VAR_3->event_count_active_max, VAR_3->event_count_active);
 FUNC_1(VAR_4->evcb_pri < VAR_3->nactivequeues);
 FUNC_4(&VAR_3->active_later_queue, VAR_4, VAR_2);
}
