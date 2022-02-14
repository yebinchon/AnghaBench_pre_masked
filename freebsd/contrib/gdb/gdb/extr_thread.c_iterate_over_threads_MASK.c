
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct thread_info* next; } ;


 int FUNC_0 (struct thread_info*,void*) ;
 struct thread_info* VAR_0 ;

struct thread_info *
FUNC_1 (int (*VAR_1) (struct thread_info *, void *),
        void *VAR_2)
{
  struct thread_info *VAR_3;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    if ((*VAR_1) (VAR_3, VAR_2))
      return VAR_3;

  return ((void*)0);
}
