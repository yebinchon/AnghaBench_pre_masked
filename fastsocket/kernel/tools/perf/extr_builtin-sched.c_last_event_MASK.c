
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_desc {int nr_events; struct sched_atom** atoms; } ;
struct sched_atom {int dummy; } ;



__attribute__((used)) static struct sched_atom *FUNC_0(struct task_desc *VAR_0)
{
 if (!VAR_0->nr_events)
  return ((void*)0);

 return VAR_0->atoms[VAR_0->nr_events - 1];
}
