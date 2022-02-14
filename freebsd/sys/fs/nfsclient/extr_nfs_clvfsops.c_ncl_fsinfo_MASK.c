
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsmount {int nm_mtx; } ;
struct nfsfsinfo {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_3 (struct nfsmount*,struct nfsfsinfo*) ;
 int FUNC_4 (struct vnode*,struct nfsfsinfo*,struct ucred*,struct thread*,struct nfsvattr*,int*,int *) ;

int
FUNC_5(struct nfsmount *VAR_0, struct vnode *VAR_1, struct ucred *VAR_2,
    struct thread *VAR_3)
{
 struct nfsfsinfo VAR_4;
 struct nfsvattr VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_1, &VAR_4, VAR_2, VAR_3, &VAR_5, &VAR_7, ((void*)0));
 if (!VAR_6) {
  if (VAR_7)
   (void) FUNC_2(&VAR_1, &VAR_5, ((void*)0), ((void*)0), 0,
       1);
  FUNC_0(&VAR_0->nm_mtx);
  FUNC_3(VAR_0, &VAR_4);
  FUNC_1(&VAR_0->nm_mtx);
 }
 return (VAR_6);
}
