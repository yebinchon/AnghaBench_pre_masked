
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct vop_link_args {struct componentname* a_cnp; struct vnode* a_tdvp; struct vnode* a_vp; } ;
struct vnode {int v_mount; } ;
struct nfsvattr {int na_ctime; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;
typedef int gid_t ;
struct TYPE_2__ {scalar_t__ nm_negnametimeo; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct vnode*,int ,int ) ;
 struct nfsnode* FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,struct vnode*,struct componentname*,int *,int *) ;
 int FUNC_8 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_9 (int ,int,int ,int ) ;
 int FUNC_10 (struct vnode*,struct vnode*,int ,int ,int ,int ,struct nfsvattr*,struct nfsvattr*,int*,int*,int *) ;

__attribute__((used)) static int
FUNC_11(struct vop_link_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct vnode *VAR_5 = VAR_3->a_tdvp;
 struct componentname *VAR_6 = VAR_3->a_cnp;
 struct nfsnode *VAR_7, *VAR_8;
 struct nfsvattr VAR_9, VAR_10;
 int VAR_11 = 0, VAR_12, VAR_13;






 FUNC_5(VAR_4, VAR_1, VAR_6->cn_thread);

 VAR_11 = FUNC_10(VAR_5, VAR_4, VAR_6->cn_nameptr, VAR_6->cn_namelen,
     VAR_6->cn_cred, VAR_6->cn_thread, &VAR_10, &VAR_9, &VAR_12,
     &VAR_13, ((void*)0));
 VAR_8 = FUNC_6(VAR_5);
 FUNC_1(VAR_8);
 VAR_8->n_flag |= VAR_2;
 if (VAR_13 != 0) {
  FUNC_2(VAR_8);
  (void) FUNC_8(&VAR_5, &VAR_10, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_8->n_attrstamp = 0;
  FUNC_2(VAR_8);
  FUNC_0(VAR_5);
 }
 if (VAR_12)
  (void) FUNC_8(&VAR_4, &VAR_9, ((void*)0), ((void*)0), 0, 1);
 else {
  VAR_7 = FUNC_6(VAR_4);
  FUNC_1(VAR_7);
  VAR_7->n_attrstamp = 0;
  FUNC_2(VAR_7);
  FUNC_0(VAR_4);
 }






 if (FUNC_4(VAR_4->v_mount)->nm_negnametimeo != 0 &&
     (VAR_6->cn_flags & VAR_0) && VAR_12 != 0 && VAR_11 == 0) {
  FUNC_7(VAR_5, VAR_4, VAR_6, &VAR_9.na_ctime, ((void*)0));
 }
 if (VAR_11 && FUNC_3(VAR_4))
  VAR_11 = FUNC_9(VAR_6->cn_thread, VAR_11, (uid_t)0,
      (gid_t)0);
 return (VAR_11);
}
