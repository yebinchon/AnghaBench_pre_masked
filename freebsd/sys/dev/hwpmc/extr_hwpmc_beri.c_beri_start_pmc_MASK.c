
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pmc_hw {struct pmc* phw_pmc; } ;
struct TYPE_4__ {size_t pm_mips_evsel; } ;
struct pmc {TYPE_1__ pm_md; } ;
typedef int pmc_value_t ;
struct TYPE_6__ {int (* get_func ) () ;} ;
struct TYPE_5__ {int * start_values; struct pmc_hw* pc_beripmcs; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3)
{
 uint32_t VAR_4;
        struct pmc *VAR_5;
        struct pmc_hw *VAR_6;
 pmc_value_t VAR_7;

 VAR_6 = &VAR_1[VAR_2]->pc_beripmcs[VAR_3];
 VAR_5 = VAR_6->phw_pmc;
 VAR_4 = VAR_5->pm_md.pm_mips_evsel;

 VAR_7 = VAR_0[VAR_4].get_func();
 VAR_1[VAR_2]->start_values[VAR_4] = VAR_7;

 return (0);
}
