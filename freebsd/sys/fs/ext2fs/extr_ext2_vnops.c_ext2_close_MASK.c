
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_close_args {struct vnode* a_vp; } ;
struct vnode {int v_usecount; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_close_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;

 FUNC_0(VAR_1);
 if (VAR_1->v_usecount > 1)
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 return (0);
}
