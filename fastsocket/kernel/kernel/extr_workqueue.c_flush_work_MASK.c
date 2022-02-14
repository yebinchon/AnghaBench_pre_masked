
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wq_barrier {int done; } ;
struct list_head {int next; } ;
struct work_struct {struct list_head entry; } ;
struct cpu_workqueue_struct {int lock; struct list_head worklist; struct work_struct* current_work; TYPE_1__* wq; } ;
struct TYPE_2__ {int lockdep_map; } ;


 struct cpu_workqueue_struct* FUNC_0 (struct work_struct*) ;
 int FUNC_1 (struct cpu_workqueue_struct*,struct wq_barrier*,int ) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct work_struct *VAR_0)
{
 struct cpu_workqueue_struct *VAR_1;
 struct list_head *VAR_2;
 struct wq_barrier VAR_3;

 FUNC_5();
 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;

 FUNC_3(&VAR_1->wq->lockdep_map);
 FUNC_4(&VAR_1->wq->lockdep_map);

 VAR_2 = ((void*)0);
 FUNC_7(&VAR_1->lock);
 if (!FUNC_2(&VAR_0->entry)) {




  FUNC_6();
  if (FUNC_9(VAR_1 != FUNC_0(VAR_0)))
   goto out;
  VAR_2 = &VAR_0->entry;
 } else {
  if (VAR_1->current_work != VAR_0)
   goto out;
  VAR_2 = &VAR_1->worklist;
 }
 FUNC_1(VAR_1, &VAR_3, VAR_2->next);
out:
 FUNC_8(&VAR_1->lock);
 if (!VAR_2)
  return 0;

 FUNC_10(&VAR_3.done);
 return 1;
}
