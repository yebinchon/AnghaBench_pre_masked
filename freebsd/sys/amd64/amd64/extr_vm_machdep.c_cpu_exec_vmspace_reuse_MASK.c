
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
struct proc {int dummy; } ;
struct TYPE_4__ {int md_flags; } ;
struct TYPE_6__ {TYPE_1__ p_md; } ;
struct TYPE_5__ {scalar_t__ pm_ucr3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;

bool
FUNC_1(struct proc *VAR_3, vm_map_t VAR_4)
{

 return (((VAR_2->p_md.md_flags & VAR_1) != 0) ==
     (FUNC_0(VAR_4)->pm_ucr3 != VAR_0));
}
