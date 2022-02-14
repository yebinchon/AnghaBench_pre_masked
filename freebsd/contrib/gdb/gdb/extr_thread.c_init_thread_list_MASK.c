
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct thread_info* next; } ;


 int FUNC_0 (struct thread_info*) ;
 scalar_t__ VAR_0 ;
 struct thread_info* VAR_1 ;

void
FUNC_1 (void)
{
  struct thread_info *VAR_2, *VAR_3;

  VAR_0 = 0;
  if (!VAR_1)
    return;

  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_3)
    {
      VAR_3 = VAR_2->next;
      FUNC_0 (VAR_2);
    }

  VAR_1 = ((void*)0);
}
