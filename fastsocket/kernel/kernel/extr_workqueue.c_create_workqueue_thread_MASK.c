
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {scalar_t__ rt; int name; } ;
struct task_struct {int dummy; } ;
struct sched_param {int sched_priority; } ;
struct cpu_workqueue_struct {struct task_struct* thread; struct workqueue_struct* wq; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct workqueue_struct*) ;
 struct task_struct* FUNC_3 (int ,struct cpu_workqueue_struct*,char const*,int ,int) ;
 int FUNC_4 (struct task_struct*,int ,struct sched_param*) ;
 int FUNC_5 (struct task_struct*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct cpu_workqueue_struct *VAR_3, int VAR_4)
{
 struct sched_param VAR_5 = { .sched_priority = VAR_0-1 };
 struct workqueue_struct *VAR_6 = VAR_3->wq;
 const char *VAR_7 = FUNC_2(VAR_6) ? "%s" : "%s/%d";
 struct task_struct *VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_6->name, VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 if (VAR_3->wq->rt)
  FUNC_4(VAR_8, VAR_1, &VAR_5);
 VAR_3->thread = VAR_8;

 FUNC_5(VAR_3->thread, VAR_4);

 return 0;
}
