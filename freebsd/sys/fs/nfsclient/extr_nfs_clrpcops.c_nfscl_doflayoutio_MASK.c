
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint64_t ;
struct uio {scalar_t__ uio_resid; } ;
struct ucred {int dummy; } ;
struct nfsnode {int n_flag; struct nfsfh* n_fhp; } ;
struct nfsfh {int dummy; } ;
struct nfscllayout {int nfsly_flags; } ;
struct nfsclflayout {int nfsfl_patoff; int nfsfl_util; int nfsfl_stripe1; int nfsfl_fhcnt; struct nfsfh** nfsfl_fh; } ;
struct nfsclds {int dummy; } ;
struct nfscldevinfo {int nfsdi_stripecnt; } ;
typedef int nfsv4stateid_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_5 ;
 struct nfsnode* FUNC_4 (int ) ;
 struct nfsclds** FUNC_5 (struct nfscldevinfo*,int) ;
 int FUNC_6 (struct nfscldevinfo*,int) ;
 int FUNC_7 (int ,int,int,struct nfsclds*,struct nfsfh*,int ,int ,struct ucred*,int *) ;
 int FUNC_8 (int ,struct uio*,int *,int*,struct nfsclds*,int,int,struct nfsfh*,int ,int ,int ,struct ucred*,int *) ;
 int FUNC_9 (int ,struct uio*,int*,int*,int *,struct nfsclds*,int,int,struct nfsfh*,int,int ,int ,int ,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_10(vnode_t VAR_6, struct uio *VAR_7, int *VAR_8, int *VAR_9,
    int *VAR_10, nfsv4stateid_t *VAR_11, int VAR_12, struct nfscldevinfo *VAR_13,
    struct nfscllayout *VAR_14, struct nfsclflayout *VAR_15, uint64_t VAR_16,
    uint64_t VAR_17, int VAR_18, struct ucred *VAR_19, NFSPROC_T *VAR_20)
{
 uint64_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 struct nfsnode *VAR_30;
 struct nfsfh *VAR_31;
 struct nfsclds **VAR_32;

 VAR_30 = FUNC_4(VAR_6);
 VAR_22 = VAR_16 - VAR_15->nfsfl_patoff;
 VAR_23 = (VAR_15->nfsfl_util >> 6) & 0x3ffffff;
 VAR_29 = (VAR_22 / VAR_23 + VAR_15->nfsfl_stripe1) %
     VAR_13->nfsdi_stripecnt;
 VAR_24 = VAR_23 - (VAR_22 % VAR_23);
 VAR_27 = 0;


 while (VAR_17 > 0 && VAR_27 == 0) {
  VAR_28 = FUNC_6(VAR_13, VAR_29);
  VAR_32 = FUNC_5(VAR_13, VAR_28);
  if (VAR_17 > VAR_24 && VAR_18 == 0)
   VAR_25 = VAR_24;
  else
   VAR_25 = VAR_17;
  if ((VAR_15->nfsfl_util & VAR_3) != 0) {

   if (VAR_29 >= VAR_15->nfsfl_fhcnt)
    return (VAR_0);
   VAR_31 = VAR_15->nfsfl_fh[VAR_29];
   VAR_21 = (VAR_22 / (VAR_23 *
       VAR_13->nfsdi_stripecnt)) * VAR_23 +
       VAR_22 % VAR_23;
  } else {

   if (VAR_15->nfsfl_fhcnt > 1) {
    if (VAR_28 >= VAR_15->nfsfl_fhcnt)
     return (VAR_0);
    VAR_31 = VAR_15->nfsfl_fh[VAR_28];
   } else if (VAR_15->nfsfl_fhcnt == 1)
    VAR_31 = VAR_15->nfsfl_fh[0];
   else
    VAR_31 = VAR_30->n_fhp;
   VAR_21 = VAR_16;
  }
  if ((VAR_15->nfsfl_util & VAR_2) != 0) {
   VAR_26 = 1;
   if (VAR_18 != 0)
    VAR_27 = VAR_0;
  } else {
   VAR_26 = 0;
   FUNC_1(VAR_30);
   VAR_30->n_flag |= VAR_1;
   FUNC_3(VAR_30);
  }
  if (VAR_18 != 0) {
   if (VAR_27 == 0)
    VAR_27 = FUNC_7(VAR_6, VAR_21, VAR_25,
        *VAR_32, VAR_31, 0, 0, VAR_19, VAR_20);
   if (VAR_27 == 0) {




    *VAR_10 = 1;
    VAR_7->uio_resid = 0;
   } else {
    FUNC_1(VAR_30);
    VAR_30->n_flag &= ~VAR_1;
    FUNC_3(VAR_30);
   }
  } else if (VAR_12 == VAR_5)
   VAR_27 = FUNC_8(VAR_6, VAR_7, VAR_11, VAR_10, *VAR_32,
       VAR_21, VAR_25, VAR_31, 0, 0, 0, VAR_19, VAR_20);
  else {
   VAR_27 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_11, *VAR_32, VAR_21, VAR_25, VAR_31, VAR_26,
       0, 0, 0, VAR_19, VAR_20);
   if (VAR_27 == 0) {
    FUNC_0();
    VAR_14->nfsly_flags |= VAR_4;
    FUNC_2();
   }
  }
  if (VAR_27 == 0) {
   VAR_24 = VAR_23;
   VAR_29 = (VAR_29 + 1) % VAR_13->nfsdi_stripecnt;
   VAR_17 -= VAR_25;
   VAR_16 += VAR_25;
  }
 }
 return (VAR_27);
}
