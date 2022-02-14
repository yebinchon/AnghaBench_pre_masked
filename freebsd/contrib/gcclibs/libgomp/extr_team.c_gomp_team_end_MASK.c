
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct gomp_team* team; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct gomp_team {TYPE_1__ prev_ts; int barrier; } ;


 int FUNC_0 (struct gomp_team*) ;
 int FUNC_1 (int *) ;
 struct gomp_thread* FUNC_2 () ;

void
FUNC_3 (void)
{
  struct gomp_thread *VAR_0 = FUNC_2 ();
  struct gomp_team *VAR_1 = VAR_0->ts.team;

  FUNC_1 (&VAR_1->barrier);

  VAR_0->ts = VAR_1->prev_ts;

  FUNC_0 (VAR_1);
}
