
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_desc {int nr_events; int pid; int comm; int nr; } ;
struct perf_sched {unsigned long nr_tasks; struct task_desc** tasks; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_0)
{
 struct task_desc *VAR_1;
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_tasks; VAR_2++) {
  VAR_1 = VAR_0->tasks[VAR_2];
  FUNC_0("task %6ld (%20s:%10ld), nr_events: %ld\n",
   VAR_1->nr, VAR_1->comm, VAR_1->pid, VAR_1->nr_events);
 }
}
