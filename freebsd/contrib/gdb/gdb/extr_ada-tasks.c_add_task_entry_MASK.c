
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_entry {int task_num; int known_tasks_index; scalar_t__ stack_per; struct task_entry* next_task; void* task_id; } ;


 int VAR_0 ;
 struct task_entry* VAR_1 ;
 struct task_entry* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_2, int VAR_3)
{
  struct task_entry *VAR_4 = ((void*)0);
  struct task_entry *VAR_5;

  VAR_0++;
  VAR_4 = FUNC_0 (sizeof (struct task_entry));
  VAR_4->task_num = VAR_0;
  VAR_4->task_id = VAR_2;
  VAR_4->known_tasks_index = VAR_3;
  VAR_4->next_task = ((void*)0);
  VAR_5 = VAR_1;
  if (VAR_5)
    {
      while (VAR_5->next_task)
 VAR_5 = VAR_5->next_task;
      VAR_5->next_task = VAR_4;
      VAR_5->stack_per = 0;
    }
  else
    VAR_1 = VAR_4;
  return VAR_4->task_num;
}
