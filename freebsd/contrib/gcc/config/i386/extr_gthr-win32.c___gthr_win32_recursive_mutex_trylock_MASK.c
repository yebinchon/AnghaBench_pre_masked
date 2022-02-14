
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; scalar_t__ owner; int counter; } ;
typedef TYPE_1__ __gthread_recursive_mutex_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int) ;

int
FUNC_2 (__gthread_recursive_mutex_t *VAR_0)
{
  DWORD VAR_1 = FUNC_0();
  if (FUNC_1 (&VAR_0->counter, 0, -1) < 0)
    {
      VAR_0->depth = 1;
      VAR_0->owner = VAR_1;
    }
  else if (VAR_0->owner == VAR_1)
    ++(VAR_0->depth);
  else
    return 1;

  return 0;
}
