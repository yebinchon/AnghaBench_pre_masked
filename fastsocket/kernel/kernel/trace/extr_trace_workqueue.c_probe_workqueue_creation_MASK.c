
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pid; } ;
struct cpu_workqueue_stats {int cpu; int list; int pid; int kref; } ;
struct TYPE_2__ {int lock; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct cpu_workqueue_stats* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_1__* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_1, int VAR_2)
{
 struct cpu_workqueue_stats *VAR_3;
 unsigned long VAR_4;

 FUNC_1(VAR_2 < 0);


 VAR_3 = FUNC_3(sizeof(struct cpu_workqueue_stats), VAR_0);
 if (!VAR_3) {
  FUNC_5("trace_workqueue: not enough memory\n");
  return;
 }
 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_3->kref);
 VAR_3->cpu = VAR_2;
 VAR_3->pid = VAR_1->pid;

 FUNC_6(&FUNC_8(VAR_2)->lock, VAR_4);
 FUNC_4(&VAR_3->list, &FUNC_8(VAR_2)->list);
 FUNC_7(&FUNC_8(VAR_2)->lock, VAR_4);
}
