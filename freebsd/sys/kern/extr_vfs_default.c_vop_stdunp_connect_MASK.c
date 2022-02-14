
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_unp_connect_args {TYPE_1__* a_vp; int * a_unpcb; } ;
struct TYPE_2__ {int v_unpcb; } ;



int
FUNC_0(struct vop_unp_connect_args *VAR_0)
{

 *VAR_0->a_unpcb = VAR_0->a_vp->v_unpcb;
 return (0);
}
