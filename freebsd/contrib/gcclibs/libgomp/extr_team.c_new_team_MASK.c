
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_work_share {int dummy; } ;
struct gomp_team {int generation_mask; unsigned int nthreads; int master_release; int ** ordered_release; int barrier; struct gomp_work_share** work_shares; int num_live_gen; int oldest_live_gen; int work_share_lock; } ;


 int FUNC_0 (int *,unsigned int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static struct gomp_team *
FUNC_4 (unsigned VAR_0, struct gomp_work_share *VAR_1)
{
  struct gomp_team *VAR_2;
  size_t VAR_3;

  VAR_3 = sizeof (*VAR_2) + VAR_0 * sizeof (VAR_2->ordered_release[0]);
  VAR_2 = FUNC_1 (VAR_3);
  FUNC_2 (&VAR_2->work_share_lock);

  VAR_2->work_shares = FUNC_1 (4 * sizeof (struct gomp_work_share *));
  VAR_2->generation_mask = 3;
  VAR_2->oldest_live_gen = VAR_1 == ((void*)0);
  VAR_2->num_live_gen = VAR_1 != ((void*)0);
  VAR_2->work_shares[0] = VAR_1;

  VAR_2->nthreads = VAR_0;
  FUNC_0 (&VAR_2->barrier, VAR_0);

  FUNC_3 (&VAR_2->master_release, 0);
  VAR_2->ordered_release[0] = &VAR_2->master_release;

  return VAR_2;
}
