
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint64_t ;
struct ucred {int dummy; } ;
struct nfsfh {int dummy; } ;
struct nfsclwritedsdorpc {int len; int vers; int minorvers; scalar_t__ inprog; int * p; struct ucred* cred; struct nfsfh* fhp; struct nfsclds* dsp; int off; int vp; scalar_t__ done; } ;
struct nfsclds {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,struct nfsclwritedsdorpc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ,int,struct nfsclds*,struct nfsfh*,int,int,struct ucred*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_3, uint64_t VAR_4, int VAR_5, struct nfsclds *VAR_6,
    struct nfsfh *VAR_7, int VAR_8, int VAR_9,
    struct nfsclwritedsdorpc *VAR_10, struct ucred *VAR_11, NFSPROC_T *VAR_12)
{
 int VAR_13, VAR_14;

 VAR_13 = 0;
 VAR_10->done = 0;
 VAR_10->vp = VAR_3;
 VAR_10->off = VAR_4;
 VAR_10->len = VAR_5;
 VAR_10->dsp = VAR_6;
 VAR_10->fhp = VAR_7;
 VAR_10->vers = VAR_8;
 VAR_10->minorvers = VAR_9;
 VAR_10->cred = VAR_11;
 VAR_10->p = VAR_12;
 VAR_10->inprog = 0;
 VAR_14 = VAR_0;
 if (VAR_1 != 0) {
  VAR_14 = FUNC_1(VAR_2, VAR_10);
  FUNC_0(4, "nfsio_commitds: nfs_pnfsio=%d\n", VAR_14);
 }
 if (VAR_14 != 0)
  VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_11, VAR_12);
 FUNC_0(4, "nfsio_commitds: error=%d\n", VAR_13);
 return (VAR_13);
}
