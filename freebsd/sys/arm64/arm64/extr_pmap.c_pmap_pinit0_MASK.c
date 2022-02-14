
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_6__ {scalar_t__ rt_root; } ;
struct TYPE_7__ {int pm_cookie; TYPE_1__ pm_root; int pm_l0_paddr; int * pm_l0; int pm_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(pmap_t VAR_4)
{

 FUNC_3(VAR_4);
 FUNC_5(&VAR_4->pm_stats, sizeof(VAR_4->pm_stats));
 VAR_4->pm_l0_paddr = FUNC_4(VAR_3);
 VAR_4->pm_l0 = (pd_entry_t *)FUNC_2(VAR_4->pm_l0_paddr);
 VAR_4->pm_root.rt_root = 0;
 VAR_4->pm_cookie = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_2, VAR_4);
}
