
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_mdep {int pmd_nclass; } ;
struct pmc_classdep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmc_mdep* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct pmc_mdep*) ;

struct pmc_mdep *
FUNC_2(int VAR_3)
{
 struct pmc_mdep *VAR_4;
 int VAR_5;


 VAR_5 = 1 + VAR_3;
 VAR_4 = FUNC_0(sizeof(struct pmc_mdep) + VAR_5 *
     sizeof(struct pmc_classdep), VAR_0, VAR_1|VAR_2);
 VAR_4->pmd_nclass = VAR_5;


 FUNC_1(VAR_4);
 return VAR_4;
}
