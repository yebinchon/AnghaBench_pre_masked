
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmclog_pmcallocatedyn {int dummy; } ;
struct pmclog_pmcallocate {int dummy; } ;
struct TYPE_3__ {int pm_ev_name; } ;
struct pmc_soft {TYPE_1__ ps_ev; } ;
struct pmc_owner {int dummy; } ;
struct TYPE_4__ {int pm_reloadcount; } ;
struct pmc {TYPE_2__ pm_sc; int pm_flags; int pm_event; int pm_id; struct pmc_owner* pm_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc*) ;
 int FUNC_1 (struct pmc_owner*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pmc_owner*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct pmc*) ;
 struct pmc_soft* FUNC_8 (int ) ;
 int FUNC_9 (struct pmc_soft*) ;

void
FUNC_10(struct pmc *VAR_6)
{
 struct pmc_owner *VAR_7;
 struct pmc_soft *VAR_8;

 VAR_7 = VAR_6->pm_owner;

 FUNC_0(VAR_1,VAR_0,1, "pm=%p", VAR_6);

 if (FUNC_7(VAR_6) == VAR_4) {
  FUNC_6(VAR_7, VAR_3,
      sizeof(struct pmclog_pmcallocatedyn));
  FUNC_2(VAR_6->pm_id);
  FUNC_2(VAR_6->pm_event);
  FUNC_2(VAR_6->pm_flags);
  FUNC_2(0);
  FUNC_3(VAR_6->pm_sc.pm_reloadcount);
  VAR_8 = FUNC_8(VAR_6->pm_event);
  if (VAR_8 != ((void*)0))
   FUNC_5(VAR_8->ps_ev.pm_ev_name,VAR_5);
  else
   FUNC_4(VAR_5);
  FUNC_9(VAR_8);
  FUNC_1(VAR_7);
 } else {
  FUNC_6(VAR_7, VAR_2,
      sizeof(struct pmclog_pmcallocate));
  FUNC_2(VAR_6->pm_id);
  FUNC_2(VAR_6->pm_event);
  FUNC_2(VAR_6->pm_flags);
  FUNC_2(0);
  FUNC_3(VAR_6->pm_sc.pm_reloadcount);
  FUNC_1(VAR_7);
 }
}
