
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {int n_flag; scalar_t__ n_attrstamp; } ;
typedef int gid_t ;
typedef int caddr_t ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_6 (struct thread*,int,int ,int ) ;
 int FUNC_7 (struct vnode*,char*,int,struct vnode*,struct ucred*,struct thread*,struct nfsvattr*,int*,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct vnode *VAR_3, struct vnode *VAR_4, char *VAR_5,
    int VAR_6, struct ucred *VAR_7, struct thread *VAR_8)
{
 struct nfsvattr VAR_9;
 struct nfsnode *VAR_10 = FUNC_4(VAR_3);
 int VAR_11 = 0, VAR_12;

 FUNC_1(VAR_10);
 VAR_10->n_flag |= VAR_1;
 FUNC_2(VAR_10);
 VAR_11 = FUNC_7(VAR_3, VAR_5, VAR_6, VAR_4, VAR_7, VAR_8, &VAR_9,
     &VAR_12, ((void*)0));
 FUNC_1(VAR_10);
 if ((VAR_10->n_flag & VAR_2)) {
  VAR_10->n_flag &= ~(VAR_2 | VAR_1);
  FUNC_2(VAR_10);
  FUNC_8((caddr_t)VAR_10);
 } else {
  VAR_10->n_flag &= ~VAR_1;
  FUNC_2(VAR_10);
 }
 if (VAR_12)
  (void) FUNC_5(&VAR_3, &VAR_9, ((void*)0), ((void*)0), 0, 1);
 FUNC_1(VAR_10);
 VAR_10->n_flag |= VAR_0;
 if (!VAR_12) {
  VAR_10->n_attrstamp = 0;
  FUNC_0(VAR_3);
 }
 FUNC_2(VAR_10);
 if (VAR_11 && FUNC_3(VAR_3))
  VAR_11 = FUNC_6(VAR_8, VAR_11, (uid_t)0, (gid_t)0);
 return (VAR_11);
}
