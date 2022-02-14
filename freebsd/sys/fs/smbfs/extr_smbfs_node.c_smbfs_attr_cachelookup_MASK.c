
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_3__* v_mount; } ;
struct vattr {scalar_t__ va_type; int va_mode; int va_nlink; int va_fileid; scalar_t__ va_vaflags; scalar_t__ va_filerev; int va_size; int va_bytes; int va_rdev; int va_flags; int va_gen; int va_mtime; int va_ctime; int va_atime; int va_blocksize; int va_fsid; int va_gid; int va_uid; } ;
struct smbnode {int n_attrage; int n_dosattr; int n_ino; int n_mtime; int n_size; } ;
struct smbmount {int sm_file_mode; int sm_dir_mode; int sm_share; int sm_gid; int sm_uid; } ;
struct TYPE_8__ {int vc_txmax; } ;
struct TYPE_5__ {int * val; } ;
struct TYPE_6__ {TYPE_1__ f_fsid; } ;
struct TYPE_7__ {TYPE_2__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 struct smbnode* FUNC_1 (struct vnode*) ;
 struct smbmount* FUNC_2 (struct vnode*) ;
 int VAR_17 ;

int
FUNC_3(struct vnode *VAR_18, struct vattr *VAR_19)
{
 struct smbnode *VAR_20 = FUNC_1(VAR_18);
 struct smbmount *VAR_21 = FUNC_2(VAR_18);
 int VAR_22;

 VAR_22 = VAR_17 - VAR_20->n_attrage;
 if (VAR_22 > 2)
  return VAR_1;
 VAR_19->va_type = VAR_18->v_type;
 VAR_19->va_flags = 0;
 if (VAR_18->v_type == VAR_16) {
  VAR_19->va_mode = VAR_21->sm_file_mode;
  if (VAR_20->n_dosattr & VAR_5) {
   VAR_19->va_mode &= ~(VAR_9|VAR_7|VAR_8);
   VAR_19->va_flags |= VAR_12;
  }
 } else if (VAR_18->v_type == VAR_14) {
  VAR_19->va_mode = VAR_21->sm_dir_mode;
 } else
  return VAR_0;
 VAR_19->va_size = VAR_20->n_size;
 VAR_19->va_nlink = 1;
 VAR_19->va_uid = VAR_21->sm_uid;
 VAR_19->va_gid = VAR_21->sm_gid;
 VAR_19->va_fsid = VAR_18->v_mount->mnt_stat.f_fsid.val[0];
 VAR_19->va_fileid = VAR_20->n_ino;
 if (VAR_19->va_fileid == 0)
  VAR_19->va_fileid = 2;
 VAR_19->va_blocksize = FUNC_0(VAR_21->sm_share)->vc_txmax;
 VAR_19->va_mtime = VAR_20->n_mtime;
 VAR_19->va_atime = VAR_19->va_ctime = VAR_19->va_mtime;
 VAR_19->va_gen = VAR_15;
 if (VAR_20->n_dosattr & VAR_4)
  VAR_19->va_flags |= VAR_11;
 if (VAR_20->n_dosattr & VAR_6)
  VAR_19->va_flags |= VAR_13;



 if ((VAR_18->v_type != VAR_14) && (VAR_20->n_dosattr & VAR_3))
  VAR_19->va_flags |= VAR_10;
 VAR_19->va_rdev = VAR_2;
 VAR_19->va_bytes = VAR_19->va_size;
 VAR_19->va_filerev = 0;
 VAR_19->va_vaflags = 0;
 return 0;
}
