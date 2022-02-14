
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vnode {int dummy; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct vattr {scalar_t__ va_size; int va_mode; scalar_t__ va_blocksize; int va_bytes; scalar_t__ va_flags; int va_type; TYPE_5__ va_ctime; TYPE_4__ va_mtime; TYPE_3__ va_atime; int va_rdev; int va_gid; int va_uid; int va_nlink; int va_fileid; int va_fsid; } ;
struct TYPE_6__ {int * val; } ;
struct TYPE_7__ {TYPE_1__ f_fsid; } ;
struct mount {TYPE_2__ mnt_stat; } ;
struct fuse_vnode_data {struct vattr cached_attrs; int attr_cache_timeout; } ;
struct fuse_data {int dummy; } ;
struct fuse_attr {scalar_t__ size; int mode; scalar_t__ blksize; int blocks; int ctimensec; int ctime; int mtimensec; int mtime; int atimensec; int atime; int rdev; int gid; int uid; int nlink; int ino; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fuse_vnode_data* FUNC_2 (struct vnode*) ;
 struct fuse_data* FUNC_3 (struct mount*) ;
 scalar_t__ FUNC_4 (struct fuse_data*,int,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (struct vnode*,scalar_t__) ;
 int FUNC_7 (struct vattr*,struct vattr*,int) ;
 int FUNC_8 (struct vattr*) ;
 scalar_t__ FUNC_9 (struct vnode*) ;
 struct mount* FUNC_10 (struct vnode*) ;

void
FUNC_11(struct vnode *VAR_3, struct fuse_attr *VAR_4,
 uint64_t VAR_5, uint32_t VAR_6, struct vattr *VAR_7)
{
 struct mount *VAR_8;
 struct fuse_vnode_data *VAR_9;
 struct fuse_data *VAR_10;
 struct vattr *VAR_11;

 VAR_8 = FUNC_10(VAR_3);
 VAR_9 = FUNC_2(VAR_3);
 VAR_10 = FUNC_3(VAR_8);

 FUNC_0(VAR_3, "fuse_internal_cache_attrs");

 FUNC_5(VAR_5, VAR_6,
  &VAR_9->attr_cache_timeout);


 if (FUNC_9(VAR_3) && VAR_4->size != VAR_9->cached_attrs.va_size) {
  (void)FUNC_6(VAR_3, VAR_4->size);
  VAR_9->cached_attrs.va_size = VAR_4->size;
 }

 if (VAR_5 > 0 || VAR_6 > 0)
  VAR_11 = &(VAR_9->cached_attrs);
 else if (VAR_7 != ((void*)0))
  VAR_11 = VAR_7;
 else
  return;

 FUNC_8(VAR_11);
 VAR_11->va_fsid = VAR_8->mnt_stat.f_fsid.val[0];
 VAR_11->va_fileid = VAR_4->ino;
 VAR_11->va_mode = VAR_4->mode & ~VAR_2;
 VAR_11->va_nlink = VAR_4->nlink;
 VAR_11->va_uid = VAR_4->uid;
 VAR_11->va_gid = VAR_4->gid;
 VAR_11->va_rdev = VAR_4->rdev;
 VAR_11->va_size = VAR_4->size;

 VAR_11->va_atime.tv_sec = VAR_4->atime;
 VAR_11->va_atime.tv_nsec = VAR_4->atimensec;
 VAR_11->va_mtime.tv_sec = VAR_4->mtime;
 VAR_11->va_mtime.tv_nsec = VAR_4->mtimensec;
 VAR_11->va_ctime.tv_sec = VAR_4->ctime;
 VAR_11->va_ctime.tv_nsec = VAR_4->ctimensec;
 if (FUNC_4(VAR_10, 7, 9) && VAR_4->blksize > 0)
  VAR_11->va_blocksize = VAR_4->blksize;
 else
  VAR_11->va_blocksize = VAR_0;
 VAR_11->va_type = FUNC_1(VAR_4->mode);
 VAR_11->va_bytes = VAR_4->blocks * VAR_1;
 VAR_11->va_flags = 0;

 if (VAR_7 != VAR_11 && VAR_7 != ((void*)0))
  FUNC_7(VAR_7, VAR_11, sizeof(*VAR_7));
}
