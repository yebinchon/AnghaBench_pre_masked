
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_vptocnp_args {int a_buflen; int a_buf; struct ucred* a_cred; struct vnode** a_vpp; struct vnode* a_vp; } ;
struct vnode {struct mount* v_mount; } ;
struct ucred {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct mount*,struct vnode*,struct vnode**) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int) ;
 int FUNC_9 (struct vnode**,struct ucred*,int ,int ) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct vop_vptocnp_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct vnode **VAR_5 = VAR_3->a_vpp;
 struct vnode *VAR_6, *VAR_7;
 struct ucred *VAR_8 = VAR_3->a_cred;
 struct mount *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 FUNC_7(VAR_6);
 VAR_9 = VAR_4->v_mount;
 FUNC_5(VAR_9);
 FUNC_2(VAR_4, 0);
 VAR_7 = VAR_6;
 FUNC_10(VAR_6);
 VAR_10 = FUNC_9(&VAR_7, VAR_8, VAR_3->a_buf, VAR_3->a_buflen);
 FUNC_4(VAR_6);
 if (VAR_10 != 0) {
  FUNC_8(VAR_4, VAR_11 | VAR_1);
  FUNC_6(VAR_9);
  return (VAR_0);
 }

 VAR_10 = FUNC_8(VAR_7, VAR_2);
 if (VAR_10 != 0) {
  FUNC_11(VAR_7);
  FUNC_8(VAR_4, VAR_11 | VAR_1);
  FUNC_6(VAR_9);
  return (VAR_0);
 }
 VAR_10 = FUNC_3(VAR_9, VAR_7, VAR_5);
 if (VAR_10 == 0) {



  FUNC_2(*VAR_5, 0);
 }
 FUNC_8(VAR_4, VAR_11 | VAR_1);
 FUNC_6(VAR_9);
 return (VAR_10);
}
