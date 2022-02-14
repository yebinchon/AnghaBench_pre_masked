
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uoff_t ;
typedef int uint64_t ;
typedef int u_long ;
struct vop_getattr_args {TYPE_2__* a_vp; struct vattr* a_vap; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct vattr {int va_fileid; int va_mode; int va_nlink; int va_size; int va_bytes; scalar_t__ va_type; int va_filerev; int va_blocksize; scalar_t__ va_gen; int va_flags; TYPE_1__ va_birthtime; TYPE_1__ va_mtime; TYPE_1__ va_atime; TYPE_1__ va_ctime; int va_rdev; int va_gid; int va_uid; int va_fsid; } ;
struct timespec {int dummy; } ;
struct msdosfsmount {int pm_BytesPerSec; int pm_dirmask; int pm_mask; int pm_flags; int pm_crbomask; int pm_bpcluster; int pm_gid; int pm_uid; int pm_dev; } ;
struct direntry {int dummy; } ;
struct denode {int de_Attributes; scalar_t__ de_StartCluster; scalar_t__ de_dirclust; int de_FileSize; int de_modrev; int de_CHun; int de_CTime; int de_CDate; int de_ADate; int de_MTime; int de_MDate; scalar_t__ de_diroffset; struct msdosfsmount* de_pmp; } ;
typedef int mode_t ;
struct TYPE_4__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct denode*,struct timespec*,struct timespec*,struct timespec*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct denode* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct msdosfsmount*,int ) ;
 int FUNC_6 (struct timespec*) ;

__attribute__((used)) static int
FUNC_7(struct vop_getattr_args *VAR_19)
{
 struct denode *VAR_20 = FUNC_1(VAR_19->a_vp);
 struct msdosfsmount *VAR_21 = VAR_20->de_pmp;
 struct vattr *VAR_22 = VAR_19->a_vap;
 mode_t VAR_23;
 struct timespec VAR_24;
 u_long VAR_25 = VAR_21->pm_BytesPerSec / sizeof(struct direntry);
 uint64_t VAR_26;

 FUNC_6(&VAR_24);
 FUNC_0(VAR_20, &VAR_24, &VAR_24, &VAR_24);
 VAR_22->va_fsid = FUNC_3(VAR_21->pm_dev);





 if (VAR_20->de_Attributes & VAR_1) {
  VAR_26 = (uint64_t)FUNC_2(VAR_21, VAR_20->de_StartCluster) *
      VAR_25;
  if (VAR_20->de_StartCluster == VAR_6)
   VAR_26 = 1;
 } else {
  VAR_26 = (uint64_t)FUNC_2(VAR_21, VAR_20->de_dirclust) *
      VAR_25;
  if (VAR_20->de_dirclust == VAR_6)
   VAR_26 = (uint64_t)FUNC_5(VAR_21, 0) * VAR_25;
  VAR_26 += (uoff_t)VAR_20->de_diroffset / sizeof(struct direntry);
 }
 VAR_22->va_fileid = VAR_26;

 VAR_23 = VAR_10|VAR_8|VAR_9;
 if (VAR_20->de_Attributes & VAR_3)
  VAR_23 &= ~(VAR_13|VAR_11|VAR_12);
 VAR_22->va_mode = VAR_23 &
     (VAR_19->a_vp->v_type == VAR_18 ? VAR_21->pm_dirmask : VAR_21->pm_mask);
 VAR_22->va_uid = VAR_21->pm_uid;
 VAR_22->va_gid = VAR_21->pm_gid;
 VAR_22->va_nlink = 1;
 VAR_22->va_rdev = VAR_7;
 VAR_22->va_size = VAR_20->de_FileSize;
 FUNC_4(VAR_20->de_MDate, VAR_20->de_MTime, 0, 0, &VAR_22->va_mtime);
 VAR_22->va_ctime = VAR_22->va_mtime;
 if (VAR_21->pm_flags & VAR_5) {
  FUNC_4(VAR_20->de_ADate, 0, 0, 0, &VAR_22->va_atime);
  FUNC_4(VAR_20->de_CDate, VAR_20->de_CTime, VAR_20->de_CHun,
      0, &VAR_22->va_birthtime);
 } else {
  VAR_22->va_atime = VAR_22->va_mtime;
  VAR_22->va_birthtime.tv_sec = -1;
  VAR_22->va_birthtime.tv_nsec = 0;
 }
 VAR_22->va_flags = 0;
 if (VAR_20->de_Attributes & VAR_0)
  VAR_22->va_flags |= VAR_14;
 if (VAR_20->de_Attributes & VAR_2)
  VAR_22->va_flags |= VAR_15;
 if (VAR_20->de_Attributes & VAR_3)
  VAR_22->va_flags |= VAR_16;
 if (VAR_20->de_Attributes & VAR_4)
  VAR_22->va_flags |= VAR_17;
 VAR_22->va_gen = 0;
 VAR_22->va_blocksize = VAR_21->pm_bpcluster;
 VAR_22->va_bytes =
     (VAR_20->de_FileSize + VAR_21->pm_crbomask) & ~VAR_21->pm_crbomask;
 VAR_22->va_type = VAR_19->a_vp->v_type;
 VAR_22->va_filerev = VAR_20->de_modrev;
 return (0);
}
