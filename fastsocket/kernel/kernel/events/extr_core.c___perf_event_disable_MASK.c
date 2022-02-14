
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; scalar_t__ task; } ;
struct perf_event {scalar_t__ state; struct perf_event* group_leader; struct perf_event_context* ctx; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*,struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event_context*) ;
 int FUNC_7 (struct perf_event*) ;

__attribute__((used)) static int FUNC_8(void *VAR_3)
{
 struct perf_event *VAR_4 = VAR_3;
 struct perf_event_context *VAR_5 = VAR_4->ctx;
 struct perf_cpu_context *VAR_6 = FUNC_0(VAR_5);
 if (VAR_5->task && VAR_6->task_ctx != VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_5->lock);





 if (VAR_4->state >= VAR_1) {
  FUNC_6(VAR_5);
  FUNC_5(VAR_4);
  FUNC_7(VAR_4);
  if (VAR_4 == VAR_4->group_leader)
   FUNC_2(VAR_4, VAR_6, VAR_5);
  else
   FUNC_1(VAR_4, VAR_6, VAR_5);
  VAR_4->state = VAR_2;
 }

 FUNC_4(&VAR_5->lock);

 return 0;
}
