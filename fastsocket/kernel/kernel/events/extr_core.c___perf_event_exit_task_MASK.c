
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; } ;
struct perf_event {scalar_t__ parent; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_6(struct perf_event *VAR_0,
    struct perf_event_context *VAR_1,
    struct task_struct *VAR_2)
{
 if (VAR_0->parent) {
  FUNC_3(&VAR_1->lock);
  FUNC_1(VAR_0);
  FUNC_4(&VAR_1->lock);
 }

 FUNC_2(VAR_0);






 if (VAR_0->parent) {
  FUNC_5(VAR_0, VAR_2);
  FUNC_0(VAR_0);
 }
}
