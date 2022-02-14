
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct thread_info* next; int ptid; } ;
typedef int ptid_t ;


 int FUNC_0 (struct thread_info*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct thread_info* VAR_0 ;

void
FUNC_2 (ptid_t VAR_1)
{
  struct thread_info *VAR_2, *VAR_3;

  VAR_3 = ((void*)0);

  for (VAR_2 = VAR_0; VAR_2; VAR_3 = VAR_2, VAR_2 = VAR_2->next)
    if (FUNC_1 (VAR_2->ptid, VAR_1))
      break;

  if (!VAR_2)
    return;

  if (VAR_3)
    VAR_3->next = VAR_2->next;
  else
    VAR_0 = VAR_2->next;

  FUNC_0 (VAR_2);
}
