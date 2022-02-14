
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_entry {struct task_entry* next_task; } ;


 scalar_t__ VAR_0 ;
 struct task_entry* VAR_1 ;
 int FUNC_0 (struct task_entry*) ;

void
FUNC_1 (void)
{
  struct task_entry *VAR_2, *VAR_3;

  VAR_2 = VAR_1;
  while (VAR_2)
    {
      VAR_3 = VAR_2;
      VAR_2 = VAR_2->next_task;
      FUNC_0 (VAR_3);
    };
  VAR_1 = ((void*)0);
  VAR_0 = 0;
}
