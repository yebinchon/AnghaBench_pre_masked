
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_7__ {scalar_t__ rt_root; } ;
struct TYPE_9__ {int pm_cookie; int pm_stats; TYPE_1__ pm_root; int * pm_l0; int pm_l0_paddr; } ;
struct TYPE_8__ {int flags; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;

int
FUNC_7(pmap_t VAR_6)
{
 vm_page_t VAR_7;




 while ((VAR_7 = FUNC_5(((void*)0), 0, VAR_3 |
     VAR_2 | VAR_4 | VAR_5)) == ((void*)0))
  FUNC_6(((void*)0));

 VAR_6->pm_l0_paddr = FUNC_2(VAR_7);
 VAR_6->pm_l0 = (pd_entry_t *)FUNC_1(VAR_6->pm_l0_paddr);

 if ((VAR_7->flags & VAR_1) == 0)
  FUNC_4(VAR_6->pm_l0);

 VAR_6->pm_root.rt_root = 0;
 FUNC_3(&VAR_6->pm_stats, sizeof(VAR_6->pm_stats));
 VAR_6->pm_cookie = FUNC_0(-1, VAR_0);

 return (1);
}
