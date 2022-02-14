
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct uio {int uio_td; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsmount {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (struct vnode*,struct uio*,int *,int *,int ,int ,struct ucred*,int ) ;
 int FUNC_5 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (struct vnode*,struct uio*,struct ucred*,int ,struct nfsvattr*,int*,int *) ;
 int FUNC_8 (struct vnode*) ;

int
FUNC_9(struct vnode *VAR_2, struct uio *VAR_3, struct ucred *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct nfsvattr VAR_8;
 struct nfsmount *VAR_9;

 VAR_9 = FUNC_3(FUNC_8(VAR_2));
 VAR_5 = VAR_0;
 VAR_7 = 0;
 if (FUNC_1(VAR_9))
  VAR_5 = FUNC_4(VAR_2, VAR_3, ((void*)0), ((void*)0),
      VAR_1, 0, VAR_4, VAR_3->uio_td);
 FUNC_0(4, "readrpc: aft doiods=%d\n", VAR_5);
 if (VAR_5 != 0)
  VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_3->uio_td, &VAR_8,
      &VAR_7, ((void*)0));
 if (VAR_7) {
  VAR_6 = FUNC_5(&VAR_2, &VAR_8, ((void*)0), ((void*)0), 0, 1);
  if (VAR_6 && !VAR_5)
   VAR_5 = VAR_6;
 }
 if (VAR_5 && FUNC_2(VAR_2))
  VAR_5 = FUNC_6(VAR_3->uio_td, VAR_5, (uid_t)0, (gid_t)0);
 return (VAR_5);
}
