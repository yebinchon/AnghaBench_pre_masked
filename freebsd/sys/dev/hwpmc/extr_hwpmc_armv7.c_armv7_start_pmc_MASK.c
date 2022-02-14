
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_4__ {scalar_t__ pm_armv7_evsel; } ;
struct TYPE_5__ {TYPE_1__ pm_armv7; } ;
struct pmc {scalar_t__ pm_overflowcnt; TYPE_2__ pm_md; } ;
struct TYPE_6__ {struct pmc_hw* pc_armv7pmcs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_3__** VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, int VAR_3)
{
 struct pmc_hw *VAR_4;
 uint32_t VAR_5;
 struct pmc *VAR_6;

 VAR_4 = &VAR_1[VAR_2]->pc_armv7pmcs[VAR_3];
 VAR_6 = VAR_4->phw_pmc;
 VAR_5 = VAR_6->pm_md.pm_armv7.pm_armv7_evsel;

 VAR_6->pm_overflowcnt = 0;




 if (VAR_5 != VAR_0) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_5);
 } else
  VAR_3 = 31;




 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 return 0;
}
