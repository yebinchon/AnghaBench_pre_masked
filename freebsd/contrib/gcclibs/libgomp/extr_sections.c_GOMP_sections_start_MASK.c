
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* work_share; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ FUNC_0 (long*,long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 struct gomp_thread* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

unsigned
FUNC_5 (unsigned VAR_0)
{
  struct gomp_thread *VAR_1 = FUNC_3 ();
  long VAR_2, VAR_3, VAR_4;

  if (FUNC_4 (0))
    FUNC_2 (VAR_1->ts.work_share, VAR_0);

  if (FUNC_0 (&VAR_2, &VAR_3))
    VAR_4 = VAR_2;
  else
    VAR_4 = 0;

  FUNC_1 (&VAR_1->ts.work_share->lock);

  return VAR_4;
}
