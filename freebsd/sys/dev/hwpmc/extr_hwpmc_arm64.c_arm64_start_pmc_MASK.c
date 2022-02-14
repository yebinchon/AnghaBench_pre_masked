
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_4__ {int pm_arm64_evsel; } ;
struct TYPE_5__ {TYPE_1__ pm_arm64; } ;
struct pmc {TYPE_2__ pm_md; } ;
struct TYPE_6__ {struct pmc_hw* pc_arm64pmcs; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__** VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(int VAR_3, int VAR_4)
{
 struct pmc_hw *VAR_5;
 uint32_t VAR_6;
 struct pmc *VAR_7;

 VAR_5 = &VAR_0[VAR_3]->pc_arm64pmcs[VAR_4];
 VAR_7 = VAR_5->phw_pmc;
 VAR_6 = VAR_7->pm_md.pm_arm64.pm_arm64_evsel;




 FUNC_0(VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_6);

 FUNC_3();




 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 return 0;
}
