
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_3__ {scalar_t__ owner; int count; int lock; } ;
typedef TYPE_1__ omp_nest_lock_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2 (omp_nest_lock_t *VAR_0)
{
  pthread_t VAR_1 = FUNC_1 ();

  if (VAR_0->owner != VAR_1)
    {
      if (FUNC_0 (&VAR_0->lock) != 0)
 return 0;
      VAR_0->owner = VAR_1;
    }

  return ++VAR_0->count;
}
