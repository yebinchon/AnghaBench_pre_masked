
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_mdep {int pmd_switch_out; int pmd_switch_in; int * pmd_pcpu_fini; int * pmd_pcpu_init; int pmd_cputype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmc_mdep* FUNC_0 (int ) ;

__attribute__((used)) static struct pmc_mdep *
FUNC_1(void)
{
 struct pmc_mdep *VAR_3;

 VAR_3 = FUNC_0(0);

 VAR_3->pmd_cputype = VAR_0;

 VAR_3->pmd_pcpu_init = ((void*)0);
 VAR_3->pmd_pcpu_fini = ((void*)0);
 VAR_3->pmd_switch_in = VAR_1;
 VAR_3->pmd_switch_out = VAR_2;

 return (VAR_3);
}
