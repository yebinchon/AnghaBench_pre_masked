
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int pm_stats; int pm_pvchunk; TYPE_1__* pm_asid; int pm_active; int * pm_segtab; } ;
struct TYPE_4__ {scalar_t__ gen; int asid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

int
FUNC_7(pmap_t VAR_4)
{
 vm_offset_t VAR_5;
 vm_page_t VAR_6;
 int VAR_7, VAR_8;




 VAR_8 = VAR_3;
 while ((VAR_6 = FUNC_5(VAR_1, VAR_8)) ==
     ((void*)0))
  FUNC_6(VAR_8);

 VAR_5 = FUNC_1(FUNC_3(VAR_6));
 VAR_4->pm_segtab = (pd_entry_t *)VAR_5;
 FUNC_0(&VAR_4->pm_active);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_4->pm_asid[VAR_7].asid = VAR_2;
  VAR_4->pm_asid[VAR_7].gen = 0;
 }
 FUNC_2(&VAR_4->pm_pvchunk);
 FUNC_4(&VAR_4->pm_stats, sizeof VAR_4->pm_stats);

 return (1);
}
