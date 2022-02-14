
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_flags; } ;
struct proc {int p_vmspace; TYPE_1__ p_md; } ;
struct TYPE_4__ {scalar_t__ pm_ucr3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct proc *VAR_7, int VAR_8, int *VAR_9)
{

 if (VAR_8 == VAR_1) {
  if (VAR_6 && *VAR_9 == VAR_3)
   VAR_7->p_md.md_flags |= VAR_5;
  if (*VAR_9 == VAR_2)
   VAR_7->p_md.md_flags &= ~VAR_5;
 } else {
  *VAR_9 = (VAR_7->p_md.md_flags & VAR_5) != 0 ?
      VAR_3:
      VAR_2;
  if (FUNC_0(VAR_7->p_vmspace)->pm_ucr3 != VAR_0)
   *VAR_9 |= VAR_4;
 }
}
