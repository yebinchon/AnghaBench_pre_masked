
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int num; struct thread_info* next; } ;


 struct thread_info* VAR_0 ;

__attribute__((used)) static struct thread_info *
FUNC_0 (int VAR_1)
{
  struct thread_info *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->num == VAR_1)
      return VAR_2;

  return ((void*)0);
}
