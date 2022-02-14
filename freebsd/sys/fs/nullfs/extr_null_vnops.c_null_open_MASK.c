
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_gen; struct vnode* a_vp; } ;
struct vnode {int v_object; } ;


 struct vnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_open_args *VAR_0)
{
 int VAR_1;
 struct vnode *VAR_2, *VAR_3;

 VAR_2 = VAR_0->a_vp;
 VAR_3 = FUNC_0(VAR_2);
 VAR_1 = FUNC_1(&VAR_0->a_gen);
 if (VAR_1 == 0)
  VAR_2->v_object = VAR_3->v_object;
 return (VAR_1);
}
