
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcrw {int pm_value; int pm_flags; int pm_pmcid; } ;
typedef int pmc_value_t ;
typedef int pmc_id_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pmc_op_pmcrw*) ;
 int VAR_1 ;

int
FUNC_1(pmc_id_t VAR_2, pmc_value_t VAR_3)
{
 struct pmc_op_pmcrw VAR_4;

 VAR_4.pm_pmcid = VAR_2;
 VAR_4.pm_flags = VAR_1;
 VAR_4.pm_value = VAR_3;
 return (FUNC_0(VAR_0, &VAR_4));
}
