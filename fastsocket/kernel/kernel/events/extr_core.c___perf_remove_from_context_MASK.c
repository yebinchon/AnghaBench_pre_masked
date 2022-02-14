
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; scalar_t__ is_active; int nr_events; } ;
struct perf_event {struct perf_event_context* ctx; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 struct perf_event *VAR_1 = VAR_0;
 struct perf_event_context *VAR_2 = VAR_1->ctx;
 struct perf_cpu_context *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_1, VAR_3, VAR_2);
 FUNC_2(VAR_1, VAR_2);
 if (!VAR_2->nr_events && VAR_3->task_ctx == VAR_2) {
  VAR_2->is_active = 0;
  VAR_3->task_ctx = ((void*)0);
 }
 FUNC_4(&VAR_2->lock);

 return 0;
}
