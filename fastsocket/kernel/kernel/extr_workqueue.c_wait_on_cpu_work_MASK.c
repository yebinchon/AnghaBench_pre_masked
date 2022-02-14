
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_barrier {int done; } ;
struct work_struct {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct cpu_workqueue_struct {int lock; TYPE_1__ worklist; struct work_struct* current_work; } ;


 int FUNC_0 (struct cpu_workqueue_struct*,struct wq_barrier*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cpu_workqueue_struct *VAR_0,
    struct work_struct *VAR_1)
{
 struct wq_barrier VAR_2;
 int VAR_3 = 0;

 FUNC_1(&VAR_0->lock);
 if (FUNC_3(VAR_0->current_work == VAR_1)) {
  FUNC_0(VAR_0, &VAR_2, VAR_0->worklist.next);
  VAR_3 = 1;
 }
 FUNC_2(&VAR_0->lock);

 if (FUNC_3(VAR_3))
  FUNC_4(&VAR_2.done);
}
