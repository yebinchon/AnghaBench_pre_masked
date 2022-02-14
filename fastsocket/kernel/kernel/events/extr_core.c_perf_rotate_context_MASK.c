
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ nr_events; scalar_t__ nr_active; int pmu; } ;
struct perf_cpu_context {int rotation_list; struct perf_event_context* task_ctx; struct perf_event_context ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_cpu_context*,int ) ;
 int FUNC_1 (struct perf_event_context*,struct perf_cpu_context*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_cpu_context*,struct perf_event_context*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct perf_event_context*) ;

__attribute__((used)) static void FUNC_9(struct perf_cpu_context *VAR_2)
{
 struct perf_event_context *VAR_3 = ((void*)0);
 int VAR_4 = 0, VAR_5 = 1;

 if (VAR_2->ctx.nr_events) {
  VAR_5 = 0;
  if (VAR_2->ctx.nr_events != VAR_2->ctx.nr_active)
   VAR_4 = 1;
 }

 VAR_3 = VAR_2->task_ctx;
 if (VAR_3 && VAR_3->nr_events) {
  VAR_5 = 0;
  if (VAR_3->nr_events != VAR_3->nr_active)
   VAR_4 = 1;
 }

 if (!VAR_4)
  goto done;

 FUNC_3(VAR_2, VAR_2->task_ctx);
 FUNC_6(VAR_2->ctx.pmu);

 FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_8(&VAR_2->ctx);
 if (VAR_3)
  FUNC_8(VAR_3);

 FUNC_5(VAR_2, VAR_3, VAR_1);

 FUNC_7(VAR_2->ctx.pmu);
 FUNC_4(VAR_2, VAR_2->task_ctx);
done:
 if (VAR_5)
  FUNC_2(&VAR_2->rotation_list);
}
