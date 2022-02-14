
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct vattr {int dummy; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsmount {int dummy; } ;
struct nfsfh {int nfh_len; int * nfh_fh; } ;
struct nfsclsession {int nfsess_maxcache; } ;
struct nfsclowner {int dummy; } ;
struct nfscllayout {int dummy; } ;
struct nfsclflayouthead {int dummy; } ;
struct nfscldeleg {int dummy; } ;
typedef int nfsv4stateid_t ;
typedef int nfsquad_t ;
struct TYPE_5__ {int v_mount; } ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct nfsclflayouthead*) ;
 int FUNC_1 (int,char*,int,int) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (struct nfscllayout*,int ) ;
 struct nfsclsession* FUNC_5 (struct nfsmount*) ;
 int FUNC_6 (TYPE_1__*,char*,int,struct vattr*,int ,int,struct nfsclowner*,struct nfscldeleg**,struct ucred*,int *,struct nfsvattr*,struct nfsvattr*,struct nfsfh**,int*,int*,void*,int*,int *,int,int,int,int*,struct nfsclflayouthead*,int*) ;
 int FUNC_7 (struct nfsmount*,TYPE_1__*,int *,int ,int *,int,int *,struct nfscllayout**,struct nfsclflayouthead*,int,int,int *,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_8(vnode_t VAR_4, char *VAR_5, int VAR_6, struct vattr *VAR_7,
    nfsquad_t VAR_8, int VAR_9, struct nfsclowner *VAR_10, struct nfscldeleg **VAR_11,
    struct ucred *VAR_12, NFSPROC_T *VAR_13, struct nfsvattr *VAR_14,
    struct nfsvattr *VAR_15, struct nfsfh **VAR_16, int *VAR_17,
    int *VAR_18, void *VAR_19, int *VAR_20)
{
 struct nfscllayout *VAR_21;
 struct nfsclflayouthead VAR_22;
 struct nfsfh *VAR_23;
 struct nfsclsession *VAR_24;
 struct nfsmount *VAR_25;
 nfsv4stateid_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

 VAR_27 = 0;
 VAR_25 = FUNC_3(VAR_4->v_mount);
 if (FUNC_2(VAR_25))
  VAR_29 = VAR_0;
 else
  VAR_29 = VAR_1;
 FUNC_0(&VAR_22);
 VAR_24 = FUNC_5(VAR_25);
 VAR_28 = VAR_24->nfsess_maxcache - (VAR_2 + 3 * VAR_3);
 VAR_27 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
     VAR_19, VAR_20, &VAR_26, 1, VAR_29, VAR_28, &VAR_30,
     &VAR_22, &VAR_31);
 FUNC_1(4, "aft nfsrpc_createlayoutrpc laystat=%d err=%d\n",
     VAR_31, VAR_27);
 VAR_21 = ((void*)0);
 if (VAR_31 == 0) {
  VAR_23 = *VAR_16;
  VAR_31 = FUNC_7(VAR_25, VAR_4, VAR_23->nfh_fh,
      VAR_23->nfh_len, &VAR_26, VAR_30, ((void*)0), &VAR_21, &VAR_22,
      VAR_29, VAR_31, ((void*)0), VAR_12, VAR_13);
 } else
  VAR_31 = FUNC_7(VAR_25, VAR_4, ((void*)0), 0, &VAR_26,
      VAR_30, ((void*)0), &VAR_21, &VAR_22, VAR_29, VAR_31, ((void*)0),
      VAR_12, VAR_13);
 if (VAR_31 == 0)
  FUNC_4(VAR_21, 0);
 return (VAR_27);
}
