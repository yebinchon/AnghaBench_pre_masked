
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u_quad_t ;
struct vnode {int v_mount; } ;
struct uio {int uio_resid; int uio_offset; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {int n_flag; } ;
struct nfsmount {int nm_state; int nm_mtx; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfsmount*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_2 ;
 int FUNC_2 (struct nfsnode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 struct nfsmount* FUNC_4 (int ) ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vnode*,struct uio*,int *,int *,int ,int,struct ucred*,struct thread*) ;
 int FUNC_9 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_10 (struct thread*,int,int ,int ) ;
 int FUNC_11 (struct vnode*,int ,int,struct ucred*,struct thread*,struct nfsvattr*,int*,int *) ;

int
FUNC_12(struct vnode *VAR_4, u_quad_t VAR_5, int VAR_6, struct ucred *VAR_7,
   struct thread *VAR_8)
{
 struct nfsvattr VAR_9;
 struct nfsmount *VAR_10 = FUNC_4(VAR_4->v_mount);
 struct nfsnode *VAR_11;
 struct uio VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_5(VAR_4);
 VAR_13 = VAR_0;
 VAR_14 = 0;
 if (FUNC_0(VAR_10) && (VAR_11->n_flag & VAR_1) != 0) {
  VAR_12.uio_offset = VAR_5;
  VAR_12.uio_resid = VAR_6;
  VAR_13 = FUNC_8(VAR_4, &VAR_12, ((void*)0), ((void*)0),
      VAR_3, 1, VAR_7, VAR_8);
  if (VAR_13 != 0) {
   FUNC_1(VAR_11);
   VAR_11->n_flag &= ~VAR_1;
   FUNC_2(VAR_11);
  }
 }
 if (VAR_13 != 0) {
  FUNC_6(&VAR_10->nm_mtx);
  if ((VAR_10->nm_state & VAR_2) == 0) {
   FUNC_7(&VAR_10->nm_mtx);
   return (0);
  }
  FUNC_7(&VAR_10->nm_mtx);
  VAR_13 = FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9,
      &VAR_14, ((void*)0));
 }
 if (VAR_14 != 0)
  (void) FUNC_9(&VAR_4, &VAR_9, ((void*)0), ((void*)0),
      0, 1);
 if (VAR_13 != 0 && FUNC_3(VAR_4))
  VAR_13 = FUNC_10(VAR_8, VAR_13, (uid_t)0, (gid_t)0);
 return (VAR_13);
}
