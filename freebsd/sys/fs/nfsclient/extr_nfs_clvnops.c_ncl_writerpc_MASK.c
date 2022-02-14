
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct vnode {int dummy; } ;
struct uio {int uio_td; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsmount {int dummy; } ;
typedef int gid_t ;
struct TYPE_2__ {int n_flag; } ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 struct nfsmount* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,struct uio*,int*,int*,int ,int ,struct ucred*,int ) ;
 int FUNC_7 (struct vnode**,struct nfsvattr*,int *,int *,int,int) ;
 int FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (struct vnode*,struct uio*,int*,int*,struct ucred*,int ,struct nfsvattr*,int*,int *,int) ;
 int FUNC_10 (struct vnode*) ;

int
FUNC_11(struct vnode *VAR_4, struct uio *VAR_5, struct ucred *VAR_6,
    int *VAR_7, int *VAR_8, int VAR_9)
{
 struct nfsvattr VAR_10;
 int VAR_11, VAR_12, VAR_13;
 struct nfsmount *VAR_14;

 VAR_14 = FUNC_4(FUNC_10(VAR_4));
 VAR_11 = VAR_0;
 VAR_12 = 0;
 if (FUNC_2(VAR_14))
  VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_7, VAR_8,
      VAR_2, 0, VAR_6, VAR_5->uio_td);
 FUNC_1(4, "writerpc: aft doiods=%d\n", VAR_11);
 if (VAR_11 != 0)
  VAR_11 = FUNC_9(VAR_4, VAR_5, VAR_7, VAR_8, VAR_6,
      VAR_5->uio_td, &VAR_10, &VAR_12, ((void*)0),
      VAR_9);
 if (VAR_12) {
  if (FUNC_5(VAR_4)->n_flag & VAR_1)
   VAR_13 = FUNC_7(&VAR_4, &VAR_10, ((void*)0), ((void*)0), 1,
       1);
  else
   VAR_13 = FUNC_7(&VAR_4, &VAR_10, ((void*)0), ((void*)0), 0,
       1);
  if (VAR_13 && !VAR_11)
   VAR_11 = VAR_13;
 }
 if (FUNC_0(VAR_4))
  *VAR_7 = VAR_3;
 if (VAR_11 && FUNC_3(VAR_4))
  VAR_11 = FUNC_8(VAR_5->uio_td, VAR_11, (uid_t)0, (gid_t)0);
 return (VAR_11);
}
