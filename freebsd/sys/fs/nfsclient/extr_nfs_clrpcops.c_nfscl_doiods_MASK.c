
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct uio {scalar_t__ uio_offset; TYPE_2__* uio_iov; scalar_t__ uio_resid; } ;
struct ucred {int dummy; } ;
struct nfsnode {int n_flag; TYPE_3__* n_fhp; } ;
struct nfsmount {int nm_state; int nm_clp; } ;
struct nfsclwritedsdorpc {scalar_t__ inprog; scalar_t__ done; int err; int tsk; } ;
struct nfscllayout {int nfsly_flags; scalar_t__ nfsly_lastbyte; } ;
struct nfsclflayout {scalar_t__ nfsfl_end; scalar_t__ nfsfl_off; int nfsfl_mirrorcnt; int nfsfl_flags; int nfsfl_devp; int * nfsfl_dev; TYPE_1__* nfsfl_ffm; } ;
struct nfscldevinfo {int dummy; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int nfsv4stateid_t ;
struct TYPE_6__ {int nfh_len; int nfh_fh; } ;
struct TYPE_5__ {size_t iov_len; void* iov_base; } ;
struct TYPE_4__ {int devp; int * dev; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (struct nfsmount*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (struct nfsmount*) ;
 int FUNC_4 (struct nfsnode*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct ucred* FUNC_5 (struct ucred*) ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfsmount*) ;
 int FUNC_8 (struct nfsnode*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct nfsmount* FUNC_9 (int ) ;
 struct nfsnode* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct nfsclwritedsdorpc*,int ) ;
 int VAR_16 ;
 int FUNC_13 (struct mbuf*) ;
 struct nfsclwritedsdorpc* FUNC_14 (int,int ,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_15 (int ,struct uio*,int*,int*,int*,int *,int ,struct nfscldevinfo*,struct nfscllayout*,struct nfsclflayout*,scalar_t__,scalar_t__,int,int,struct mbuf*,struct nfsclwritedsdorpc*,struct ucred*,int *) ;
 int FUNC_16 (int ,struct uio*,int*,int*,int*,int *,int ,struct nfscldevinfo*,struct nfscllayout*,struct nfsclflayout*,scalar_t__,scalar_t__,int,struct ucred*,int *) ;
 scalar_t__ VAR_18 ;
 int FUNC_17 (struct nfscllayout*,scalar_t__,int ,struct nfsclflayout**) ;
 struct nfscldevinfo* FUNC_18 (int ,int *,int ) ;
 struct nfscllayout* FUNC_19 (int ,int ,int ,scalar_t__,struct nfsclflayout**,int*) ;
 scalar_t__ FUNC_20 (struct nfsmount*) ;
 int FUNC_21 (int ,int ,int ,int ,int,struct ucred*,int *,int *,void**) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (struct nfscldevinfo*) ;
 int FUNC_24 (struct nfscllayout*,int) ;
 int FUNC_25 (struct nfsmount*) ;
 struct mbuf* FUNC_26 (struct uio*,scalar_t__,int *,int *) ;
 int FUNC_27 (struct nfsmount*,int ,TYPE_3__*,int,int *,int *,scalar_t__,struct nfscllayout**,struct ucred*,int *) ;
 int FUNC_28 (int *,int ,char*,int) ;
 int FUNC_29 (int ) ;

int
FUNC_30(vnode_t VAR_19, struct uio *VAR_20, int *VAR_21, int *VAR_22,
    uint32_t VAR_23, int VAR_24, struct ucred *VAR_25, NFSPROC_T *VAR_26)
{
 struct nfsnode *VAR_27 = FUNC_10(VAR_19);
 struct nfsmount *VAR_28 = FUNC_9(FUNC_29(VAR_19));
 struct nfscllayout *VAR_29;
 struct nfscldevinfo *VAR_30;
 struct nfsclflayout *VAR_31;
 struct mbuf *VAR_32;
 struct nfsclwritedsdorpc *VAR_33, *VAR_34;
 nfsv4stateid_t VAR_35;
 struct ucred *VAR_36;
 uint64_t VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
 void *VAR_50;
 uint8_t *VAR_51;
 void *VAR_52 = ((void*)0);
 size_t VAR_53 = 0;
 off_t VAR_54 = 0;
 ssize_t VAR_55 = 0;

 if (!FUNC_1(VAR_28) || VAR_18 == 0 || VAR_17 == 0 ||
     (VAR_27->n_flag & VAR_13) != 0)
  return (VAR_0);

 if (FUNC_20(VAR_28) == 0)
  return (VAR_0);


 VAR_36 = FUNC_5(VAR_25);
 VAR_43 = FUNC_21(VAR_19, VAR_27->n_fhp->nfh_fh, VAR_27->n_fhp->nfh_len,
     VAR_23, 1, VAR_36, VAR_26, &VAR_35, &VAR_50);
 if (VAR_43 != 0) {
  FUNC_0(VAR_36);
  FUNC_25(VAR_28);
  return (VAR_43);
 }

 VAR_39 = VAR_20->uio_offset;
 VAR_29 = FUNC_19(VAR_28->nm_clp, VAR_27->n_fhp->nfh_fh,
     VAR_27->n_fhp->nfh_len, VAR_39, &VAR_31, &VAR_48);
 if (VAR_29 == ((void*)0) || VAR_31 == ((void*)0)) {
  if (VAR_48 != 0) {
   FUNC_0(VAR_36);
   FUNC_25(VAR_28);
   return (VAR_0);
  }
  if (VAR_29 != ((void*)0)) {
   FUNC_24(VAR_29, (VAR_31 == ((void*)0)) ? 1 : 0);
   VAR_29 = ((void*)0);
  }

  if (VAR_23 == VAR_12 ||
      (VAR_27->n_flag & VAR_14) != 0)
   VAR_46 = VAR_7;
  else
   VAR_46 = VAR_6;
  VAR_43 = FUNC_27(VAR_28, VAR_19, VAR_27->n_fhp, VAR_46,
      ((void*)0), &VAR_35, VAR_39, &VAR_29, VAR_36, VAR_26);
  if (VAR_43 != 0) {
   FUNC_4(VAR_27);
   VAR_27->n_flag |= VAR_13;
   FUNC_8(VAR_27);
   if (VAR_50 != ((void*)0))
    FUNC_22(VAR_50);
   FUNC_0(VAR_36);
   if (VAR_29 != ((void*)0))
    FUNC_24(VAR_29, 0);
   FUNC_25(VAR_28);
   return (VAR_43);
  }
 }






 VAR_42 = 0;
 VAR_38 = (uint64_t)VAR_20->uio_resid;
 while (VAR_38 > 0 && VAR_43 == 0 && VAR_42 == 0) {
  VAR_39 = VAR_20->uio_offset;
  VAR_43 = FUNC_17(VAR_29, VAR_39, VAR_23, &VAR_31);
  if (VAR_43 == 0) {
   VAR_40 = VAR_41 = (uint64_t)VAR_20->uio_resid;
   if (VAR_41 > (VAR_31->nfsfl_end - VAR_31->nfsfl_off))
    VAR_41 = VAR_31->nfsfl_end - VAR_31->nfsfl_off;





   VAR_32 = ((void*)0);
   VAR_34 = VAR_33 = ((void*)0);
   VAR_44 = 0;
   VAR_47 = 1;
   if ((VAR_29->nfsly_flags & VAR_8) != 0 &&
       (VAR_47 = VAR_31->nfsfl_mirrorcnt) > 1) {
    if (VAR_23 == VAR_11) {
     VAR_44 = FUNC_11() % VAR_47;
     VAR_47 = VAR_44 + 1;
    } else {
     if (VAR_24 == 0) {





      VAR_54 = VAR_20->uio_offset;
      VAR_55 = VAR_20->uio_resid;
      VAR_52 =
          VAR_20->uio_iov->iov_base;
      VAR_53 = VAR_20->uio_iov->iov_len;
      VAR_32 = FUNC_26(VAR_20, VAR_38,
          ((void*)0), ((void*)0));
     }
     VAR_34 = VAR_33 = FUNC_14(sizeof(*VAR_33) *
         (VAR_47 - 1), VAR_1, VAR_2 |
         VAR_3);
    }
   }
   for (VAR_45 = VAR_44; VAR_45 < VAR_47 && VAR_43 == 0; VAR_45++){
    if ((VAR_29->nfsly_flags & VAR_8) != 0) {
     VAR_51 = VAR_31->nfsfl_ffm[VAR_45].dev;
     VAR_30 = FUNC_18(VAR_28->nm_clp, VAR_51,
         VAR_31->nfsfl_ffm[VAR_45].devp);
    } else {
     VAR_51 = VAR_31->nfsfl_dev;
     VAR_30 = FUNC_18(VAR_28->nm_clp, VAR_51,
         VAR_31->nfsfl_devp);
    }
    if (VAR_30 != ((void*)0)) {
     if ((VAR_31->nfsfl_flags & VAR_5)
         != 0)
      VAR_43 = FUNC_15(VAR_19,
          VAR_20, VAR_21, VAR_22,
          &VAR_42, &VAR_35, VAR_23,
          VAR_30, VAR_29, VAR_31, VAR_39, VAR_41,
          VAR_45, VAR_24, VAR_32, VAR_34,
          VAR_36, VAR_26);
     else
      VAR_43 = FUNC_16(VAR_19,
          VAR_20, VAR_21, VAR_22,
          &VAR_42, &VAR_35, VAR_23,
          VAR_30, VAR_29, VAR_31, VAR_39, VAR_41,
          VAR_24, VAR_36, VAR_26);
     FUNC_23(VAR_30);
    } else
     VAR_43 = VAR_0;
    VAR_34++;
   }
   if (VAR_32 != ((void*)0))
    FUNC_13(VAR_32);
   VAR_34 = VAR_33;
   VAR_49 = VAR_16 / 50;
   if (VAR_49 < 1)
    VAR_49 = 1;
   for (VAR_45 = VAR_44; VAR_45 < VAR_47 - 1 &&
       VAR_34 != ((void*)0); VAR_45++, VAR_34++) {




    while (VAR_34->inprog != 0 && VAR_34->done == 0)
     FUNC_28(&VAR_34->tsk, VAR_15, "clrpcio",
         VAR_49);
    if (VAR_43 == 0 && VAR_34->err != 0)
     VAR_43 = VAR_34->err;
   }
   FUNC_12(VAR_33, VAR_1);
   if (VAR_43 == 0) {
    if (VAR_47 > 1 && VAR_23 ==
        VAR_12 && VAR_24 == 0) {
     FUNC_2();
     VAR_29->nfsly_flags |= VAR_9;
     FUNC_6();
    }
    VAR_37 = VAR_39 + VAR_41 - 1;
    FUNC_2();
    if (VAR_37 > VAR_29->nfsly_lastbyte)
     VAR_29->nfsly_lastbyte = VAR_37;
    FUNC_6();
   } else if (VAR_43 == VAR_4 &&
       VAR_23 == VAR_11) {
    FUNC_3(VAR_28);
    VAR_28->nm_state |= VAR_10;
    FUNC_7(VAR_28);
   } else
    VAR_43 = VAR_0;
   if (VAR_43 == 0)
    VAR_38 -= (VAR_40 - (uint64_t)VAR_20->uio_resid);
   else if (VAR_47 > 1 && VAR_23 ==
       VAR_12 && VAR_24 == 0) {





    VAR_20->uio_offset = VAR_54;
    VAR_20->uio_resid = VAR_55;
    VAR_20->uio_iov->iov_base = VAR_52;
    VAR_20->uio_iov->iov_len = VAR_53;
   }
  }
 }
 if (VAR_50 != ((void*)0))
  FUNC_22(VAR_50);
 FUNC_0(VAR_36);
 FUNC_24(VAR_29, 0);
 FUNC_25(VAR_28);
 return (VAR_43);
}
