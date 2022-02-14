
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcrw {int pm_flags; int pm_value; int pm_pmcid; } ;
typedef int pmc_value_t ;
typedef int pmc_id_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_pmcrw*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(pmc_id_t VAR_3, pmc_value_t VAR_4, pmc_value_t *VAR_5)
{
 struct pmc_op_pmcrw VAR_6;

 VAR_6.pm_pmcid = VAR_3;
 VAR_6.pm_flags = VAR_1 | VAR_2;
 VAR_6.pm_value = VAR_4;

 if (FUNC_0(VAR_0, &VAR_6) < 0)
  return (-1);

 *VAR_5 = VAR_6.pm_value;
 return (0);
}
