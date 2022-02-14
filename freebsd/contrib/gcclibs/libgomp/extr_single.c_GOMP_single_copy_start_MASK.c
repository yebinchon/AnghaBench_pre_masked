
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* work_share; TYPE_1__* team; } ;
struct gomp_thread {TYPE_2__ ts; } ;
struct TYPE_6__ {void* copyprivate; int lock; } ;
struct TYPE_4__ {int barrier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct gomp_thread* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void *
FUNC_5 (void)
{
  struct gomp_thread *VAR_0 = FUNC_2 ();

  bool VAR_1;
  void *VAR_2;

  VAR_1 = FUNC_4 (0);
  FUNC_1 (&VAR_0->ts.work_share->lock);

  if (VAR_1)
    VAR_2 = ((void*)0);
  else
    {
      FUNC_0 (&VAR_0->ts.team->barrier);

      VAR_2 = VAR_0->ts.work_share->copyprivate;
      FUNC_3 ();
    }

  return VAR_2;
}
