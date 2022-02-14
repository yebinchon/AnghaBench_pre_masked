
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {scalar_t__ n_attrstamp; int n_flag; } ;
typedef int gid_t ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int VAR_0 ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_6 (struct thread*,int,int ,int ) ;
 int FUNC_7 (struct vnode*,struct vnode*,char*,int,struct vnode*,struct vnode*,char*,int,struct ucred*,struct thread*,struct nfsvattr*,struct nfsvattr*,int*,int*,int *,int *) ;

__attribute__((used)) static int
FUNC_8(struct vnode *VAR_1, struct vnode *VAR_2, char *VAR_3,
    int VAR_4, struct vnode *VAR_5, struct vnode *VAR_6, char *VAR_7,
    int VAR_8, struct ucred *VAR_9, struct thread *VAR_10)
{
 struct nfsvattr VAR_11, VAR_12;
 struct nfsnode *VAR_13 = FUNC_4(VAR_1);
 struct nfsnode *VAR_14 = FUNC_4(VAR_5);
 int VAR_15 = 0, VAR_16, VAR_17;

 VAR_15 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, &VAR_11, &VAR_12, &VAR_16,
     &VAR_17, ((void*)0), ((void*)0));
 FUNC_1(VAR_13);
 VAR_13->n_flag |= VAR_0;
 if (VAR_16 != 0) {
  FUNC_2(VAR_13);
  (void) FUNC_5(&VAR_1, &VAR_11, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_13->n_attrstamp = 0;
  FUNC_2(VAR_13);
  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_14);
 VAR_14->n_flag |= VAR_0;
 if (VAR_17 != 0) {
  FUNC_2(VAR_14);
  (void) FUNC_5(&VAR_5, &VAR_12, ((void*)0), ((void*)0), 0, 1);
 } else {
  VAR_14->n_attrstamp = 0;
  FUNC_2(VAR_14);
  FUNC_0(VAR_5);
 }
 if (VAR_15 && FUNC_3(VAR_1))
  VAR_15 = FUNC_6(VAR_10, VAR_15, (uid_t)0, (gid_t)0);
 return (VAR_15);
}
