
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_advlockpurge_args {struct vnode* a_vp; } ;
struct vnode {int v_lockf; } ;


 int FUNC_0 (struct vnode*,int *) ;

int
FUNC_1(struct vop_advlockpurge_args *VAR_0)
{
 struct vnode *VAR_1;

 VAR_1 = VAR_0->a_vp;
 FUNC_0(VAR_1, &VAR_1->v_lockf);
 return (0);
}
