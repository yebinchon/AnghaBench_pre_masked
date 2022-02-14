
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct vop_getattr_args {int a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct vattr {int va_mtime; int va_filerev; int va_bytes; int va_rdev; int va_flags; int va_gen; int va_ctime; int va_atime; int va_blocksize; int va_size; int va_fileid; int va_fsid; int va_gid; int va_uid; int va_nlink; int va_mode; int va_type; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {int n_flag; } ;
typedef int gid_t ;
struct TYPE_2__ {int accesscache_misses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int VAR_3 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 struct thread* VAR_4 ;
 scalar_t__ FUNC_6 (struct vnode*,struct vattr*) ;
 int FUNC_7 (struct vnode*,int ,struct thread*,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (struct vnode*,int *) ;
 int FUNC_9 (struct vnode**,struct nfsvattr*,struct vattr*,int *,int ,int ) ;
 int FUNC_10 (struct thread*,int,int ,int ) ;
 int FUNC_11 (struct vnode*,int ,struct thread*,struct nfsvattr*,int *) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int
FUNC_12(struct vop_getattr_args *VAR_8)
{
 struct vnode *VAR_9 = VAR_8->a_vp;
 struct thread *VAR_10 = VAR_4;
 struct nfsnode *VAR_11 = FUNC_5(VAR_9);
 int VAR_12 = 0;
 struct nfsvattr VAR_13;
 struct vattr *VAR_14 = VAR_8->a_vap;
 struct vattr VAR_15;




 FUNC_1(VAR_11);
 if (VAR_11->n_flag & (VAR_0 | VAR_3))
  VAR_11->n_flag |= VAR_1;
 FUNC_2(VAR_11);



 if (FUNC_6(VAR_9, &VAR_15) == 0) {
  VAR_14->va_type = VAR_15.va_type;
  VAR_14->va_mode = VAR_15.va_mode;
  VAR_14->va_nlink = VAR_15.va_nlink;
  VAR_14->va_uid = VAR_15.va_uid;
  VAR_14->va_gid = VAR_15.va_gid;
  VAR_14->va_fsid = VAR_15.va_fsid;
  VAR_14->va_fileid = VAR_15.va_fileid;
  VAR_14->va_size = VAR_15.va_size;
  VAR_14->va_blocksize = VAR_15.va_blocksize;
  VAR_14->va_atime = VAR_15.va_atime;
  VAR_14->va_mtime = VAR_15.va_mtime;
  VAR_14->va_ctime = VAR_15.va_ctime;
  VAR_14->va_gen = VAR_15.va_gen;
  VAR_14->va_flags = VAR_15.va_flags;
  VAR_14->va_rdev = VAR_15.va_rdev;
  VAR_14->va_bytes = VAR_15.va_bytes;
  VAR_14->va_filerev = VAR_15.va_filerev;




  FUNC_8(VAR_9, &VAR_14->va_mtime);
  return (0);
 }

 if (FUNC_3(VAR_9) && VAR_5 &&
     VAR_6 > 0) {
  FUNC_0(VAR_7);
  FUNC_7(VAR_9, VAR_2, VAR_10, VAR_8->a_cred, ((void*)0));
  if (FUNC_6(VAR_9, VAR_8->a_vap) == 0) {
   FUNC_8(VAR_9, &VAR_8->a_vap->va_mtime);
   return (0);
  }
 }
 VAR_12 = FUNC_11(VAR_9, VAR_8->a_cred, VAR_10, &VAR_13, ((void*)0));
 if (!VAR_12)
  VAR_12 = FUNC_9(&VAR_9, &VAR_13, VAR_14, ((void*)0), 0, 0);
 if (!VAR_12) {




  FUNC_8(VAR_9, &VAR_14->va_mtime);
 } else if (FUNC_4(VAR_9)) {
  VAR_12 = FUNC_10(VAR_10, VAR_12, (uid_t)0, (gid_t)0);
 }
 return (VAR_12);
}
