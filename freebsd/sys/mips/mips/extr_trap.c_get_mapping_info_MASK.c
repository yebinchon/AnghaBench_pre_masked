
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct proc {TYPE_1__* p_vmspace; } ;
typedef int pt_entry_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_4__ {scalar_t__* pm_segtab; } ;
struct TYPE_3__ {TYPE_2__ vm_pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc* VAR_2 ;
 int * FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_3, pd_entry_t **VAR_4, pt_entry_t **VAR_5)
{
 pt_entry_t *VAR_6;
 pd_entry_t *VAR_7;
 struct proc *VAR_8 = VAR_2;

 VAR_7 = (&(VAR_8->p_vmspace->vm_pmap.pm_segtab[(VAR_3 >> VAR_1) & (VAR_0 - 1)]));
 if (*VAR_7)
  VAR_6 = FUNC_0(&VAR_8->p_vmspace->vm_pmap, VAR_3);
 else
  VAR_6 = (pt_entry_t *)0;

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_6;
}
