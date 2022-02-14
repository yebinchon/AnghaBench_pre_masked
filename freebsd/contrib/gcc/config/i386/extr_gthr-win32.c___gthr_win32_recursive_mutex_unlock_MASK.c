
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ depth; int sema; int counter; scalar_t__ owner; } ;
typedef TYPE_1__ __gthread_recursive_mutex_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;

int
FUNC_2 (__gthread_recursive_mutex_t *VAR_0)
{
  --(VAR_0->depth);
  if (VAR_0->depth == 0)
    {
      VAR_0->owner = 0;

      if (FUNC_0 (&VAR_0->counter) >= 0)
 return FUNC_1 (VAR_0->sema, 1, ((void*)0)) ? 0 : 1;
    }

  return 0;
}
