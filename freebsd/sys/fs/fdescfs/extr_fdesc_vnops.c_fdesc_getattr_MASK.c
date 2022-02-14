
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getattr_args {struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int v_vflag; int v_type; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct vattr {int va_mode; int va_nlink; int va_type; int va_fileid; int va_rdev; void* va_size; scalar_t__ va_filerev; scalar_t__ va_bytes; scalar_t__ va_flags; scalar_t__ va_gen; TYPE_1__ va_mtime; TYPE_1__ va_ctime; TYPE_1__ va_atime; void* va_blocksize; scalar_t__ va_gid; scalar_t__ va_uid; } ;
struct timeval {int tv_sec; } ;
struct TYPE_4__ {int fd_type; int fd_ix; } ;


 void* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_0 (struct vnode*) ;
 int VAR_11 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct vop_getattr_args *VAR_12)
{
 struct vnode *VAR_13 = VAR_12->a_vp;
 struct vattr *VAR_14 = VAR_12->a_vap;
 struct timeval VAR_15;

 FUNC_1(&VAR_15);
 VAR_14->va_mode = VAR_4|VAR_7|VAR_2|VAR_5|VAR_3|VAR_6;
 VAR_14->va_fileid = FUNC_0(VAR_13)->fd_ix;
 VAR_14->va_uid = 0;
 VAR_14->va_gid = 0;
 VAR_14->va_blocksize = VAR_0;
 VAR_14->va_atime.tv_sec = VAR_15.tv_sec;
 VAR_14->va_atime.tv_nsec = 0;
 VAR_14->va_mtime = VAR_14->va_atime;
 VAR_14->va_ctime = VAR_14->va_mtime;
 VAR_14->va_gen = 0;
 VAR_14->va_flags = 0;
 VAR_14->va_bytes = 0;
 VAR_14->va_filerev = 0;

 switch (FUNC_0(VAR_13)->fd_type) {
 case 128:
  VAR_14->va_type = VAR_9;
  VAR_14->va_nlink = 2;
  VAR_14->va_size = VAR_0;
  VAR_14->va_rdev = VAR_1;
  break;

 case 129:
  VAR_14->va_type = (VAR_13->v_vflag & VAR_11) == 0 ? VAR_8 : VAR_10;
  VAR_14->va_nlink = 1;
  VAR_14->va_size = 0;
  VAR_14->va_rdev = FUNC_2(0, VAR_14->va_fileid);
  break;

 default:
  FUNC_3("fdesc_getattr");
  break;
 }

 VAR_13->v_type = VAR_14->va_type;
 return (0);
}
