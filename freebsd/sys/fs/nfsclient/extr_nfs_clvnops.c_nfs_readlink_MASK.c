
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_readlink_args {int a_cred; int a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vnode*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_readlink_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;

 if (VAR_3->v_type != VAR_1)
  return (VAR_0);
 return (FUNC_0(VAR_3, VAR_2->a_uio, 0, VAR_2->a_cred));
}
