
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pc_corepmcs; } ;
struct TYPE_3__ {struct pmc* phw_pmc; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int
FUNC_0(int VAR_2, int VAR_3, struct pmc **VAR_4)
{
 *VAR_4 = VAR_1[VAR_2]->pc_corepmcs[VAR_3 + VAR_0].phw_pmc;

 return (0);
}
