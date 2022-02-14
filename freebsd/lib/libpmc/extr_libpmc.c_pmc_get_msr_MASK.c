
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pmc_op_getmsr {int pm_msr; int pm_pmcid; } ;
typedef int pmc_id_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_getmsr*) ;

int
FUNC_1(pmc_id_t VAR_1, uint32_t *VAR_2)
{
 struct pmc_op_getmsr VAR_3;

 VAR_3.pm_pmcid = VAR_1;
 if (FUNC_0(VAR_0, &VAR_3) < 0)
  return (-1);
 *VAR_2 = VAR_3.pm_msr;
 return (0);
}
