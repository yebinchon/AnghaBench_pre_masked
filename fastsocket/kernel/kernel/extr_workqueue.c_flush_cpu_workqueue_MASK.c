
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wq_barrier {int done; } ;
struct cpu_workqueue_struct {scalar_t__ thread; int lock; int worklist; int * current_work; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct cpu_workqueue_struct*,struct wq_barrier*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cpu_workqueue_struct *VAR_1)
{
 int VAR_2 = 0;
 struct wq_barrier VAR_3;

 FUNC_0(VAR_1->thread == VAR_0);

 FUNC_3(&VAR_1->lock);
 if (!FUNC_2(&VAR_1->worklist) || VAR_1->current_work != ((void*)0)) {
  FUNC_1(VAR_1, &VAR_3, &VAR_1->worklist);
  VAR_2 = 1;
 }
 FUNC_4(&VAR_1->lock);

 if (VAR_2)
  FUNC_5(&VAR_3.done);

 return VAR_2;
}
