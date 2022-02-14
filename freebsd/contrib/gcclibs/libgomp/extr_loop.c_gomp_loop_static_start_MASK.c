
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* work_share; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (long*,long*) ;
 int FUNC_1 (TYPE_2__*,long,long,long,int ,long) ;
 int FUNC_2 (int *) ;
 struct gomp_thread* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5 (long VAR_1, long VAR_2, long VAR_3, long VAR_4,
   long *VAR_5, long *VAR_6)
{
  struct gomp_thread *VAR_7 = FUNC_3 ();

  if (FUNC_4 (0))
    FUNC_1 (VAR_7->ts.work_share, VAR_1, VAR_2, VAR_3,
      VAR_0, VAR_4);
  FUNC_2 (&VAR_7->ts.work_share->lock);

  return !FUNC_0 (VAR_5, VAR_6);
}
