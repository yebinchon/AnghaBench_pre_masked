
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_team {int master_release; int barrier; int work_share_lock; struct gomp_team* work_shares; } ;


 int FUNC_0 (struct gomp_team*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (struct gomp_team *VAR_0)
{
  FUNC_0 (VAR_0->work_shares);
  FUNC_2 (&VAR_0->work_share_lock);
  FUNC_1 (&VAR_0->barrier);
  FUNC_3 (&VAR_0->master_release);
  FUNC_0 (VAR_0);
}
