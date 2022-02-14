
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_inactive_args {struct vnode* a_vp; } ;
struct vnode {int * v_object; } ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct vop_inactive_args *VAR_0)
{
 struct vnode *VAR_1;

 VAR_1 = VAR_0->a_vp;
 if (FUNC_0(VAR_1)) {
  VAR_1->v_object = ((void*)0);
  FUNC_1(VAR_1);
 }
 return (0);
}
