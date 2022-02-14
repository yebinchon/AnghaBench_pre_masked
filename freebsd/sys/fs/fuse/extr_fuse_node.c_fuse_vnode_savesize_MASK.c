
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct TYPE_2__ {int va_size; } ;
struct fuse_vnode_data {int flag; TYPE_1__ cached_attrs; } ;
struct fuse_setattr_in {int valid; int fh; int size; } ;
struct fuse_filehandle {int fh_id; } ;
struct fuse_dispatcher {struct fuse_setattr_in* indata; } ;
typedef int pid_t ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 struct fuse_vnode_data* FUNC_2 (struct vnode*) ;
 struct thread* VAR_9 ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct fuse_dispatcher*,int) ;
 int FUNC_5 (struct fuse_dispatcher*,int ,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_6 (struct fuse_dispatcher*) ;
 int FUNC_7 (struct vnode*,int ,struct fuse_filehandle**,struct ucred*,int ) ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ FUNC_11 (struct vnode*) ;

int
FUNC_12(struct vnode *VAR_10, struct ucred *VAR_11, pid_t VAR_12)
{
 struct fuse_vnode_data *VAR_13 = FUNC_2(VAR_10);
 struct thread *VAR_14 = VAR_9;
 struct fuse_filehandle *VAR_15 = ((void*)0);
 struct fuse_dispatcher VAR_16;
 struct fuse_setattr_in *VAR_17;
 int VAR_18 = 0;

 FUNC_0(VAR_10, "fuse_io_extend");

 if (FUNC_8(VAR_10)) {
  return VAR_0;
 }
 if (FUNC_11(VAR_10) == VAR_8) {
  return VAR_1;
 }
 if (FUNC_9(FUNC_10(VAR_10))) {
  return VAR_2;
 }
 if (VAR_11 == ((void*)0)) {
  VAR_11 = VAR_14->td_ucred;
 }
 FUNC_4(&VAR_16, sizeof(*VAR_17));
 FUNC_5(&VAR_16, VAR_6, VAR_10, VAR_14, VAR_11);
 VAR_17 = VAR_16.indata;
 VAR_17->valid = 0;


 FUNC_1((VAR_13->flag & VAR_5) != 0);
 VAR_17->size = VAR_13->cached_attrs.va_size;
 VAR_17->valid |= VAR_4;

 FUNC_7(VAR_10, VAR_7, &VAR_15, VAR_11, VAR_12);
 if (VAR_15) {
  VAR_17->fh = VAR_15->fh_id;
  VAR_17->valid |= VAR_3;
 }
 VAR_18 = FUNC_6(&VAR_16);
 FUNC_3(&VAR_16);
 if (VAR_18 == 0)
  VAR_13->flag &= ~VAR_5;

 return VAR_18;
}
