
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int* td_retval; int td_ucred; TYPE_3__* td_proc; } ;
struct nameidata {struct vnode* ni_vp; int ni_filecaps; } ;
struct filecaps {int fc_fcntls; int fc_rights; } ;
struct file {int f_flag; int f_seqcount; int * f_ops; struct vnode* f_vnode; } ;
struct TYPE_6__ {int flags; int fd; } ;
struct cloudabi_sys_file_open_args {int oflags; TYPE_1__ dirfd; int path_len; int path; int fds; } ;
typedef int fds ;
struct TYPE_9__ {int fs_rights_base; int fs_rights_inheriting; int fs_flags; } ;
typedef TYPE_4__ cloudabi_fdstat_t ;
typedef int cap_rights_t ;
struct TYPE_8__ {TYPE_2__* p_fd; } ;
struct TYPE_7__ {int fd_cmask; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_33 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char*,int ,int *,struct thread*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_43 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int*,int*) ;
 int FUNC_9 (int ,TYPE_4__*,int) ;
 int FUNC_10 (int ,int ,char**) ;
 int FUNC_11 (struct thread*,struct file**) ;
 int FUNC_12 (struct file*,struct thread*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct file*,int,int ,struct vnode*,int *) ;
 int FUNC_15 (struct thread*,struct file*,int*,int,struct filecaps*) ;
 int FUNC_16 (struct file*,int ,int ,struct thread*) ;
 int FUNC_17 (struct nameidata*,int*,int,struct file*) ;
 int VAR_44 ;

int
FUNC_18(struct thread *VAR_45,
    struct cloudabi_sys_file_open_args *VAR_46)
{
 cloudabi_fdstat_t VAR_47;
 cap_rights_t VAR_48;
 struct filecaps VAR_49 = {};
 struct nameidata VAR_50;
 struct file *VAR_51;
 struct vnode *VAR_52;
 char *VAR_53;
 int VAR_54, VAR_55, VAR_56;
 bool VAR_57, VAR_58;

 VAR_54 = FUNC_9(VAR_46->fds, &VAR_47, sizeof(VAR_47));
 if (VAR_54 != 0)
  return (VAR_54);


 VAR_54 = FUNC_6(
     VAR_47.fs_rights_base | VAR_47.fs_rights_inheriting, &VAR_48);
 if (VAR_54 != 0)
  return (VAR_54);
 FUNC_4(&VAR_48, VAR_4);


 VAR_57 = (VAR_47.fs_rights_base & (VAR_17 |
     VAR_20 | VAR_22)) != 0;
 VAR_58 = (VAR_47.fs_rights_base & (VAR_16 |
     VAR_18 | VAR_19 |
     VAR_21)) != 0;
 VAR_56 = VAR_58 ? VAR_57 ? VAR_30 | VAR_31 : VAR_31 : VAR_30;


 if ((VAR_46->oflags & VAR_12) != 0) {
  VAR_56 |= VAR_35;
  FUNC_4(&VAR_48, VAR_0);
 }
 if ((VAR_46->oflags & VAR_13) != 0)
  VAR_56 |= VAR_36;
 if ((VAR_46->oflags & VAR_14) != 0)
  VAR_56 |= VAR_37;
 if ((VAR_46->oflags & VAR_15) != 0) {
  VAR_56 |= VAR_41;
  FUNC_4(&VAR_48, VAR_3);
 }
 if ((VAR_47.fs_flags & VAR_6) != 0)
  VAR_56 |= VAR_34;
 if ((VAR_47.fs_flags & VAR_8) != 0)
  VAR_56 |= VAR_39;
 if ((VAR_47.fs_flags & (VAR_10 | VAR_7 |
     VAR_9)) != 0) {
  VAR_56 |= VAR_40;
  FUNC_4(&VAR_48, VAR_2);
 }
 if ((VAR_46->dirfd.flags & VAR_11) == 0)
  VAR_56 |= VAR_38;
 if (VAR_58 && (VAR_56 & (VAR_34 | VAR_41)) == 0)
  FUNC_4(&VAR_48, VAR_5);


 VAR_54 = FUNC_11(VAR_45, &VAR_51);
 if (VAR_54 != 0)
  return (VAR_54);
 VAR_51->f_flag = VAR_56 & VAR_28;


 VAR_54 = FUNC_10(VAR_46->path, VAR_46->path_len, &VAR_53);
 if (VAR_54 != 0) {
  FUNC_12(VAR_51, VAR_45);
  return (VAR_54);
 }
 FUNC_1(&VAR_50, VAR_32, VAR_29, VAR_42, VAR_53, VAR_46->dirfd.fd,
     &VAR_48, VAR_45);
 VAR_54 = FUNC_17(&VAR_50, &VAR_56, 0777 & ~VAR_45->td_proc->p_fd->fd_cmask, VAR_51);
 FUNC_7(VAR_53);
 if (VAR_54 != 0) {

  if (VAR_54 == VAR_26 && VAR_51->f_ops != &VAR_43)
   goto success;





  if (VAR_54 == VAR_25)
   VAR_54 = VAR_24;
  FUNC_12(VAR_51, VAR_45);
  return (VAR_54);
 }
 FUNC_0(&VAR_50, VAR_33);
 FUNC_13(&VAR_50.ni_filecaps);
 VAR_51->f_vnode = VAR_52 = VAR_50.ni_vp;


 if (VAR_51->f_ops == &VAR_43) {
  VAR_51->f_seqcount = 1;
  FUNC_14(VAR_51, (VAR_56 & VAR_28) | (VAR_51->f_flag & VAR_27),
      VAR_23, VAR_52, &VAR_44);
 }
 FUNC_2(VAR_52, 0);


 if (VAR_56 & VAR_41) {
  VAR_54 = FUNC_16(VAR_51, 0, VAR_45->td_ucred, VAR_45);
  if (VAR_54 != 0) {
   FUNC_12(VAR_51, VAR_45);
   return (VAR_54);
  }
 }

success:

 FUNC_8(FUNC_5(VAR_51),
     &VAR_47.fs_rights_base, &VAR_47.fs_rights_inheriting);
 FUNC_6(VAR_47.fs_rights_base | VAR_47.fs_rights_inheriting,
     &VAR_49.fc_rights);
 if (FUNC_3(&VAR_49.fc_rights))
  VAR_49.fc_fcntls = VAR_1;

 VAR_54 = FUNC_15(VAR_45, VAR_51, &VAR_55, VAR_56, &VAR_49);
 FUNC_12(VAR_51, VAR_45);
 if (VAR_54 != 0)
  return (VAR_54);
 VAR_45->td_retval[0] = VAR_55;
 return (0);
}
