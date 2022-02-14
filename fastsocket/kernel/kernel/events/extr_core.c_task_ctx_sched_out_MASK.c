
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int dummy; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct perf_cpu_context* FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_event_context*,struct perf_cpu_context*,int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event_context *VAR_1)
{
 struct perf_cpu_context *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->task_ctx)
  return;

 if (FUNC_0(VAR_1 != VAR_2->task_ctx))
  return;

 FUNC_2(VAR_1, VAR_2, VAR_0);
 VAR_2->task_ctx = ((void*)0);
}
