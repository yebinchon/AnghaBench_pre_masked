
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int v_mount; } ;
struct uio {int uio_iovcnt; int uio_offset; int uio_resid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {int n_direofoffset; } ;
struct nfsmount {int dummy; } ;
typedef int nfsuint64 ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfsmount*) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 struct nfsmount* FUNC_4 (int ) ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct nfsnode*) ;
 int FUNC_7 (struct nfsnode*) ;
 int FUNC_8 (struct nfsmount*,struct vnode*,struct ucred*,struct thread*) ;
 int * FUNC_9 (struct nfsnode*,int,int) ;
 int FUNC_10 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_11 (struct thread*,int,int ,int ) ;
 int FUNC_12 (struct vnode*,struct uio*,int *,struct ucred*,struct thread*,struct nfsvattr*,int*,int*,int *) ;
 int FUNC_13 (char*) ;

int
FUNC_14(struct vnode *VAR_2, struct uio *VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct nfsvattr VAR_6;
 nfsuint64 *VAR_7, VAR_8;
 struct nfsnode *VAR_9 = FUNC_5(VAR_2);
 struct nfsmount *VAR_10 = FUNC_4(VAR_2->v_mount);
 int VAR_11 = 0, VAR_12, VAR_13;

 FUNC_0(VAR_3->uio_iovcnt == 1 &&
     (VAR_3->uio_offset & (VAR_0 - 1)) == 0 &&
     (VAR_3->uio_resid & (VAR_0 - 1)) == 0,
     ("nfs readdirplusrpc bad uio"));




 FUNC_6(VAR_9);
 VAR_7 = FUNC_9(VAR_9, VAR_3->uio_offset, 0);
 if (VAR_7) {
  VAR_8 = *VAR_7;
  FUNC_7(VAR_9);
 } else {
  FUNC_7(VAR_9);
  return (VAR_1);
 }

 if (FUNC_2(VAR_10) && !FUNC_1(VAR_10))
  (void)FUNC_8(VAR_10, VAR_2, VAR_4, VAR_5);
 VAR_11 = FUNC_12(VAR_2, VAR_3, &VAR_8, VAR_4, VAR_5, &VAR_6,
     &VAR_12, &VAR_13, ((void*)0));
 if (VAR_12)
  (void) FUNC_10(&VAR_2, &VAR_6, ((void*)0), ((void*)0), 0, 1);

 if (!VAR_11) {




  if (VAR_13)
   VAR_9->n_direofoffset = VAR_3->uio_offset;
  else {
   if (VAR_3->uio_resid > 0)
    FUNC_13("EEK! readdirplusrpc resid > 0\n");
   FUNC_6(VAR_9);
   VAR_7 = FUNC_9(VAR_9, VAR_3->uio_offset, 1);
   *VAR_7 = VAR_8;
   FUNC_7(VAR_9);
  }
 } else if (FUNC_3(VAR_2)) {
  VAR_11 = FUNC_11(VAR_5, VAR_11, (uid_t)0, (gid_t)0);
 }
 return (VAR_11);
}
