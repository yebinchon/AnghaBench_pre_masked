
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint64_t ;
struct ucred {int dummy; } ;
struct nfsfh {int dummy; } ;
struct nfsclwritedsdorpc {int iomode; int must_commit; int len; int vers; int minorvers; scalar_t__ inprog; int * p; struct ucred* cred; struct mbuf* m; struct nfsfh* fhp; int off; struct nfsclds* dsp; int * stateidp; int vp; scalar_t__ done; } ;
struct nfsclds {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,struct nfsclwritedsdorpc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int*,int*,int *,struct nfsclds*,int ,int,struct nfsfh*,struct mbuf*,int,int,struct ucred*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_3, int *VAR_4, int *VAR_5,
    nfsv4stateid_t *VAR_6, struct nfsclds *VAR_7, uint64_t VAR_8, int VAR_9,
    struct nfsfh *VAR_10, struct mbuf *VAR_11, int VAR_12, int VAR_13,
    struct nfsclwritedsdorpc *VAR_14, struct ucred *VAR_15, NFSPROC_T *VAR_16)
{
 int VAR_17, VAR_18;

 VAR_17 = 0;
 VAR_14->done = 0;
 VAR_14->vp = VAR_3;
 VAR_14->iomode = *VAR_4;
 VAR_14->must_commit = *VAR_5;
 VAR_14->stateidp = VAR_6;
 VAR_14->dsp = VAR_7;
 VAR_14->off = VAR_8;
 VAR_14->len = VAR_9;
 VAR_14->fhp = VAR_10;
 VAR_14->m = VAR_11;
 VAR_14->vers = VAR_12;
 VAR_14->minorvers = VAR_13;
 VAR_14->cred = VAR_15;
 VAR_14->p = VAR_16;
 VAR_14->inprog = 0;
 VAR_18 = VAR_0;
 if (VAR_1 != 0) {
  VAR_18 = FUNC_1(VAR_2, VAR_14);
  FUNC_0(4, "nfsio_writedsmir: nfs_pnfsio=%d\n", VAR_18);
 }
 if (VAR_18 != 0)
  VAR_17 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16);
 FUNC_0(4, "nfsio_writedsmir: error=%d\n", VAR_17);
 return (VAR_17);
}
