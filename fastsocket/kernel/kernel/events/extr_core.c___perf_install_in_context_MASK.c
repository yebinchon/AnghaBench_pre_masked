
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct perf_event_context {struct task_struct* task; int lock; } ;
struct perf_event {struct perf_event_context* ctx; } ;
struct TYPE_2__ {int pmu; } ;
struct perf_cpu_context {TYPE_1__ ctx; struct perf_event_context* task_ctx; } ;


 int VAR_0 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_cpu_context*,int ) ;
 struct task_struct* VAR_1 ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_cpu_context*,struct perf_event_context*,struct task_struct*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct perf_event_context*) ;
 int FUNC_11 (struct perf_event*) ;
 int FUNC_12 (struct perf_event_context*) ;

__attribute__((used)) static int FUNC_13(void *VAR_2)
{
 struct perf_event *VAR_3 = VAR_2;
 struct perf_event_context *VAR_4 = VAR_3->ctx;
 struct perf_cpu_context *VAR_5 = FUNC_0(VAR_4);
 struct perf_event_context *VAR_6 = VAR_5->task_ctx;
 struct task_struct *VAR_7 = VAR_1;

 FUNC_3(VAR_5, VAR_6);
 FUNC_6(VAR_5->ctx.pmu);




 if (VAR_6)
  FUNC_10(VAR_6);





 if (VAR_4->task && VAR_6 != VAR_4) {
  if (VAR_6)
   FUNC_9(&VAR_6->lock);
  FUNC_8(&VAR_4->lock);
  VAR_6 = VAR_4;
 }

 if (VAR_6) {
  VAR_5->task_ctx = VAR_6;
  VAR_7 = VAR_6->task;
 }

 FUNC_2(VAR_5, VAR_0);

 FUNC_12(VAR_4);





 FUNC_11(VAR_3);

 FUNC_1(VAR_3, VAR_4);




 FUNC_5(VAR_5, VAR_6, VAR_7);

 FUNC_7(VAR_5->ctx.pmu);
 FUNC_4(VAR_5, VAR_6);

 return 0;
}
