
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gomp_work_share {size_t ordered_owner; } ;
struct TYPE_2__ {size_t team_id; struct gomp_work_share* work_share; struct gomp_team* team; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct gomp_team {int nthreads; int * ordered_release; } ;


 int FUNC_0 (int ) ;
 struct gomp_thread* FUNC_1 () ;

void
FUNC_2 (void)
{
  struct gomp_thread *VAR_0 = FUNC_1 ();
  struct gomp_team *VAR_1 = VAR_0->ts.team;
  struct gomp_work_share *VAR_2 = VAR_0->ts.work_share;



  if (VAR_1 == ((void*)0) || VAR_1->nthreads == 1)
    return;
  if (VAR_2->ordered_owner != VAR_0->ts.team_id)
    {
      FUNC_0 (VAR_1->ordered_release[VAR_0->ts.team_id]);
      VAR_2->ordered_owner = VAR_0->ts.team_id;
    }
}
