
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pc_amdpmcs; } ;
struct TYPE_3__ {struct pmc* phw_pmc; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2, struct pmc **VAR_3)
{
 *VAR_3 = VAR_0[VAR_1]->pc_amdpmcs[VAR_2].phw_pmc;

 return 0;
}
