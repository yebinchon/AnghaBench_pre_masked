
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_pmcdetach {int dummy; } ;
struct pmc_owner {int dummy; } ;
struct pmc {int pm_id; struct pmc_owner* pm_owner; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pmc_owner*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pmc_owner*,int ,int) ;

void
FUNC_4(struct pmc *VAR_3, pid_t VAR_4)
{
 struct pmc_owner *VAR_5;

 FUNC_0(VAR_1,VAR_0,1,"!pm=%p pid=%d", VAR_3, VAR_4);

 VAR_5 = VAR_3->pm_owner;

 FUNC_3(VAR_5, VAR_2, sizeof(struct pmclog_pmcdetach));
 FUNC_2(VAR_3->pm_id);
 FUNC_2(VAR_4);
 FUNC_1(VAR_5);
}
