
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u_short ;
struct vnode {TYPE_3__* v_mount; } ;
struct TYPE_13__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_22__ {int tv_nsec; int tv_sec; } ;
struct TYPE_20__ {int tv_nsec; int tv_sec; } ;
struct TYPE_18__ {int tv_nsec; int tv_sec; } ;
struct vattr {scalar_t__ va_fsid; int va_type; scalar_t__ va_size; int va_bytes; int va_gen; int va_flags; int va_blocksize; TYPE_11__ va_birthtime; TYPE_9__ va_ctime; TYPE_7__ va_mtime; TYPE_5__ va_atime; int va_rdev; int va_gid; int va_uid; int va_nlink; int va_mode; int va_fileid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_12__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_21__ {int tv_nsec; int tv_sec; } ;
struct TYPE_19__ {int tv_nsec; int tv_sec; } ;
struct TYPE_17__ {int tv_nsec; int tv_sec; } ;
struct stat {scalar_t__ st_dev; scalar_t__ st_size; int st_blocks; int st_gen; int st_flags; int st_blksize; TYPE_10__ st_birthtim; TYPE_8__ st_ctim; TYPE_6__ st_mtim; TYPE_4__ st_atim; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; } ;
struct TYPE_14__ {scalar_t__* val; } ;
struct TYPE_15__ {TYPE_1__ f_fsid; } ;
struct TYPE_16__ {TYPE_2__ mnt_stat; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;





 scalar_t__ VAR_14 ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;


 int FUNC_2 (struct stat*,int) ;
 int FUNC_3 (struct ucred*,struct ucred*,struct vnode*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct thread*,int ) ;

int
FUNC_6(struct vnode *VAR_15, struct stat *VAR_16, struct ucred *VAR_17,
    struct ucred *VAR_18, struct thread *VAR_19)
{
 struct vattr VAR_20;
 struct vattr *VAR_21;
 int VAR_22;
 u_short VAR_23;

 FUNC_0(VAR_15);






 VAR_21 = &VAR_20;






 VAR_21->va_birthtime.tv_sec = -1;
 VAR_21->va_birthtime.tv_nsec = 0;
 VAR_21->va_fsid = VAR_14;
 VAR_21->va_rdev = VAR_2;

 VAR_22 = FUNC_1(VAR_15, VAR_21, VAR_17);
 if (VAR_22)
  return (VAR_22);




 FUNC_2(VAR_16, sizeof *VAR_16);




 if (VAR_21->va_fsid != VAR_14)
  VAR_16->st_dev = VAR_21->va_fsid;
 else
  VAR_16->st_dev = VAR_15->v_mount->mnt_stat.f_fsid.val[0];
 VAR_16->st_ino = VAR_21->va_fileid;
 VAR_23 = VAR_21->va_mode;
 switch (VAR_21->va_type) {
 case 129:
  VAR_23 |= VAR_12;
  break;
 case 132:
  VAR_23 |= VAR_9;
  break;
 case 134:
  VAR_23 |= VAR_7;
  break;
 case 133:
  VAR_23 |= VAR_8;
  break;
 case 130:
  VAR_23 |= VAR_11;
  break;
 case 128:
  VAR_23 |= VAR_13;
  break;
 case 131:
  VAR_23 |= VAR_10;
  break;
 default:
  return (VAR_0);
 }
 VAR_16->st_mode = VAR_23;
 VAR_16->st_nlink = VAR_21->va_nlink;
 VAR_16->st_uid = VAR_21->va_uid;
 VAR_16->st_gid = VAR_21->va_gid;
 VAR_16->st_rdev = VAR_21->va_rdev;
 if (VAR_21->va_size > VAR_3)
  return (VAR_1);
 VAR_16->st_size = VAR_21->va_size;
 VAR_16->st_atim.tv_sec = VAR_21->va_atime.tv_sec;
 VAR_16->st_atim.tv_nsec = VAR_21->va_atime.tv_nsec;
 VAR_16->st_mtim.tv_sec = VAR_21->va_mtime.tv_sec;
 VAR_16->st_mtim.tv_nsec = VAR_21->va_mtime.tv_nsec;
 VAR_16->st_ctim.tv_sec = VAR_21->va_ctime.tv_sec;
 VAR_16->st_ctim.tv_nsec = VAR_21->va_ctime.tv_nsec;
 VAR_16->st_birthtim.tv_sec = VAR_21->va_birthtime.tv_sec;
 VAR_16->st_birthtim.tv_nsec = VAR_21->va_birthtime.tv_nsec;
 VAR_16->st_blksize = FUNC_4(VAR_4, VAR_21->va_blocksize);

 VAR_16->st_flags = VAR_21->va_flags;
 if (FUNC_5(VAR_19, VAR_5))
  VAR_16->st_gen = 0;
 else
  VAR_16->st_gen = VAR_21->va_gen;

 VAR_16->st_blocks = VAR_21->va_bytes / VAR_6;
 return (0);
}
