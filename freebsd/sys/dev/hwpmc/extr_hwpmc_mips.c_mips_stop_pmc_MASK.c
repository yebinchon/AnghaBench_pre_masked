
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_hw {struct pmc* phw_pmc; } ;
struct pmc {int dummy; } ;
struct TYPE_2__ {struct pmc_hw* pc_mipspmcs; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
        struct pmc *VAR_3;
        struct pmc_hw *VAR_4;

 VAR_4 = &VAR_0[VAR_1]->pc_mipspmcs[VAR_2];
 VAR_3 = VAR_4->phw_pmc;







 switch (VAR_2) {
 case 0:
  FUNC_0(0);
  break;
 case 1:
  FUNC_1(0);
  break;
 default:
  break;
 }
 return 0;
}
