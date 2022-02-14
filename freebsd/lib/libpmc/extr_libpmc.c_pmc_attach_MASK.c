
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcattach {int pm_pid; int pm_pmc; } ;
typedef int pmc_id_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pmc_op_pmcattach*) ;

int
FUNC_1(pmc_id_t VAR_1, pid_t VAR_2)
{
 struct pmc_op_pmcattach VAR_3;

 VAR_3.pm_pmc = VAR_1;
 VAR_3.pm_pid = VAR_2;

 return (FUNC_0(VAR_0, &VAR_3));
}
