
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_mdep {int pmd_nclass; TYPE_1__* pmd_classdep; } ;
struct TYPE_2__ {int pcd_caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 struct pmc_mdep* FUNC_1 () ;
 struct pmc_mdep* FUNC_2 () ;

struct pmc_mdep *
FUNC_3()
{
 int VAR_5;
 struct pmc_mdep *VAR_6;


 if (VAR_4 == VAR_0)
  VAR_6 = FUNC_1();
 else if (VAR_4 == VAR_1)
  VAR_6 = FUNC_2();
 else
  return (((void*)0));


 if (VAR_6 != ((void*)0) && !FUNC_0())
  for (VAR_5 = 0; VAR_5 < VAR_6->pmd_nclass; VAR_5++) {
   if (VAR_5 == VAR_3)
    continue;
   VAR_6->pmd_classdep[VAR_5].pcd_caps &= ~VAR_2;
  }

 return (VAR_6);
}
