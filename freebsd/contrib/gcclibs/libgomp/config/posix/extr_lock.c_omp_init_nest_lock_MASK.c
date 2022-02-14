
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_3__ {scalar_t__ count; int lock; } ;
typedef TYPE_1__ omp_nest_lock_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4 (omp_nest_lock_t *VAR_1)
{
  pthread_mutexattr_t VAR_2;

  FUNC_2 (&VAR_2);
  FUNC_3 (&VAR_2, VAR_0);
  FUNC_0 (&VAR_1->lock, &VAR_2);
  VAR_1->count = 0;
  FUNC_1 (&VAR_2);
}
