
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_classdep {int pcd_class; } ;
typedef enum pmc_class { ____Placeholder_pmc_class } pmc_class ;
struct TYPE_2__ {int pmd_nclass; struct pmc_classdep* pmd_classdep; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct pmc_classdep *
FUNC_0(enum pmc_class VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->pmd_nclass; VAR_2++)
  if (VAR_0->pmd_classdep[VAR_2].pcd_class == VAR_1)
   return (&VAR_0->pmd_classdep[VAR_2]);
 return (((void*)0));
}
