
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int dummy; } ;
struct perf_event_context {int is_active; int timestamp; int nr_events; } ;
struct perf_cpu_context {int dummy; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event_context*,struct perf_cpu_context*) ;
 int FUNC_1 (struct perf_event_context*,struct perf_cpu_context*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*,struct perf_event_context*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct perf_event_context *VAR_2,
      struct perf_cpu_context *VAR_3,
      enum event_type_t VAR_4,
      struct task_struct *VAR_5)
{
 u64 VAR_6;
 int VAR_7 = VAR_2->is_active;

 VAR_2->is_active |= VAR_4;
 if (FUNC_2(!VAR_2->nr_events))
  return;

 VAR_6 = FUNC_4();
 VAR_2->timestamp = VAR_6;
 FUNC_3(VAR_5, VAR_2);




 if (!(VAR_7 & VAR_1) && (VAR_4 & VAR_1))
  FUNC_1(VAR_2, VAR_3);


 if (!(VAR_7 & VAR_0) && (VAR_4 & VAR_0))
  FUNC_0(VAR_2, VAR_3);
}
