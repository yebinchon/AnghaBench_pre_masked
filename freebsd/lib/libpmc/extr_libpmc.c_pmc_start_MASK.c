
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_simple {int pm_pmcid; } ;
typedef int pmc_id_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pmc_op_simple*) ;

int
FUNC_1(pmc_id_t VAR_1)
{
 struct pmc_op_simple VAR_2;

 VAR_2.pm_pmcid = VAR_1;
 return (FUNC_0(VAR_0, &VAR_2));
}
