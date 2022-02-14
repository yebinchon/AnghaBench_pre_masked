
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcadmin {int pm_cpu; int pm_pmc; int pm_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pmc_op_pmcadmin*) ;
 int VAR_1 ;

int
FUNC_1(int VAR_2, int VAR_3)
{
 struct pmc_op_pmcadmin VAR_4;

 VAR_4.pm_cpu = VAR_2;
 VAR_4.pm_pmc = VAR_3;
 VAR_4.pm_state = VAR_1;
 return (FUNC_0(VAR_0, &VAR_4));
}
