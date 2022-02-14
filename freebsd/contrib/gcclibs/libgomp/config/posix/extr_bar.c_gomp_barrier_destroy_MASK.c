
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sem2; int sem1; int mutex2; int mutex1; } ;
typedef TYPE_1__ gomp_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (gomp_barrier_t *VAR_0)
{

  FUNC_1 (&VAR_0->mutex1);
  FUNC_2 (&VAR_0->mutex1);

  FUNC_0 (&VAR_0->mutex1);

  FUNC_0 (&VAR_0->mutex2);

  FUNC_3 (&VAR_0->sem1);
  FUNC_3 (&VAR_0->sem2);
}
