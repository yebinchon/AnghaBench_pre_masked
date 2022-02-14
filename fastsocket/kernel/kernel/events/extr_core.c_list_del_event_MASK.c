
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int nr_stat; int nr_events; int nr_cgroups; } ;
struct TYPE_2__ {scalar_t__ inherit_stat; } ;
struct perf_event {int attach_state; scalar_t__ state; int group_entry; struct perf_event* group_leader; int event_entry; TYPE_1__ attr; } ;
struct perf_cpu_context {int * cgrp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*) ;

__attribute__((used)) static void
FUNC_5(struct perf_event *VAR_2, struct perf_event_context *VAR_3)
{
 struct perf_cpu_context *VAR_4;



 if (!(VAR_2->attach_state & VAR_0))
  return;

 VAR_2->attach_state &= ~VAR_0;

 if (FUNC_1(VAR_2)) {
  VAR_3->nr_cgroups--;
  VAR_4 = FUNC_0(VAR_3);





  if (!VAR_3->nr_cgroups)
   VAR_4->cgrp = ((void*)0);
 }

 VAR_3->nr_events--;
 if (VAR_2->attr.inherit_stat)
  VAR_3->nr_stat--;

 FUNC_3(&VAR_2->event_entry);

 if (VAR_2->group_leader == VAR_2)
  FUNC_2(&VAR_2->group_entry);

 FUNC_4(VAR_2);
 if (VAR_2->state > VAR_1)
  VAR_2->state = VAR_1;
}
