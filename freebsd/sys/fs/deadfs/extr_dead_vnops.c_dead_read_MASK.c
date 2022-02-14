
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_read_args {TYPE_1__* a_vp; } ;
struct TYPE_2__ {int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct vop_read_args *VAR_2)
{




 if ((VAR_2->a_vp->v_vflag & VAR_1) == 0)
  return (VAR_0);
 return (0);
}
