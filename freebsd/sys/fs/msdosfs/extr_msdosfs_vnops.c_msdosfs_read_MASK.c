
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct vop_read_args {int a_ioflag; struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct msdosfsmount {int pm_bpcluster; scalar_t__ pm_crbomask; struct vnode* pm_devvp; } ;
struct denode {int de_Attributes; scalar_t__ de_FileSize; int de_flag; struct msdosfsmount* de_pmp; } ;
struct buf {scalar_t__ b_resid; scalar_t__ b_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,scalar_t__,int,int ,struct buf**) ;
 int FUNC_2 (struct vnode*,scalar_t__,int,scalar_t__*,int*,int,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct vnode*,scalar_t__,scalar_t__,int,int ,scalar_t__,int,int ,struct buf**) ;
 scalar_t__ FUNC_5 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_7 (struct denode*,scalar_t__,scalar_t__*,int ,int*) ;
 int FUNC_8 (scalar_t__,int,struct uio*) ;

__attribute__((used)) static int
FUNC_9(struct vop_read_args *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 ssize_t VAR_13;
 u_int VAR_14;
 u_long VAR_15;
 u_long VAR_16;
 daddr_t VAR_17;
 daddr_t VAR_18;
 int VAR_19;
 int VAR_20;
 struct buf *VAR_21;
 struct vnode *VAR_22 = VAR_9->a_vp;
 struct denode *VAR_23 = FUNC_0(VAR_22);
 struct msdosfsmount *VAR_24 = VAR_23->de_pmp;
 struct uio *VAR_25 = VAR_9->a_uio;




 VAR_13 = VAR_25->uio_resid;
 if (VAR_13 == 0)
  return (0);
 VAR_20 = VAR_9->a_ioflag >> VAR_4;

 VAR_12 = VAR_23->de_Attributes & VAR_0;
 do {
  if (VAR_25->uio_offset >= VAR_23->de_FileSize)
   break;
  VAR_17 = FUNC_5(VAR_24, VAR_25->uio_offset);
  VAR_18 = VAR_17 + 1;
  VAR_11 = VAR_24->pm_bpcluster;
  VAR_16 = VAR_25->uio_offset & VAR_24->pm_crbomask;





  if (VAR_12) {

   VAR_10 = FUNC_7(VAR_23, VAR_17, &VAR_17, 0, &VAR_11);
   if (VAR_10 == VAR_2) {
    VAR_10 = VAR_3;
    break;
   } else if (VAR_10)
    break;
   VAR_10 = FUNC_1(VAR_24->pm_devvp, VAR_17, VAR_11, VAR_8, &VAR_21);
  } else if (FUNC_6(VAR_24, VAR_18) >= VAR_23->de_FileSize) {
   VAR_10 = FUNC_1(VAR_22, VAR_17, VAR_11, VAR_8, &VAR_21);
  } else if ((VAR_22->v_mount->mnt_flag & VAR_6) == 0) {
   VAR_10 = FUNC_4(VAR_22, VAR_23->de_FileSize, VAR_17, VAR_11,
       VAR_8, VAR_16 + VAR_25->uio_resid, VAR_20, 0, &VAR_21);
  } else if (VAR_20 > 1) {
   VAR_19 = VAR_11;
   VAR_10 = FUNC_2(VAR_22, VAR_17,
       VAR_11, &VAR_18, &VAR_19, 1, VAR_8, &VAR_21);
  } else {
   VAR_10 = FUNC_1(VAR_22, VAR_17, VAR_11, VAR_8, &VAR_21);
  }
  if (VAR_10) {
   FUNC_3(VAR_21);
   break;
  }
  VAR_15 = VAR_24->pm_bpcluster - VAR_16;
  VAR_14 = VAR_15 > VAR_25->uio_resid ? VAR_25->uio_resid : VAR_15;
  VAR_15 = VAR_23->de_FileSize - VAR_25->uio_offset;
  if (VAR_15 < VAR_14)
   VAR_14 = VAR_15;
  VAR_15 = VAR_11 - VAR_21->b_resid;
  if (VAR_15 < VAR_14)
   VAR_14 = VAR_15;
  VAR_10 = FUNC_8(VAR_21->b_data + VAR_16, (int) VAR_14, VAR_25);
  FUNC_3(VAR_21);
 } while (VAR_10 == 0 && VAR_25->uio_resid > 0 && VAR_14 != 0);
 if (!VAR_12 && (VAR_10 == 0 || VAR_25->uio_resid != VAR_13) &&
     (VAR_22->v_mount->mnt_flag & (VAR_5 | VAR_7)) == 0)
  VAR_23->de_flag |= VAR_1;
 return (VAR_10);
}
