
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int ptid; struct thread_info* next; } ;
typedef int ptid_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct thread_info* VAR_0 ;

int
FUNC_1 (ptid_t VAR_1)
{
  struct thread_info *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_0 (VAR_2->ptid, VAR_1))
      return 1;

  return 0;
}
