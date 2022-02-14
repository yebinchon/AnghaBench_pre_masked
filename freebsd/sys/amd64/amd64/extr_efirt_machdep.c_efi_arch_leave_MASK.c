
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__* pmap_t ;
struct TYPE_14__ {TYPE_1__* p_vmspace; } ;
struct TYPE_11__ {int md_efirt_dis_pf; } ;
struct TYPE_13__ {TYPE_3__ td_md; } ;
struct TYPE_12__ {int pm_cr3; TYPE_2__* pm_pcids; } ;
struct TYPE_10__ {int pm_pcid; } ;
struct TYPE_9__ {TYPE_4__ vm_pmap; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;

void
FUNC_5(void)
{
 pmap_t VAR_5;

 VAR_5 = &VAR_1->p_vmspace->vm_pmap;
 if (VAR_4 && !VAR_3)
  FUNC_1(VAR_5, VAR_5);
 FUNC_3(VAR_5->pm_cr3 | (VAR_4 ?
     VAR_5->pm_pcids[FUNC_0(VAR_0)].pm_pcid : 0));
 if (!VAR_4)
  FUNC_2();
 FUNC_4(VAR_2->td_md.md_efirt_dis_pf);
}
