
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gomp_work_share {unsigned int ordered_cur; unsigned int ordered_num_used; size_t* ordered_team_ids; } ;
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
  unsigned VAR_3;


  if (VAR_1 == ((void*)0) || VAR_1->nthreads == 1)
    return;

  VAR_3 = VAR_2->ordered_cur + VAR_2->ordered_num_used;
  if (VAR_3 >= VAR_1->nthreads)
    VAR_3 -= VAR_1->nthreads;
  VAR_2->ordered_team_ids[VAR_3] = VAR_0->ts.team_id;




  if (VAR_2->ordered_num_used++ == 0)
    FUNC_0 (VAR_1->ordered_release[VAR_0->ts.team_id]);
}
