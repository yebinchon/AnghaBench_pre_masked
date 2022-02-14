
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct uio {int uio_td; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
typedef int gid_t ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (struct vnode*,struct uio*,struct ucred*,int ,struct nfsvattr*,int*,int *) ;

int
FUNC_4(struct vnode *VAR_0, struct uio *VAR_1, struct ucred *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct nfsvattr VAR_6;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_1->uio_td, &VAR_6,
     &VAR_5, ((void*)0));
 if (VAR_5) {
  VAR_4 = FUNC_1(&VAR_0, &VAR_6, ((void*)0), ((void*)0), 0, 1);
  if (VAR_4 && !VAR_3)
   VAR_3 = VAR_4;
 }
 if (VAR_3 && FUNC_0(VAR_0))
  VAR_3 = FUNC_2(VAR_1->uio_td, VAR_3, (uid_t)0, (gid_t)0);
 return (VAR_3);
}
