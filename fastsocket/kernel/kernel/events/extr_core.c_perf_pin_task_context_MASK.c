
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int lock; int pin_count; } ;


 struct perf_event_context* FUNC_0 (struct task_struct*,int,unsigned long*) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct perf_event_context *
FUNC_2(struct task_struct *VAR_0, int VAR_1)
{
 struct perf_event_context *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_2) {
  ++VAR_2->pin_count;
  FUNC_1(&VAR_2->lock, VAR_3);
 }
 return VAR_2;
}
