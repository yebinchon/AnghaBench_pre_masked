
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gomp_work_share {int dummy; } ;
struct TYPE_2__ {unsigned int work_share_generation; struct gomp_work_share* work_share; struct gomp_team* team; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct gomp_team {unsigned int generation_mask; int barrier; scalar_t__ num_live_gen; int oldest_live_gen; int ** work_shares; } ;


 int FUNC_0 (struct gomp_work_share*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct gomp_thread* FUNC_3 () ;

void
FUNC_4 (void)
{
  struct gomp_thread *VAR_0 = FUNC_3 ();
  struct gomp_team *VAR_1 = VAR_0->ts.team;
  struct gomp_work_share *VAR_2 = VAR_0->ts.work_share;
  bool VAR_3;

  VAR_0->ts.work_share = ((void*)0);


  if (VAR_1 == ((void*)0))
    {
      FUNC_0 (VAR_2);
      return;
    }

  VAR_3 = FUNC_2 (&VAR_1->barrier);

  if (VAR_3)
    {
      unsigned VAR_4;

      VAR_4 = VAR_0->ts.work_share_generation & VAR_1->generation_mask;
      VAR_1->work_shares[VAR_4] = ((void*)0);
      VAR_1->oldest_live_gen++;
      VAR_1->num_live_gen = 0;

      FUNC_0 (VAR_2);
    }

  FUNC_1 (&VAR_1->barrier, VAR_3);
}
