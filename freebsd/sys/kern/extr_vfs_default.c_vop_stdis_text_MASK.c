
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_is_text_args {TYPE_1__* a_vp; } ;
struct TYPE_2__ {scalar_t__ v_writecount; } ;



__attribute__((used)) static int
FUNC_0(struct vop_is_text_args *VAR_0)
{

 return (VAR_0->a_vp->v_writecount < 0);
}
