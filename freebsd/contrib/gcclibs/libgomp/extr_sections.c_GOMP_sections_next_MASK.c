
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* work_share; } ;
struct gomp_thread {TYPE_2__ ts; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ FUNC_0 (long*,long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gomp_thread* FUNC_3 () ;

unsigned
FUNC_4 (void)
{
  struct gomp_thread *VAR_0 = FUNC_3 ();
  long VAR_1, VAR_2, VAR_3;

  FUNC_1 (&VAR_0->ts.work_share->lock);
  if (FUNC_0 (&VAR_1, &VAR_2))
    VAR_3 = VAR_1;
  else
    VAR_3 = 0;
  FUNC_2 (&VAR_0->ts.work_share->lock);

  return VAR_3;
}
