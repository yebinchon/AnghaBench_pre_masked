
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uoff_t ;
typedef scalar_t__ u_long ;
struct vop_write_args {int a_ioflag; struct ucred* a_cred; struct vnode* a_vp; struct uio* a_uio; } ;
struct vnode {int v_type; TYPE_2__* v_mount; } ;
struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; int uio_td; } ;
struct ucred {int dummy; } ;
struct msdosfsmount {int pm_crbomask; int pm_bpcluster; } ;
struct denode {scalar_t__ de_FileSize; int de_flag; TYPE_1__* de_fc; int de_StartCluster; int de_dirclust; int de_diroffset; struct msdosfsmount* de_pmp; } ;
struct buf {int b_blkno; int b_lblkno; int b_flags; scalar_t__ b_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_4__ {int mnt_flag; } ;
struct TYPE_3__ {scalar_t__ fc_frcn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;


 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct vnode*,scalar_t__,int,struct ucred*,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct vnode*,struct buf*,int,int,int ) ;
 scalar_t__ FUNC_8 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_10 (struct denode*,scalar_t__,struct ucred*) ;
 int FUNC_11 (struct denode*,scalar_t__,int,int ) ;
 int FUNC_12 (struct denode*,int) ;
 int FUNC_13 (struct denode*,scalar_t__,int *,int *,int ) ;
 struct buf* FUNC_14 (struct vnode*,scalar_t__,int,int ,int ,int ) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct denode*,int,scalar_t__*,int ,int ) ;
 int FUNC_18 (char*,struct vnode*,struct uio*,int,...) ;
 int FUNC_19 (struct buf*) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (scalar_t__,int,struct uio*) ;
 scalar_t__ FUNC_22 (struct vnode*,struct uio*,int ) ;
 int FUNC_23 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_24(struct vop_write_args *VAR_14)
{
 int VAR_15;
 int VAR_16;
 ssize_t VAR_17;
 u_long VAR_18;
 int VAR_19 = 0;
 u_long VAR_20;
 int VAR_21;
 daddr_t VAR_22, VAR_23;
 struct buf *VAR_24;
 int VAR_25 = VAR_14->a_ioflag;
 struct uio *VAR_26 = VAR_14->a_uio;
 struct vnode *VAR_27 = VAR_14->a_vp;
 struct vnode *VAR_28;
 struct denode *VAR_29 = FUNC_0(VAR_27);
 struct msdosfsmount *VAR_30 = VAR_29->de_pmp;
 struct ucred *VAR_31 = VAR_14->a_cred;
 switch (VAR_27->v_type) {
 case 128:
  if (VAR_25 & VAR_7)
   VAR_26->uio_offset = VAR_29->de_FileSize;
  VAR_28 = VAR_27;
  break;
 case 129:
  return VAR_4;
 default:
  FUNC_16("msdosfs_write(): bad file type");
 }






 if (VAR_26->uio_resid == 0)
  return (0);





 if ((uoff_t)VAR_26->uio_offset + VAR_26->uio_resid > VAR_12)
  return (VAR_2);




 if (FUNC_22(VAR_27, VAR_26, VAR_26->uio_td))
  return (VAR_2);







 if (VAR_26->uio_offset > VAR_29->de_FileSize) {
  VAR_19 = FUNC_10(VAR_29, VAR_26->uio_offset, VAR_31);
  if (VAR_19)
   return (VAR_19);
 }




 VAR_17 = VAR_26->uio_resid;
 VAR_18 = VAR_29->de_FileSize;





 if (VAR_26->uio_offset + VAR_17 > VAR_18) {
  VAR_20 = FUNC_8(VAR_30, VAR_26->uio_offset + VAR_17) -
   FUNC_8(VAR_30, VAR_18);
  VAR_19 = FUNC_13(VAR_29, VAR_20, ((void*)0), ((void*)0), 0);
  if (VAR_19 && (VAR_19 != VAR_5 || (VAR_25 & VAR_10)))
   goto errexit;
  VAR_23 = VAR_29->de_fc[VAR_6].fc_frcn;
 } else
  VAR_23 = FUNC_8(VAR_30, VAR_18) - 1;

 VAR_21 = VAR_25 >> VAR_8;
 do {
  if (FUNC_9(VAR_30, VAR_26->uio_offset) > VAR_23) {
   VAR_19 = VAR_5;
   break;
  }

  VAR_16 = VAR_26->uio_offset & VAR_30->pm_crbomask;
  VAR_15 = FUNC_15(VAR_26->uio_resid, VAR_30->pm_bpcluster - VAR_16);
  if (VAR_26->uio_offset + VAR_15 > VAR_29->de_FileSize) {
   VAR_29->de_FileSize = VAR_26->uio_offset + VAR_15;

   FUNC_23(VAR_27, VAR_29->de_FileSize);
  }

  VAR_22 = FUNC_9(VAR_30, VAR_26->uio_offset);
  if ((VAR_26->uio_offset & VAR_30->pm_crbomask) == 0
      && (FUNC_9(VAR_30, VAR_26->uio_offset + VAR_26->uio_resid)
   > FUNC_9(VAR_30, VAR_26->uio_offset)
   || VAR_26->uio_offset + VAR_26->uio_resid >= VAR_29->de_FileSize)) {





   VAR_24 = FUNC_14(VAR_28, VAR_22, VAR_30->pm_bpcluster, 0, 0, 0);






   FUNC_19(VAR_24);




   if (VAR_24->b_blkno == VAR_24->b_lblkno) {
    VAR_19 = FUNC_17(VAR_29, VAR_24->b_lblkno, &VAR_22, 0, 0);
    if (VAR_19)
     VAR_24->b_blkno = -1;
    else
     VAR_24->b_blkno = VAR_22;
   }
   if (VAR_24->b_blkno == -1) {
    FUNC_4(VAR_24);
    if (!VAR_19)
     VAR_19 = VAR_3;
    break;
   }
  } else {



   VAR_19 = FUNC_3(VAR_28, VAR_22, VAR_30->pm_bpcluster, VAR_31, &VAR_24);
   if (VAR_19) {
    break;
   }
  }
  VAR_19 = FUNC_21(VAR_24->b_data + VAR_16, VAR_15, VAR_26);
  if (VAR_19) {
   FUNC_4(VAR_24);
   break;
  }


  if ((VAR_27->v_mount->mnt_flag & VAR_11) == 0)
   VAR_24->b_flags |= VAR_0;
  if (VAR_25 & VAR_9)
   (void)FUNC_6(VAR_24);
  else if (FUNC_20() || FUNC_5())
   FUNC_1(VAR_24);
  else if (VAR_15 + VAR_16 == VAR_30->pm_bpcluster) {
   if ((VAR_27->v_mount->mnt_flag & VAR_11) == 0)
    FUNC_7(VAR_27, VAR_24, VAR_29->de_FileSize,
        VAR_21, 0);
   else
    FUNC_1(VAR_24);
  } else
   FUNC_2(VAR_24);
  VAR_29->de_flag |= VAR_1;
 } while (VAR_19 == 0 && VAR_26->uio_resid > 0);





errexit:
 if (VAR_19) {
  if (VAR_25 & VAR_10) {
   FUNC_11(VAR_29, VAR_18, VAR_25 & VAR_9, VAR_13);
   VAR_26->uio_offset -= VAR_17 - VAR_26->uio_resid;
   VAR_26->uio_resid = VAR_17;
  } else {
   FUNC_11(VAR_29, VAR_29->de_FileSize, VAR_25 & VAR_9, VAR_13);
   if (VAR_26->uio_resid != VAR_17)
    VAR_19 = 0;
  }
 } else if (VAR_25 & VAR_9)
  VAR_19 = FUNC_12(VAR_29, 1);
 return (VAR_19);
}
