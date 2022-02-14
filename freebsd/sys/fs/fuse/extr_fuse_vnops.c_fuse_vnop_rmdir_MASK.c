
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rmdir_args {int a_cnp; struct vnode* a_vp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,struct vnode*,int ,int ) ;
 scalar_t__ FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_rmdir_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_dvp;
 struct vnode *VAR_5 = VAR_3->a_vp;

 int VAR_6;

 if (FUNC_2(VAR_5)) {
  return VAR_1;
 }
 if (FUNC_0(VAR_5) == FUNC_0(VAR_4)) {
  return VAR_0;
 }
 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3->a_cnp, VAR_2);

 return VAR_6;
}
