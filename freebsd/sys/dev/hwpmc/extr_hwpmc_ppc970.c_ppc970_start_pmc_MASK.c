
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
typedef int register_t ;
struct TYPE_6__ {struct pmc_hw* pc_ppcpmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__** VAR_3 ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5)
{
 struct pmc *VAR_6;
 struct pmc_hw *VAR_7;
 register_t VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_7 = &VAR_3[VAR_4]->pc_ppcpmcs[VAR_5];
 VAR_6 = VAR_7->phw_pmc;
 VAR_9 = VAR_6->pm_md.pm_powerpc.pm_powerpc_evsel & ~VAR_0;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_9);




 VAR_9 = ~VAR_6->pm_md.pm_powerpc.pm_powerpc_evsel & VAR_0;

 VAR_8 = FUNC_0(VAR_1);
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_9;
 FUNC_1(VAR_1, VAR_8);

 return 0;
}
