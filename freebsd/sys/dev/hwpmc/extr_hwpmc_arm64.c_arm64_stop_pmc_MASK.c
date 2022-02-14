
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_hw {struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
struct TYPE_2__ {struct pmc_hw* pc_arm64pmcs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
 struct pmc_hw *VAR_3;
 struct pmc *VAR_4;

 VAR_3 = &VAR_0[VAR_1]->pc_arm64pmcs[VAR_2];
 VAR_4 = VAR_3->phw_pmc;




 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
