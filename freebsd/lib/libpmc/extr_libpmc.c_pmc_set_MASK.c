
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcsetcount {int pm_count; int pm_pmcid; } ;
typedef int pmc_value_t ;
typedef int pmc_id_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_pmcsetcount*) ;

int
FUNC_1(pmc_id_t VAR_1, pmc_value_t VAR_2)
{
 struct pmc_op_pmcsetcount VAR_3;

 VAR_3.pm_pmcid = VAR_1;
 VAR_3.pm_count = VAR_2;

 if (FUNC_0(VAR_0, &VAR_3) < 0)
  return (-1);
 return (0);
}
