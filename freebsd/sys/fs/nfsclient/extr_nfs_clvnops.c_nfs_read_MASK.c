
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_read_args {int a_cred; int a_ioflag; int a_uio; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct vnode*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_read_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;

 switch (VAR_3->v_type) {
 case 128:
  return (FUNC_0(VAR_3, VAR_2->a_uio, VAR_2->a_ioflag, VAR_2->a_cred));
 case 129:
  return (VAR_0);
 default:
  return (VAR_1);
 }
}
