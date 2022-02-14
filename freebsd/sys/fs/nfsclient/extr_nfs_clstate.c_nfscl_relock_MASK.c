
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef scalar_t__ u_int64_t ;
struct ucred {int dummy; } ;
struct nfsmount {int dummy; } ;
struct nfsfh {int nfh_len; int nfh_fh; } ;
struct nfscllockowner {int nfsl_openowner; int nfsl_owner; int nfsl_lockflags; } ;
struct nfscllock {int nfslo_type; scalar_t__ nfslo_first; scalar_t__ nfslo_end; } ;
struct nfsclclient {int dummy; } ;
struct TYPE_2__ {struct nfsfh* n_fhp; } ;
typedef int NFSPROC_T ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct nfscllockowner*,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,struct ucred*,int *,struct nfsclclient*,int,int *,int ,int ,int ,struct nfscllockowner**,int*,int*) ;
 int FUNC_3 (struct nfsmount*,int ,int ,int ,struct nfscllockowner*,int,int ,scalar_t__,scalar_t__,int ,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_0, struct nfsclclient *VAR_1, struct nfsmount *VAR_2,
    struct nfscllockowner *VAR_3, struct nfscllock *VAR_4, struct ucred *VAR_5,
    NFSPROC_T *VAR_6)
{
 struct nfscllockowner *VAR_7;
 struct nfsfh *VAR_8;
 u_int64_t VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = VAR_4->nfslo_first;
 VAR_10 = VAR_4->nfslo_end - VAR_4->nfslo_first;
 VAR_11 = FUNC_2(VAR_0, VAR_9, VAR_10, VAR_4->nfslo_type, VAR_5, VAR_6,
     VAR_1, 1, ((void*)0), VAR_3->nfsl_lockflags, VAR_3->nfsl_owner,
     VAR_3->nfsl_openowner, &VAR_7, &VAR_12, &VAR_13);
 if (VAR_11 || VAR_13)
  return (VAR_11);
 VAR_8 = FUNC_0(VAR_0)->n_fhp;
 VAR_11 = FUNC_3(VAR_2, VAR_0, VAR_8->nfh_fh,
     VAR_8->nfh_len, VAR_7, VAR_12, 0, VAR_9,
     VAR_10, VAR_4->nfslo_type, VAR_5, VAR_6);
 if (VAR_11)
  FUNC_1(VAR_7, 0);
 return (VAR_11);
}
