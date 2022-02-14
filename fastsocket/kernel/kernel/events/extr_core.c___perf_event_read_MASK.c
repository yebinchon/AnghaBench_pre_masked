
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int lock; scalar_t__ is_active; scalar_t__ task; } ;
struct perf_event {scalar_t__ state; TYPE_1__* pmu; struct perf_event_context* ctx; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;
struct TYPE_2__ {int (* read ) (struct perf_event*) ;} ;


 scalar_t__ VAR_0 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event_context*) ;
 int FUNC_6 (struct perf_event*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct perf_event *VAR_2 = VAR_1;
 struct perf_event_context *VAR_3 = VAR_2->ctx;
 struct perf_cpu_context *VAR_4 = FUNC_0(VAR_3);
 if (VAR_3->task && VAR_4->task_ctx != VAR_3)
  return;

 FUNC_1(&VAR_3->lock);
 if (VAR_3->is_active) {
  FUNC_5(VAR_3);
  FUNC_4(VAR_2);
 }
 FUNC_6(VAR_2);
 if (VAR_2->state == VAR_0)
  VAR_2->pmu->read(VAR_2);
 FUNC_2(&VAR_3->lock);
}
