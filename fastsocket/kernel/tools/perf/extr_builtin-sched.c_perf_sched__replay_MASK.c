
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {unsigned long replay_repeat; scalar_t__ nr_run_events_optimized; scalar_t__ multitarget_wakeups; scalar_t__ targetless_wakeups; int nr_wakeup_events; int nr_sleep_events; int nr_run_events; } ;


 int FUNC_0 (struct perf_sched*) ;
 int FUNC_1 (struct perf_sched*) ;
 int FUNC_2 (struct perf_sched*) ;
 int FUNC_3 (struct perf_sched*) ;
 scalar_t__ FUNC_4 (struct perf_sched*,int,int *) ;
 int FUNC_5 (struct perf_sched*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct perf_sched*) ;
 int FUNC_8 (struct perf_sched*) ;

__attribute__((used)) static int FUNC_9(struct perf_sched *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 FUNC_8(VAR_0);

 if (FUNC_4(VAR_0, 1, ((void*)0)))
  return -1;

 FUNC_6("nr_run_events:        %ld\n", VAR_0->nr_run_events);
 FUNC_6("nr_sleep_events:      %ld\n", VAR_0->nr_sleep_events);
 FUNC_6("nr_wakeup_events:     %ld\n", VAR_0->nr_wakeup_events);

 if (VAR_0->targetless_wakeups)
  FUNC_6("target-less wakeups:  %ld\n", VAR_0->targetless_wakeups);
 if (VAR_0->multitarget_wakeups)
  FUNC_6("multi-target wakeups: %ld\n", VAR_0->multitarget_wakeups);
 if (VAR_0->nr_run_events_optimized)
  FUNC_6("run atoms optimized: %ld\n",
   VAR_0->nr_run_events_optimized);

 FUNC_5(VAR_0);
 FUNC_0(VAR_0);

 FUNC_3(VAR_0);
 FUNC_6("------------------------------------------------------------\n");
 for (VAR_1 = 0; VAR_1 < VAR_0->replay_repeat; VAR_1++)
  FUNC_7(VAR_0);

 return 0;
}
