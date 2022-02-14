
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; struct task_struct* task; } ;
struct perf_event {scalar_t__ state; int cpu; struct perf_event_context* ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct perf_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,int ,struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;

void FUNC_5(struct perf_event *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_4->ctx;
 struct task_struct *VAR_6 = VAR_5->task;

 if (!VAR_6) {



  FUNC_0(VAR_4->cpu, VAR_3, VAR_4);
  return;
 }

retry:
 if (!FUNC_3(VAR_6, VAR_3, VAR_4))
  return;

 FUNC_1(&VAR_5->lock);



 if (VAR_4->state == VAR_0) {
  FUNC_2(&VAR_5->lock);




  VAR_6 = VAR_5->task;
  goto retry;
 }





 if (VAR_4->state == VAR_1) {
  FUNC_4(VAR_4);
  VAR_4->state = VAR_2;
 }
 FUNC_2(&VAR_5->lock);
}
