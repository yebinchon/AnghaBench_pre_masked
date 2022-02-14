
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; size_t evcb_pri; } ;
struct event_base {size_t nactivequeues; int * activequeues; int event_count_active; int event_count_active_max; } ;


 int FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct event_base*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct event_callback*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct event_base *VAR_2, struct event_callback *VAR_3)
{
 FUNC_0(VAR_2);

 if (VAR_3->evcb_flags & VAR_0) {

  return;
 }

 FUNC_2(VAR_2, VAR_3->evcb_flags);

 VAR_3->evcb_flags |= VAR_0;

 VAR_2->event_count_active++;
 FUNC_3(VAR_2->event_count_active_max, VAR_2->event_count_active);
 FUNC_1(VAR_3->evcb_pri < VAR_2->nactivequeues);
 FUNC_4(&VAR_2->activequeues[VAR_3->evcb_pri],
     VAR_3, VAR_1);
}
