
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; scalar_t__ is_active; int mutex; struct task_struct* task; } ;
struct perf_event {int cpu; struct perf_event_context* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_1 (int,int ,struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,int ,struct perf_event*) ;

__attribute__((used)) static void
FUNC_6(struct perf_event_context *VAR_1,
   struct perf_event *VAR_2,
   int VAR_3)
{
 struct task_struct *VAR_4 = VAR_1->task;

 FUNC_2(&VAR_1->mutex);

 VAR_2->ctx = VAR_1;
 if (VAR_2->cpu != -1)
  VAR_2->cpu = VAR_3;

 if (!VAR_4) {




  FUNC_1(VAR_3, VAR_0, VAR_2);
  return;
 }

retry:
 if (!FUNC_5(VAR_4, VAR_0, VAR_2))
  return;

 FUNC_3(&VAR_1->lock);




 if (VAR_1->is_active) {
  FUNC_4(&VAR_1->lock);
  goto retry;
 }





 FUNC_0(VAR_2, VAR_1);
 FUNC_4(&VAR_1->lock);
}
