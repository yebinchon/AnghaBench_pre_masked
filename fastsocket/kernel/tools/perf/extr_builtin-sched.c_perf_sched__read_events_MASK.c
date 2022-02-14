
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * nr_events; int total_lost; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct perf_session {TYPE_2__ hists; } ;
struct perf_sched {int nr_lost_chunks; int nr_lost_events; int nr_events; int tool; } ;
struct perf_evsel_str_handler {char* member_0; int member_1; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_session*) ;
 scalar_t__ FUNC_1 (struct perf_session*,char*) ;
 struct perf_session* FUNC_2 (int ,int ,int ,int,int *) ;
 int FUNC_3 (struct perf_session*,int *) ;
 scalar_t__ FUNC_4 (struct perf_session*,struct perf_evsel_str_handler const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct perf_sched *VAR_9, bool VAR_10,
       struct perf_session **VAR_11)
{
 const struct perf_evsel_str_handler VAR_12[] = {
  { "sched:sched_switch", VAR_7, },
  { "sched:sched_stat_runtime", VAR_6, },
  { "sched:sched_wakeup", VAR_8, },
  { "sched:sched_wakeup_new", VAR_8, },
  { "sched:sched_process_fork", VAR_4, },
  { "sched:sched_process_exit", VAR_3, },
  { "sched:sched_migrate_task", VAR_5, },
 };
 struct perf_session *VAR_13;

 VAR_13 = FUNC_2(VAR_2, VAR_0, 0, 0, &VAR_9->tool);
 if (VAR_13 == ((void*)0)) {
  FUNC_5("No Memory for session\n");
  return -1;
 }

 if (FUNC_4(VAR_13, VAR_12))
  goto out_delete;

 if (FUNC_1(VAR_13, "record -R")) {
  int VAR_14 = FUNC_3(VAR_13, &VAR_9->tool);
  if (VAR_14) {
   FUNC_6("Failed to process events, error %d", VAR_14);
   goto out_delete;
  }

  VAR_9->nr_events = VAR_13->hists.stats.nr_events[0];
  VAR_9->nr_lost_events = VAR_13->hists.stats.total_lost;
  VAR_9->nr_lost_chunks = VAR_13->hists.stats.nr_events[VAR_1];
 }

 if (VAR_10)
  FUNC_0(VAR_13);

 if (VAR_11)
  *VAR_11 = VAR_13;

 return 0;

out_delete:
 FUNC_0(VAR_13);
 return -1;
}
