
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_task {int dummy; } ;
struct task_desc {unsigned long pid; size_t nr; int comm; } ;
struct perf_sched {size_t nr_tasks; struct task_desc** tasks; struct task_desc** pid_to_task; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct perf_sched*,struct task_desc*,int ,int ) ;
 int FUNC_2 (char*,int,unsigned long,char const*) ;
 struct task_desc** FUNC_3 (struct task_desc**,int) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 struct task_desc* FUNC_5 (int) ;

__attribute__((used)) static struct task_desc *FUNC_6(struct perf_sched *VAR_2,
          unsigned long VAR_3, const char *VAR_4)
{
 struct task_desc *VAR_5;

 FUNC_0(VAR_3 >= VAR_0);

 VAR_5 = VAR_2->pid_to_task[VAR_3];

 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5));
 VAR_5->pid = VAR_3;
 VAR_5->nr = VAR_2->nr_tasks;
 FUNC_4(VAR_5->comm, VAR_4);




 FUNC_1(VAR_2, VAR_5, 0, 0);

 VAR_2->pid_to_task[VAR_3] = VAR_5;
 VAR_2->nr_tasks++;
 VAR_2->tasks = FUNC_3(VAR_2->tasks, VAR_2->nr_tasks * sizeof(struct task_task *));
 FUNC_0(!VAR_2->tasks);
 VAR_2->tasks[VAR_5->nr] = VAR_5;

 if (VAR_1)
  FUNC_2("registered task #%ld, PID %ld (%s)\n", VAR_2->nr_tasks, VAR_3, VAR_4);

 return VAR_5;
}
