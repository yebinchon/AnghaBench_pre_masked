
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vnode_t ;
typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct uio {scalar_t__ uio_resid; } ;
struct ucred {int cr_ngroups; int * cr_groups; int cr_uid; } ;
struct nfsnode {int n_flag; } ;
struct nfsfh {int nfh_len; } ;
struct nfsclwritedsdorpc {int dummy; } ;
struct nfscllayout {int nfsly_flags; } ;
struct nfsclflayout {int nfsfl_mirrorcnt; TYPE_1__* nfsfl_ffm; } ;
struct nfsclds {int dummy; } ;
struct nfscldevinfo {size_t nfsdi_versindex; int nfsdi_flags; scalar_t__ nfsdi_rsize; scalar_t__ nfsdi_wsize; int nfsdi_minorvers; int nfsdi_vers; } ;
struct mbuf {int dummy; } ;
struct TYPE_9__ {int seqid; } ;
typedef TYPE_2__ nfsv4stateid_t ;
struct TYPE_8__ {int group; int user; TYPE_2__ st; struct nfsfh** fh; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_4 ;
 struct ucred* FUNC_4 (struct ucred*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct nfsnode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nfsnode* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,struct nfscldevinfo*,struct nfscllayout*,struct nfsclds*) ;
 struct nfsclds** FUNC_9 (struct nfscldevinfo*,int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,struct nfsclds*,struct nfsfh*,int ,int ,struct nfsclwritedsdorpc*,struct ucred*,int *) ;
 int FUNC_11 (int ,int*,int*,TYPE_2__*,struct nfsclds*,scalar_t__,scalar_t__,struct nfsfh*,struct mbuf*,int ,int ,struct nfsclwritedsdorpc*,struct ucred*,int *) ;
 struct mbuf* FUNC_12 (struct mbuf*,int,scalar_t__) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__,struct nfsclds*,struct nfsfh*,int ,int ,struct ucred*,int *) ;
 int FUNC_14 (int ,struct uio*,TYPE_2__*,int*,struct nfsclds*,scalar_t__,scalar_t__,struct nfsfh*,int,int ,int ,struct ucred*,int *) ;
 int FUNC_15 (int ,struct uio*,int*,int*,TYPE_2__*,struct nfsclds*,scalar_t__,scalar_t__,struct nfsfh*,int ,int,int ,int ,struct ucred*,int *) ;
 int FUNC_16 (int ,int*,int*,TYPE_2__*,struct nfsclds*,scalar_t__,scalar_t__,struct nfsfh*,struct mbuf*,int ,int ,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_17(vnode_t VAR_9, struct uio *VAR_10, int *VAR_11, int *VAR_12,
    int *VAR_13, nfsv4stateid_t *VAR_14, int VAR_15, struct nfscldevinfo *VAR_16,
    struct nfscllayout *VAR_17, struct nfsclflayout *VAR_18, uint64_t VAR_19,
    uint64_t VAR_20, int VAR_21, int VAR_22, struct mbuf *VAR_23,
    struct nfsclwritedsdorpc *VAR_24, struct ucred *VAR_25, NFSPROC_T *VAR_26)
{
 uint64_t VAR_27, VAR_28;
 int VAR_29, VAR_30;
 struct nfsnode *VAR_31;
 struct nfsfh *VAR_32;
 struct nfsclds **VAR_33;
 struct ucred *VAR_34;
 struct mbuf *VAR_35;

 VAR_31 = FUNC_7(VAR_9);
 VAR_29 = 0;
 VAR_30 = 0;
 FUNC_0(4, "nfscl_dofflayoutio: off=%ju len=%ju\n", (uintmax_t)VAR_19,
     (uintmax_t)VAR_20);

 while (VAR_20 > 0 && VAR_29 == 0) {
  VAR_33 = FUNC_9(VAR_16, 0);
  VAR_32 = VAR_18->nfsfl_ffm[VAR_21].fh[VAR_16->nfsdi_versindex];
  VAR_14 = &VAR_18->nfsfl_ffm[VAR_21].st;
  FUNC_0(4, "mirror=%d vind=%d fhlen=%d st.seqid=0x%x\n",
      VAR_21, VAR_16->nfsdi_versindex, VAR_32->nfh_len, VAR_14->seqid);
  if ((VAR_16->nfsdi_flags & VAR_3) == 0) {
   VAR_34 = FUNC_4(VAR_25);
   VAR_34->cr_uid = VAR_18->nfsfl_ffm[VAR_21].user;
   VAR_34->cr_groups[0] = VAR_18->nfsfl_ffm[VAR_21].group;
   VAR_34->cr_ngroups = 1;
  } else
   VAR_34 = VAR_25;
  if (VAR_15 == VAR_5)
   VAR_27 = VAR_16->nfsdi_rsize;
  else
   VAR_27 = VAR_16->nfsdi_wsize;
  FUNC_3(VAR_31);
  VAR_31->n_flag |= VAR_2;
  FUNC_6(VAR_31);
  if (VAR_20 > VAR_27 && VAR_22 == 0)
   VAR_28 = VAR_27;
  else
   VAR_28 = VAR_20;
  if (VAR_22 != 0) {
   if (VAR_29 == 0) {



    if (VAR_21 < VAR_18->nfsfl_mirrorcnt - 1)
     VAR_29 = FUNC_10(VAR_9, VAR_19, VAR_28,
         *VAR_33, VAR_32, VAR_16->nfsdi_vers,
         VAR_16->nfsdi_minorvers, VAR_24, VAR_34,
         VAR_26);
    else
     VAR_29 = FUNC_13(VAR_9, VAR_19, VAR_28,
         *VAR_33, VAR_32, VAR_16->nfsdi_vers,
         VAR_16->nfsdi_minorvers, VAR_34, VAR_26);
    FUNC_0(4, "commitds=%d\n", VAR_29);
    if (VAR_29 != 0 && VAR_29 != VAR_0 && VAR_29 !=
        VAR_1) {
     FUNC_0(4,
         "DS layreterr for commit\n");
     FUNC_8(VAR_6, VAR_29, VAR_16,
         VAR_17, *VAR_33);
    }
   }
   FUNC_0(4, "aft nfsio_commitds=%d\n", VAR_29);
   if (VAR_29 == 0) {




    *VAR_13 = 1;
    VAR_10->uio_resid = 0;
   } else {
    FUNC_3(VAR_31);
    VAR_31->n_flag &= ~VAR_2;
    FUNC_6(VAR_31);
   }
  } else if (VAR_15 == VAR_5) {
   VAR_29 = FUNC_14(VAR_9, VAR_10, VAR_14, VAR_13, *VAR_33,
       VAR_19, VAR_28, VAR_32, 1, VAR_16->nfsdi_vers,
       VAR_16->nfsdi_minorvers, VAR_34, VAR_26);
   FUNC_0(4, "readds=%d\n", VAR_29);
   if (VAR_29 != 0 && VAR_29 != VAR_0 && VAR_29 != VAR_1) {
    FUNC_0(4, "DS layreterr for read\n");
    FUNC_8(VAR_7, VAR_29, VAR_16, VAR_17,
        *VAR_33);
   }
  } else {
   if (VAR_18->nfsfl_mirrorcnt == 1) {
    VAR_29 = FUNC_15(VAR_9, VAR_10, VAR_11,
        VAR_12, VAR_14, *VAR_33, VAR_19, VAR_28,
        VAR_32, 0, 1, VAR_16->nfsdi_vers,
        VAR_16->nfsdi_minorvers, VAR_34, VAR_26);
    if (VAR_29 == 0) {
     FUNC_2();
     VAR_17->nfsly_flags |= VAR_4;
     FUNC_5();
    }
   } else {
    VAR_35 = FUNC_12(VAR_23, VAR_30, VAR_28);
    FUNC_0(4, "mcopy reloff=%d xfer=%jd\n",
        VAR_30, (uintmax_t)VAR_28);




    if (VAR_21 < VAR_18->nfsfl_mirrorcnt - 1)
     VAR_29 = FUNC_11(VAR_9, VAR_11,
         VAR_12, VAR_14, *VAR_33, VAR_19,
         VAR_28, VAR_32, VAR_35, VAR_16->nfsdi_vers,
         VAR_16->nfsdi_minorvers, VAR_24, VAR_34,
         VAR_26);
    else
     VAR_29 = FUNC_16(VAR_9, VAR_11,
         VAR_12, VAR_14, *VAR_33, VAR_19,
         VAR_28, VAR_32, VAR_35, VAR_16->nfsdi_vers,
         VAR_16->nfsdi_minorvers, VAR_34, VAR_26);
    FUNC_0(4, "nfsio_writedsmir=%d\n", VAR_29);
    if (VAR_29 != 0 && VAR_29 != VAR_0 && VAR_29 !=
        VAR_1) {
     FUNC_0(4,
         "DS layreterr for write\n");
     FUNC_8(VAR_8, VAR_29, VAR_16,
         VAR_17, *VAR_33);
    }
   }
  }
  FUNC_0(4, "aft read/writeds=%d\n", VAR_29);
  if (VAR_29 == 0) {
   VAR_20 -= VAR_28;
   VAR_19 += VAR_28;
   VAR_30 += VAR_28;
  }
  if ((VAR_16->nfsdi_flags & VAR_3) == 0)
   FUNC_1(VAR_34);
 }
 FUNC_0(4, "eo nfscl_dofflayoutio=%d\n", VAR_29);
 return (VAR_29);
}
