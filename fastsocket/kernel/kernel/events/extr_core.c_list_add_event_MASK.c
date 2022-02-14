
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int nr_stat; int nr_events; int pmu; int event_list; int nr_cgroups; } ;
struct TYPE_2__ {scalar_t__ inherit_stat; } ;
struct perf_event {int attach_state; TYPE_1__ attr; int event_entry; int group_entry; int group_flags; struct perf_event* group_leader; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct list_head* FUNC_1 (struct perf_event*,struct perf_event_context*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct perf_event *VAR_2, struct perf_event_context *VAR_3)
{
 FUNC_0(VAR_2->attach_state & VAR_0);
 VAR_2->attach_state |= VAR_0;






 if (VAR_2->group_leader == VAR_2) {
  struct list_head *VAR_4;

  if (FUNC_3(VAR_2))
   VAR_2->group_flags |= VAR_1;

  VAR_4 = FUNC_1(VAR_2, VAR_3);
  FUNC_5(&VAR_2->group_entry, VAR_4);
 }

 if (FUNC_2(VAR_2))
  VAR_3->nr_cgroups++;

 FUNC_4(&VAR_2->event_entry, &VAR_3->event_list);
 if (!VAR_3->nr_events)
  FUNC_6(VAR_3->pmu);
 VAR_3->nr_events++;
 if (VAR_2->attr.inherit_stat)
  VAR_3->nr_stat++;
}
