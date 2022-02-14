
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_4__ {int pm_powerpc_evsel; } ;
struct TYPE_5__ {TYPE_1__ pm_powerpc; } ;
struct pmc {TYPE_2__ pm_md; } ;
struct TYPE_6__ {struct pmc_hw* pc_ppcpmcs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pmc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__** VAR_5 ;

__attribute__((used)) static int
FUNC_3(int VAR_6, int VAR_7)
{
 uint32_t VAR_8;
        struct pmc *VAR_9;
        struct pmc_hw *VAR_10;

 VAR_10 = &VAR_5[VAR_6]->pc_ppcpmcs[VAR_7];
 VAR_9 = VAR_10->phw_pmc;
 VAR_8 = VAR_9->pm_md.pm_powerpc.pm_powerpc_evsel;

 if (FUNC_0(FUNC_1(VAR_9)))
  VAR_8 |= VAR_0;


 switch (VAR_7) {
 case 0:
  FUNC_2(VAR_1, VAR_8);
  break;
 case 1:
  FUNC_2(VAR_2, VAR_8);
  break;
 case 2:
  FUNC_2(VAR_3, VAR_8);
  break;
 case 3:
  FUNC_2(VAR_4, VAR_8);
  break;
 default:
  break;
 }

 return 0;
}
