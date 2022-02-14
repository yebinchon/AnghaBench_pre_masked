
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct vop_create_args {struct vattr* a_vap; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_type; int va_mode; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_2__* td_proc; } ;
struct mount {int dummy; } ;
struct fuse_release_in {int flags; int fh; int umask; int mode; } ;
struct fuse_open_out {int open_flags; int attr_valid_nsec; int attr_valid; int attr; int fh; int nodeid; } ;
struct fuse_open_in {int flags; int fh; int umask; int mode; } ;
struct fuse_entry_out {int open_flags; int attr_valid_nsec; int attr_valid; int attr; int fh; int nodeid; } ;
struct fuse_dispatcher {int tick; struct fuse_release_in* indata; struct fuse_open_out* answ; } ;
struct fuse_data {int dummy; } ;
struct fuse_create_in {int flags; int fh; int umask; int mode; } ;
struct componentname {int cn_namelen; int cn_nameptr; struct ucred* cn_cred; struct thread* cn_thread; } ;
typedef int mode_t ;
typedef int fdi ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_6__ {int nid; } ;
struct TYPE_5__ {TYPE_1__* p_fd; } ;
struct TYPE_4__ {int fd_cmask; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct fuse_dispatcher*,int) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct fuse_dispatcher*) ;
 int FUNC_6 (struct fuse_dispatcher*,int) ;
 int FUNC_7 (struct fuse_dispatcher*,int,struct mount*,int ,struct thread*,struct ucred*) ;
 int FUNC_8 (struct fuse_dispatcher*,struct componentname*,struct vnode*,int ,struct thread*,struct ucred*,int ,int*) ;
 int FUNC_9 (struct fuse_dispatcher*) ;
 int FUNC_10 (struct mount*,int) ;
 int FUNC_11 (struct mount*,int) ;
 int FUNC_12 (struct vnode*,int ,int *,struct thread*,struct ucred*,struct fuse_open_out*) ;
 struct fuse_data* FUNC_13 (struct mount*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct vnode*,int *,int ,int ,int *) ;
 int FUNC_17 (struct fuse_open_out*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_18 (struct vnode*,struct vnode**,struct componentname*,struct vattr*) ;
 scalar_t__ FUNC_19 (struct vnode*) ;
 scalar_t__ FUNC_20 (struct fuse_data*,int,int) ;
 int FUNC_21 (struct vnode*) ;
 int FUNC_22 (struct mount*,struct fuse_open_out*,int ,struct vnode*,struct vnode**,struct componentname*,scalar_t__) ;
 int FUNC_23 (struct vnode*,int ,struct thread*) ;
 int FUNC_24 (char*,int ,int) ;
 struct mount* FUNC_25 (struct vnode*) ;

__attribute__((used)) static int
FUNC_26(struct vop_create_args *VAR_12)
{
 struct vnode *VAR_13 = VAR_12->a_dvp;
 struct vnode **VAR_14 = VAR_12->a_vpp;
 struct componentname *VAR_15 = VAR_12->a_cnp;
 struct vattr *VAR_16 = VAR_12->a_vap;
 struct thread *VAR_17 = VAR_15->cn_thread;
 struct ucred *VAR_18 = VAR_15->cn_cred;

 struct fuse_data *VAR_19;
 struct fuse_create_in *VAR_20;
 struct fuse_entry_out *VAR_21;
 struct fuse_open_out *VAR_22;
 struct fuse_dispatcher VAR_23, VAR_24;
 struct fuse_dispatcher *VAR_25 = &VAR_23;
 struct fuse_dispatcher *VAR_26 = ((void*)0);

 int VAR_27;

 struct mount *VAR_28 = FUNC_25(VAR_13);
 VAR_19 = FUNC_13(VAR_28);
 uint64_t VAR_29 = FUNC_2(VAR_13)->nid;
 mode_t VAR_30 = FUNC_1(VAR_16->va_type, VAR_16->va_mode);
 enum fuse_opcode VAR_31;
 int VAR_32;

 if (FUNC_19(VAR_13))
  return VAR_2;


 if (VAR_16->va_type == VAR_10)
  return FUNC_18(VAR_13, VAR_14, VAR_15, VAR_16);






 VAR_32 = VAR_8;

 FUNC_3(&VAR_23, sizeof(VAR_23));

 if (VAR_16->va_type != VAR_9)
  return (VAR_0);

 if (!FUNC_10(VAR_28, VAR_4) || VAR_16->va_type == VAR_10) {

  FUNC_8(VAR_25, VAR_15, VAR_13, VAR_29, VAR_17,
   VAR_18, VAR_30, &VAR_31);
 } else {

  size_t VAR_33;

  VAR_31 = VAR_4;
  FUNC_6(VAR_25, sizeof(*VAR_20) + VAR_15->cn_namelen + 1);
  FUNC_7(VAR_25, VAR_31, FUNC_25(VAR_13), VAR_29, VAR_17, VAR_18);
  VAR_20 = VAR_25->indata;
  VAR_20->mode = VAR_30;
  VAR_20->flags = VAR_7 | VAR_32;
  if (FUNC_20(VAR_19, 7, 12)) {
   VAR_33 = sizeof(*VAR_20);
   VAR_20->umask = VAR_17->td_proc->p_fd->fd_cmask;
  } else {
   VAR_33 = sizeof(struct fuse_open_in);
  }

  FUNC_24((char *)VAR_25->indata + VAR_33, VAR_15->cn_nameptr,
      VAR_15->cn_namelen);
  ((char *)VAR_25->indata)[VAR_33 + VAR_15->cn_namelen] = '\0';
 }

 VAR_27 = FUNC_9(VAR_25);

 if (VAR_27) {
  if (VAR_27 == VAR_1 && VAR_31 == VAR_4) {
   FUNC_11(VAR_28, VAR_4);
   FUNC_5(VAR_25);
   FUNC_8(VAR_25, VAR_15, VAR_13,
    VAR_29, VAR_17, VAR_18, VAR_30, &VAR_31);
   VAR_27 = FUNC_9(VAR_25);
  }
  if (VAR_27)
   goto out;
 }

 VAR_21 = VAR_25->answ;

 if ((VAR_27 = FUNC_17(VAR_21, VAR_16->va_type))) {
  goto out;
 }

 if (VAR_31 == VAR_4) {
  VAR_22 = (struct fuse_open_out*)(VAR_21 + 1);
 } else {

  struct fuse_open_in *VAR_34;

  VAR_26 = &VAR_24;
  FUNC_6(VAR_26, sizeof(*VAR_34));
  FUNC_7(VAR_26, VAR_5, FUNC_25(VAR_13), VAR_21->nodeid, VAR_17,
   VAR_18);
  VAR_34 = VAR_26->indata;
  VAR_34->flags = VAR_32;
  VAR_27 = FUNC_9(VAR_26);
  if (VAR_27)
   goto out;
  VAR_22 = VAR_26->answ;
 }
 VAR_27 = FUNC_22(VAR_28, VAR_21, VAR_21->nodeid, VAR_13, VAR_14, VAR_15, VAR_16->va_type);
 if (VAR_27) {
  struct fuse_release_in *VAR_35;
  uint64_t VAR_36 = VAR_21->nodeid;
  uint64_t VAR_37 = VAR_22->fh;

  FUNC_6(VAR_25, sizeof(*VAR_35));
  FUNC_7(VAR_25, VAR_6, VAR_28, VAR_36, VAR_17, VAR_18);
  VAR_35 = VAR_25->indata;
  VAR_35->fh = VAR_37;
  VAR_35->flags = VAR_32;
  FUNC_14(VAR_25->tick, VAR_11);
  FUNC_15(VAR_25->tick, 0);
  goto out;
 }
 FUNC_0(*VAR_14, "fuse_vnop_create");
 FUNC_16(*VAR_14, &VAR_21->attr, VAR_21->attr_valid,
  VAR_21->attr_valid_nsec, ((void*)0));

 FUNC_12(*VAR_14, VAR_3, ((void*)0), VAR_17, VAR_18, VAR_22);
 FUNC_23(*VAR_14, VAR_22->open_flags, VAR_17);




 FUNC_21(VAR_13);
 FUNC_4(VAR_13);

out:
 if (VAR_26)
  FUNC_5(VAR_26);
 FUNC_5(VAR_25);
 return VAR_27;
}
