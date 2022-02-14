
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* work_share; } ;
struct gomp_thread {TYPE_2__ ts; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (long*,long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct gomp_thread* FUNC_5 () ;

__attribute__((used)) static bool
FUNC_6 (long *VAR_0, long *VAR_1)
{
  struct gomp_thread *VAR_2 = FUNC_5 ();
  int VAR_3;

  FUNC_4 ();
  FUNC_1 (&VAR_2->ts.work_share->lock);
  VAR_3 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_3 >= 0)
    FUNC_3 ();
  FUNC_2 (&VAR_2->ts.work_share->lock);

  return VAR_3 == 0;
}
