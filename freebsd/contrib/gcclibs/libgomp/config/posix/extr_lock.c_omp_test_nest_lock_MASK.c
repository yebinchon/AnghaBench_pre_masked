
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int lock; } ;
typedef TYPE_1__ omp_nest_lock_t ;


 scalar_t__ FUNC_0 (int *) ;

int
FUNC_1 (omp_nest_lock_t *VAR_0)
{
  if (FUNC_0 (&VAR_0->lock) == 0)
    return ++VAR_0->count;
  return 0;
}
