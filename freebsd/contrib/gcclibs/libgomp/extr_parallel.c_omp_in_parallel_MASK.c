
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct gomp_team* team; } ;
struct gomp_team {int nthreads; TYPE_2__ prev_ts; } ;
struct TYPE_4__ {struct gomp_team* team; } ;
struct TYPE_6__ {TYPE_1__ ts; } ;


 TYPE_3__* FUNC_0 () ;

int FUNC_1 (void)
{
  struct gomp_team *VAR_0 = FUNC_0 ()->ts.team;

  while (VAR_0)
    {
      if (VAR_0->nthreads > 1)
 return 1;
      VAR_0 = VAR_0->prev_ts.team;
    }

  return 0;
}
