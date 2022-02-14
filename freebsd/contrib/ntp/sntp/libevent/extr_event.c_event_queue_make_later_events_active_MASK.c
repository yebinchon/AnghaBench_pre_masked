
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; size_t evcb_pri; scalar_t__ evcb_closure; } ;
struct event_base {size_t nactivequeues; int n_deferreds_queued; int * activequeues; int active_later_queue; } ;


 int FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 struct event_callback* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct event_callback*,int ) ;
 int FUNC_4 (int *,struct event_callback*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct event_base *VAR_4)
{
 struct event_callback *VAR_5;
 FUNC_0(VAR_4);

 while ((VAR_5 = FUNC_2(&VAR_4->active_later_queue))) {
  FUNC_4(&VAR_4->active_later_queue, VAR_5, VAR_3);
  VAR_5->evcb_flags = (VAR_5->evcb_flags & ~VAR_1) | VAR_0;
  FUNC_1(VAR_5->evcb_pri < VAR_4->nactivequeues);
  FUNC_3(&VAR_4->activequeues[VAR_5->evcb_pri], VAR_5, VAR_3);
  VAR_4->n_deferreds_queued += (VAR_5->evcb_closure == VAR_2);
 }
}
