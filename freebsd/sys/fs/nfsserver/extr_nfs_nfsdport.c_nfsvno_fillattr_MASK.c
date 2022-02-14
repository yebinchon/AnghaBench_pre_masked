
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct nfsvattr {int na_vattr; } ;
struct nfsrv_descript {int dummy; } ;
struct mount {int dummy; } ;
typedef int nfsattrbit_t ;
typedef int fhandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct nfsrv_descript*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct statfs*,int ) ;
 struct statfs* FUNC_3 (int,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct statfs*,struct mount*) ;
 int FUNC_5 (struct nfsrv_descript*,struct mount*,struct vnode*,int *,int *,int *,int,int *,struct ucred*,struct thread*,int,int,int,int,int ,struct statfs*) ;

int
FUNC_6(struct nfsrv_descript *VAR_7, struct mount *VAR_8, struct vnode *VAR_9,
    struct nfsvattr *VAR_10, fhandle_t *VAR_11, int VAR_12, nfsattrbit_t *VAR_13,
    struct ucred *VAR_14, struct thread *VAR_15, int VAR_16, int VAR_17,
    int VAR_18, int VAR_19, uint64_t VAR_20)
{
 struct statfs *VAR_21;
 int VAR_22;

 VAR_21 = ((void*)0);
 if (VAR_6 > 0 &&
     (FUNC_1(VAR_13, VAR_3) ||
      FUNC_1(VAR_13, VAR_4) ||
      FUNC_1(VAR_13, VAR_5))) {
  VAR_21 = FUNC_3(sizeof(*VAR_21), VAR_0, VAR_1 | VAR_2);
  VAR_22 = FUNC_4(VAR_21, VAR_8);
  if (VAR_22 != 0) {
   FUNC_2(VAR_21, VAR_0);
   VAR_21 = ((void*)0);
  }
 }
 VAR_22 = FUNC_5(VAR_7, VAR_8, VAR_9, ((void*)0), &VAR_10->na_vattr, VAR_11, VAR_12,
     VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19,
     VAR_20, VAR_21);
 FUNC_2(VAR_21, VAR_0);
 FUNC_0(0, VAR_7);
 return (VAR_22);
}
