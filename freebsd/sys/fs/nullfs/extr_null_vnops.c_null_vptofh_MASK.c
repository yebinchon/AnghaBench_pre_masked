
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptofh_args {int a_fhp; int a_vp; } ;
struct vnode {int dummy; } ;


 struct vnode* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vop_vptofh_args *VAR_0)
{
 struct vnode *VAR_1;

 VAR_1 = FUNC_0(VAR_0->a_vp);
 return FUNC_1(VAR_1, VAR_0->a_fhp);
}
