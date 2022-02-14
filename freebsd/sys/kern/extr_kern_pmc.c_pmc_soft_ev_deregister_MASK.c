
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_ev_code; } ;
struct pmc_soft {TYPE_1__ ps_ev; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;

void
FUNC_3(struct pmc_soft *VAR_5)
{

 FUNC_0(VAR_5 != ((void*)0), ("pmc_soft_deregister: called with NULL"));

 FUNC_1(&VAR_4);

 if (VAR_5->ps_ev.pm_ev_code != 0 &&
     (VAR_5->ps_ev.pm_ev_code - VAR_0) < VAR_2) {
  FUNC_0((int)VAR_5->ps_ev.pm_ev_code >= VAR_0 &&
      (int)VAR_5->ps_ev.pm_ev_code <= VAR_1,
      ("pmc_soft_deregister: invalid event value"));
  VAR_3[VAR_5->ps_ev.pm_ev_code - VAR_0] = ((void*)0);
 }

 FUNC_2(&VAR_4);
}
