
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_unp_detach_args {TYPE_1__* a_vp; } ;
struct TYPE_2__ {int * v_unpcb; } ;



int
FUNC_0(struct vop_unp_detach_args *VAR_0)
{

 VAR_0->a_vp->v_unpcb = ((void*)0);
 return (0);
}
