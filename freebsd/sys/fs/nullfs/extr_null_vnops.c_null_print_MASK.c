
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_2__ {int null_lowervp; } ;


 TYPE_1__* FUNC_0 (struct vnode*) ;
 int FUNC_1 (char*,struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_print_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;

 FUNC_1("\tvp=%p, lowervp=%p\n", VAR_1, FUNC_0(VAR_1)->null_lowervp);
 return (0);
}
