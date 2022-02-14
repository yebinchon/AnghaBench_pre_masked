
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_entry {void* task_id; int task_num; struct task_entry* next_task; } ;


 struct task_entry* VAR_0 ;

int
FUNC_0 (void *VAR_1)
{
  struct task_entry *VAR_2;

  VAR_2 = VAR_0;
  while (VAR_2 != ((void*)0))
    {
      if (VAR_2->task_id == VAR_1)
 return VAR_2->task_num;
      VAR_2 = VAR_2->next_task;
    }
  return 0;
}
