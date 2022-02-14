
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_3__ {scalar_t__ count; int lock; scalar_t__ owner; } ;
typedef TYPE_1__ omp_nest_lock_t ;


 int FUNC_0 (int *) ;

void
FUNC_1 (omp_nest_lock_t *VAR_0)
{
  VAR_0->count--;

  if (VAR_0->count == 0)
    {
      VAR_0->owner = (pthread_t) 0;
      FUNC_0 (&VAR_0->lock);
    }
}
