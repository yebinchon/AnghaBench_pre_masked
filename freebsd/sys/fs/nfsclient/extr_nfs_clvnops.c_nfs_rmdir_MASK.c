
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vop_rmdir_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
struct componentname {int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int VAR_2 ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int FUNC_8 (struct vnode*,int ,int ,int ,int ,struct nfsvattr*,int*,int *) ;

__attribute__((used)) static int
FUNC_9(struct vop_rmdir_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct vnode *VAR_5 = VAR_3->a_dvp;
 struct componentname *VAR_6 = VAR_3->a_cnp;
 struct nfsnode *VAR_7;
 struct nfsvattr VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 == VAR_4)
  return (VAR_0);
 VAR_9 = FUNC_8(VAR_5, VAR_6->cn_nameptr, VAR_6->cn_namelen,
     VAR_6->cn_cred, VAR_6->cn_thread, &VAR_8, &VAR_10, ((void*)0));
 VAR_7 = FUNC_4(VAR_5);
 FUNC_1(VAR_7);
 VAR_7->n_flag |= VAR_2;
 if (VAR_10 != 0) {
  FUNC_2(VAR_7);
  (void) FUNC_6(&VAR_5, &VAR_8, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_7->n_attrstamp = 0;
  FUNC_2(VAR_7);
  FUNC_0(VAR_5);
 }

 FUNC_5(VAR_5);
 FUNC_5(VAR_4);
 if (VAR_9 && FUNC_3(VAR_5))
  VAR_9 = FUNC_7(VAR_6->cn_thread, VAR_9, (uid_t)0,
      (gid_t)0);



 if (VAR_9 == VAR_1)
  VAR_9 = 0;
 return (VAR_9);
}
