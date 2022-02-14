
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct perf_event_context** perf_event_ctxp; } ;
struct perf_event_context {int lock; struct task_struct* task; int parent_ctx; } ;
struct perf_cpu_context {int * task_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct perf_cpu_context* FUNC_0 (struct perf_event_context*) ;
 scalar_t__ FUNC_1 (struct perf_event_context*,struct perf_event_context*) ;
 int FUNC_2 (struct perf_event_context*,struct perf_cpu_context*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct perf_event_context*,struct perf_event_context*) ;
 struct perf_event_context* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct task_struct *VAR_2, int VAR_3,
      struct task_struct *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_2->perf_event_ctxp[VAR_3];
 struct perf_event_context *VAR_6;
 struct perf_event_context *VAR_7;
 struct perf_cpu_context *VAR_8;
 int VAR_9 = 1;

 if (FUNC_3(!VAR_5))
  return;

 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8->task_ctx)
  return;

 FUNC_6();
 VAR_7 = FUNC_5(VAR_5->parent_ctx);
 VAR_6 = VAR_4->perf_event_ctxp[VAR_3];
 if (VAR_7 && VAR_6 &&
     FUNC_5(VAR_6->parent_ctx) == VAR_7) {
  FUNC_8(&VAR_5->lock);
  FUNC_9(&VAR_6->lock, VAR_1);
  if (FUNC_1(VAR_5, VAR_6)) {




   VAR_2->perf_event_ctxp[VAR_3] = VAR_6;
   VAR_4->perf_event_ctxp[VAR_3] = VAR_5;
   VAR_5->task = VAR_4;
   VAR_6->task = VAR_2;
   VAR_9 = 0;

   FUNC_4(VAR_5, VAR_6);
  }
  FUNC_10(&VAR_6->lock);
  FUNC_10(&VAR_5->lock);
 }
 FUNC_7();

 if (VAR_9) {
  FUNC_8(&VAR_5->lock);
  FUNC_2(VAR_5, VAR_8, VAR_0);
  VAR_8->task_ctx = ((void*)0);
  FUNC_10(&VAR_5->lock);
 }
}
