
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gomp_team {int nthreads; } ;
struct TYPE_3__ {struct gomp_team* team; } ;
struct TYPE_4__ {TYPE_1__ ts; } ;


 TYPE_2__* FUNC_0 () ;

int
FUNC_1 (void)
{
  struct gomp_team *VAR_0 = FUNC_0 ()->ts.team;
  return VAR_0 ? VAR_0->nthreads : 1;
}
