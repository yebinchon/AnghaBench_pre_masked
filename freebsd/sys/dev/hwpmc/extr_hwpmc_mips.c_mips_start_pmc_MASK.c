
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_3__ {int pm_mips_evsel; } ;
struct pmc {TYPE_1__ pm_md; } ;
struct TYPE_4__ {struct pmc_hw* pc_mipspmcs; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
 uint32_t VAR_3;
        struct pmc *VAR_4;
        struct pmc_hw *VAR_5;

 VAR_5 = &VAR_0[VAR_1]->pc_mipspmcs[VAR_2];
 VAR_4 = VAR_5->phw_pmc;
 VAR_3 = VAR_4->pm_md.pm_mips_evsel;


 switch (VAR_2) {
 case 0:
  FUNC_0(VAR_3);
  break;
 case 1:
  FUNC_1(VAR_3);
  break;
 default:
  break;
 }

 return 0;
}
