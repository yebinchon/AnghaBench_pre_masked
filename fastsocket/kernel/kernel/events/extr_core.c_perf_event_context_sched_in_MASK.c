
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int pmu; scalar_t__ nr_events; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (struct perf_cpu_context*,int ) ;
 int FUNC_2 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*,struct task_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct perf_event_context *VAR_1,
     struct task_struct *VAR_2)
{
 struct perf_cpu_context *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3->task_ctx == VAR_1)
  return;

 FUNC_2(VAR_3, VAR_1);
 FUNC_5(VAR_1->pmu);





 FUNC_1(VAR_3, VAR_0);

 if (VAR_1->nr_events)
  VAR_3->task_ctx = VAR_1;

 FUNC_4(VAR_3, VAR_3->task_ctx, VAR_2);

 FUNC_6(VAR_1->pmu);
 FUNC_3(VAR_3, VAR_1);





 FUNC_7(VAR_1->pmu);
}
