
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int total; int mutex1; } ;
typedef TYPE_1__ gomp_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2 (gomp_barrier_t *VAR_0, unsigned VAR_1)
{
  FUNC_0 (&VAR_0->mutex1);
  VAR_0->total = VAR_1;
  FUNC_1 (&VAR_0->mutex1);
}
