
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct ucred {int dummy; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {struct timespec va_mtime; struct timespec va_ctime; int va_size; } ;
struct fuse_vnode_data {int flag; TYPE_1__ cached_attrs; } ;
struct fuse_getattr_in {scalar_t__ getattr_flags; } ;
struct fuse_dispatcher {scalar_t__ answ; struct fuse_getattr_in* indata; } ;
struct TYPE_4__ {int mtimensec; int mtime; int ctimensec; int ctime; int size; int mode; } ;
struct fuse_attr_out {int attr_valid_nsec; int attr_valid; TYPE_2__ attr; } ;
typedef int off_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct fuse_vnode_data* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct fuse_dispatcher*) ;
 int FUNC_3 (struct fuse_dispatcher*,int) ;
 int FUNC_4 (struct fuse_dispatcher*,int ,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_5 (struct fuse_dispatcher*) ;
 int FUNC_6 (struct vnode*,TYPE_2__*,int ,int ,struct vattr*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;

int
FUNC_9(struct vnode *VAR_5, struct vattr *VAR_6,
 struct ucred *VAR_7, struct thread *VAR_8)
{
 struct fuse_dispatcher VAR_9;
 struct fuse_vnode_data *VAR_10 = FUNC_1(VAR_5);
 struct fuse_getattr_in *VAR_11;
 struct fuse_attr_out *VAR_12;
 off_t VAR_13 = VAR_10->cached_attrs.va_size;
 struct timespec VAR_14 = VAR_10->cached_attrs.va_ctime;
 struct timespec VAR_15 = VAR_10->cached_attrs.va_mtime;
 enum vtype VAR_16;
 int VAR_17;

 FUNC_3(&VAR_9, sizeof(*VAR_11));
 FUNC_4(&VAR_9, VAR_4, VAR_5, VAR_8, VAR_7);
 VAR_11 = VAR_9.indata;





 VAR_11->getattr_flags = 0;
 if ((VAR_17 = FUNC_5(&VAR_9))) {
  if (VAR_17 == VAR_0)
   FUNC_7(VAR_5);
  goto out;
 }

 VAR_12 = (struct fuse_attr_out *)VAR_9.answ;
 VAR_16 = FUNC_0(VAR_12->attr.mode);
 if (VAR_10->flag & VAR_3)
  VAR_12->attr.size = VAR_13;
 if (VAR_10->flag & VAR_1) {
  VAR_12->attr.ctime = VAR_14.tv_sec;
  VAR_12->attr.ctimensec = VAR_14.tv_nsec;
 }
 if (VAR_10->flag & VAR_2) {
  VAR_12->attr.mtime = VAR_15.tv_sec;
  VAR_12->attr.mtimensec = VAR_15.tv_nsec;
 }
 FUNC_6(VAR_5, &VAR_12->attr, VAR_12->attr_valid,
  VAR_12->attr_valid_nsec, VAR_6);
 if (VAR_16 != FUNC_8(VAR_5)) {
  FUNC_7(VAR_5);
  VAR_17 = VAR_0;
 }

out:
 FUNC_2(&VAR_9);
 return VAR_17;
}
