
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;


 int FUNC_0 (struct perf_evsel*) ;
 struct perf_evsel* FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (struct perf_evsel*,char*,int,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(void)
{
 struct perf_evsel *VAR_0 = FUNC_1("sched", "sched_switch", 0);
 int VAR_1 = 0;

 if (VAR_0 == ((void*)0)) {
  FUNC_3("perf_evsel__new\n");
  return -1;
 }

 if (FUNC_2(VAR_0, "prev_comm", 16, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "prev_pid", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "prev_prio", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "prev_state", sizeof(long), 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "next_comm", 16, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "next_pid", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "next_prio", 4, 1))
  VAR_1 = -1;

 FUNC_0(VAR_0);

 VAR_0 = FUNC_1("sched", "sched_wakeup", 0);

 if (FUNC_2(VAR_0, "comm", 16, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "pid", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "prio", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "success", 4, 1))
  VAR_1 = -1;

 if (FUNC_2(VAR_0, "target_cpu", 4, 1))
  VAR_1 = -1;

 return VAR_1;
}
