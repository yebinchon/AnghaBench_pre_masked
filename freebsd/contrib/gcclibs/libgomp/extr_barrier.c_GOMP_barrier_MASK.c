
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct gomp_team* team; } ;
struct gomp_thread {TYPE_1__ ts; } ;
struct gomp_team {int barrier; } ;


 int FUNC_0 (int *) ;
 struct gomp_thread* FUNC_1 () ;

void
FUNC_2 (void)
{
  struct gomp_thread *VAR_0 = FUNC_1 ();
  struct gomp_team *VAR_1 = VAR_0->ts.team;


  if (VAR_1 == ((void*)0))
    return;

  FUNC_0 (&VAR_1->barrier);
}
