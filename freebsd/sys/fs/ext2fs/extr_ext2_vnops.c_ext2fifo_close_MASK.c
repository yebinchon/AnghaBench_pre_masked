
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_close_args {struct vnode* a_vp; } ;
struct vnode {int v_usecount; } ;
struct TYPE_2__ {int (* vop_close ) (struct vop_close_args*) ;} ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct vop_close_args*) ;

__attribute__((used)) static int
FUNC_4(struct vop_close_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;

 FUNC_0(VAR_2);
 if (VAR_2->v_usecount > 1)
  FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 return (VAR_0.vop_close(VAR_1));
}
