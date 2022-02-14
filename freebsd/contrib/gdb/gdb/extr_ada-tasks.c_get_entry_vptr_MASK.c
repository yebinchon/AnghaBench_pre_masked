
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_entry {int task_num; struct task_entry* next_task; } ;


 struct task_entry* VAR_0 ;

__attribute__((used)) static struct task_entry *
FUNC_0 (int VAR_1)
{
  struct task_entry *VAR_2;

  VAR_2 = VAR_0;
  while (VAR_2)
    {
      if (VAR_2->task_num == VAR_1)
 return VAR_2;
      VAR_2 = VAR_2->next_task;
    }
  return ((void*)0);
}
