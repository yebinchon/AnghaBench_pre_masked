
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* work_share; struct gomp_team* team; } ;
struct gomp_thread {TYPE_2__ ts; } ;
struct gomp_team {int barrier; } ;
struct TYPE_3__ {void* copyprivate; } ;


 int FUNC_0 (int *) ;
 struct gomp_thread* FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3 (void *VAR_0)
{
  struct gomp_thread *VAR_1 = FUNC_1 ();
  struct gomp_team *VAR_2 = VAR_1->ts.team;

  if (VAR_2 != ((void*)0))
    {
      VAR_1->ts.work_share->copyprivate = VAR_0;
      FUNC_0 (&VAR_2->barrier);
    }

  FUNC_2 ();
}
