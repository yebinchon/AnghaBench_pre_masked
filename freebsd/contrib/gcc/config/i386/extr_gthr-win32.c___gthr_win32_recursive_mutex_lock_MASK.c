
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; scalar_t__ owner; int counter; int sema; } ;
typedef TYPE_1__ __gthread_recursive_mutex_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;

int
FUNC_4 (__gthread_recursive_mutex_t *VAR_2)
{
  DWORD VAR_3 = FUNC_0();
  if (FUNC_2 (&VAR_2->counter) == 0)
    {
      VAR_2->depth = 1;
      VAR_2->owner = VAR_3;
    }
  else if (VAR_2->owner == VAR_3)
    {
      FUNC_1 (&VAR_2->counter);
      ++(VAR_2->depth);
    }
  else if (FUNC_3 (VAR_2->sema, VAR_0) == VAR_1)
    {
      VAR_2->depth = 1;
      VAR_2->owner = VAR_3;
    }
  else
    {


      FUNC_1 (&VAR_2->counter);
      return 1;
    }
  return 0;
}
