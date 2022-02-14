
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmclog_procexit {int dummy; } ;
struct pmc_process {TYPE_2__* pp_pmcs; TYPE_1__* pp_proc; } ;
struct pmc_owner {int dummy; } ;
struct pmc {int pm_id; struct pmc_owner* pm_owner; } ;
struct TYPE_4__ {int pp_pmcval; } ;
struct TYPE_3__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc*,int ,int ) ;
 int FUNC_1 (struct pmc_owner*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pmc_owner*,int ,int) ;
 int FUNC_5 (struct pmc*) ;
 int VAR_2 ;

void
FUNC_6(struct pmc *VAR_3, struct pmc_process *VAR_4)
{
 int VAR_5;
 struct pmc_owner *VAR_6;

 VAR_5 = FUNC_5(VAR_3);
 FUNC_0(VAR_1,VAR_0,1,"pm=%p pid=%d v=%jx", VAR_3, VAR_4->pp_proc->p_pid,
     VAR_4->pp_pmcs[VAR_5].pp_pmcval);

 VAR_6 = VAR_3->pm_owner;

 FUNC_4(VAR_6, VAR_2, sizeof(struct pmclog_procexit));
 FUNC_2(VAR_3->pm_id);
 FUNC_2(VAR_4->pp_proc->p_pid);
 FUNC_3(VAR_4->pp_pmcs[VAR_5].pp_pmcval);
 FUNC_1(VAR_6);
}
