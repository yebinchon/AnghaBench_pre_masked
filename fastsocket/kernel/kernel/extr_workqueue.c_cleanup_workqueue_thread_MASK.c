
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_workqueue_struct {int * thread; TYPE_1__* wq; } ;
struct TYPE_2__ {int lockdep_map; } ;


 int FUNC_0 (struct cpu_workqueue_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cpu_workqueue_struct *VAR_0)
{




 if (VAR_0->thread == ((void*)0))
  return;

 FUNC_2(&VAR_0->wq->lockdep_map);
 FUNC_3(&VAR_0->wq->lockdep_map);

 FUNC_0(VAR_0);
 FUNC_4(VAR_0->thread);
 FUNC_1(VAR_0->thread);
 VAR_0->thread = ((void*)0);
}
