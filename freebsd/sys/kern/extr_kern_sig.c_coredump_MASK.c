
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_vflag; } ;
struct vattr {int va_nlink; scalar_t__ va_uid; int va_flags; scalar_t__ va_size; } ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {struct ucred* td_ucred; struct proc* td_proc; } ;
struct sbuf {int dummy; } ;
struct proc {int p_flag; int p_flag2; int p_textvp; TYPE_1__* p_sysent; int p_acflag; int p_sig; int p_pid; int p_comm; struct thread* p_singlethread; } ;
struct flock {int l_type; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
typedef scalar_t__ off_t ;
typedef int caddr_t ;
struct TYPE_2__ {int (* sv_coredump ) (struct thread*,struct vnode*,scalar_t__,int ) ;} ;


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
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (struct vattr*) ;
 scalar_t__ FUNC_5 (struct vnode*,int ,int ,struct flock*,int ) ;
 scalar_t__ FUNC_6 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_7 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_8 (struct vnode*,int ) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (struct proc*,int ,int ) ;
 int FUNC_10 (struct thread*,char*,int) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_11 (int ,scalar_t__,int ,struct thread*,int ,int ,struct vnode**,char**) ;
 int FUNC_12 (char*,char*,char*,int ) ;
 int FUNC_13 (struct sbuf*,char*) ;
 int VAR_29 ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ FUNC_15 (struct thread*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_16 (struct thread*,int ) ;
 char* FUNC_17 (int ,int ,int ) ;
 scalar_t__ FUNC_18 (struct proc*,int ) ;
 int FUNC_19 (struct sbuf*) ;
 int FUNC_20 (struct sbuf*) ;
 scalar_t__ FUNC_21 (struct sbuf*) ;
 struct sbuf* FUNC_22 () ;
 int FUNC_23 (struct sbuf*,char*) ;
 int FUNC_24 (struct sbuf*,char) ;
 scalar_t__ VAR_30 ;
 int FUNC_25 (struct thread*,struct vnode*,scalar_t__,int ) ;
 int VAR_31 ;
 int FUNC_26 (struct vnode*,int ,struct ucred*,struct thread*) ;
 scalar_t__ FUNC_27 (struct thread*,int ,char**,char**) ;
 int FUNC_28 (struct vnode*,int) ;
 int FUNC_29 (struct vnode*,void*) ;
 void* FUNC_30 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_31(struct thread *VAR_32)
{
 struct proc *VAR_33 = VAR_32->td_proc;
 struct ucred *VAR_34 = VAR_32->td_ucred;
 struct vnode *VAR_35;
 struct flock VAR_36;
 struct vattr VAR_37;
 int VAR_38, VAR_39, VAR_40;
 char *VAR_41;
 void *VAR_42;
 off_t VAR_43;
 char *VAR_44, *VAR_45 = ((void*)0);
 struct sbuf *VAR_46;

 FUNC_2(VAR_33, VAR_12);
 FUNC_0((VAR_33->p_flag & VAR_17) == 0 || VAR_33->p_singlethread == VAR_32);
 FUNC_9(VAR_33, VAR_22, 0);

 if (!VAR_29 || (!VAR_31 && (VAR_33->p_flag & VAR_18) != 0) ||
     (VAR_33->p_flag2 & VAR_16) != 0) {
  FUNC_3(VAR_33);
  return (VAR_1);
 }
 VAR_43 = (off_t)FUNC_16(VAR_32, VAR_20);
 if (VAR_43 == 0 || FUNC_18(VAR_33, VAR_19) == 0) {
  FUNC_3(VAR_33);
  return (VAR_2);
 }
 FUNC_3(VAR_33);

 VAR_38 = FUNC_11(VAR_33->p_comm, VAR_34->cr_uid, VAR_33->p_pid, VAR_32,
     VAR_27, VAR_33->p_sig, &VAR_35, &VAR_41);
 if (VAR_38 != 0)
  return (VAR_38);





 if (VAR_35->v_type != VAR_25 || FUNC_6(VAR_35, &VAR_37, VAR_34) != 0 ||
     VAR_37.va_nlink != 1 || (VAR_35->v_vflag & VAR_26) != 0 ||
     VAR_37.va_uid != VAR_34->cr_uid) {
  FUNC_8(VAR_35, 0);
  VAR_38 = VAR_1;
  goto out;
 }

 FUNC_8(VAR_35, 0);


 VAR_42 = FUNC_30(VAR_35, 0, VAR_15);

 VAR_36.l_whence = VAR_21;
 VAR_36.l_start = 0;
 VAR_36.l_len = 0;
 VAR_36.l_type = VAR_8;
 VAR_40 = (FUNC_5(VAR_35, (caddr_t)VAR_33, VAR_6, &VAR_36, VAR_5) == 0);

 FUNC_4(&VAR_37);
 VAR_37.va_size = 0;
 if (VAR_30)
  VAR_37.va_flags = VAR_23;
 FUNC_28(VAR_35, VAR_9 | VAR_10);
 FUNC_7(VAR_35, &VAR_37, VAR_34);
 FUNC_8(VAR_35, 0);
 FUNC_1(VAR_33);
 VAR_33->p_acflag |= VAR_0;
 FUNC_3(VAR_33);

 if (VAR_33->p_sysent->sv_coredump != ((void*)0)) {
  VAR_38 = VAR_33->p_sysent->sv_coredump(VAR_32, VAR_35, VAR_43, 0);
 } else {
  VAR_38 = VAR_3;
 }

 if (VAR_40) {
  VAR_36.l_type = VAR_7;
  FUNC_5(VAR_35, (caddr_t)VAR_33, VAR_7, &VAR_36, VAR_5);
 }
 FUNC_29(VAR_35, VAR_42);





 if (VAR_38 != 0 || VAR_28 == 0)
  goto out;
 VAR_46 = FUNC_22();
 if (FUNC_27(VAR_32, VAR_33->p_textvp, &VAR_44, &VAR_45) != 0)
  goto out2;
 FUNC_23(VAR_46, "comm=\"");
 FUNC_13(VAR_46, VAR_44);
 FUNC_14(VAR_45, VAR_13);
 FUNC_23(VAR_46, "\" core=\"");






 if (VAR_41[0] != '/') {
  VAR_44 = FUNC_17(VAR_11, VAR_13, VAR_14);
  if (FUNC_15(VAR_32, VAR_44, VAR_24, VAR_11, VAR_11) != 0) {
   FUNC_14(VAR_44, VAR_13);
   goto out2;
  }
  FUNC_13(VAR_46, VAR_44);
  FUNC_14(VAR_44, VAR_13);
  FUNC_24(VAR_46, '/');
 }
 FUNC_13(VAR_46, VAR_41);
 FUNC_23(VAR_46, "\"");
 if (FUNC_21(VAR_46) == 0)
  FUNC_12("kernel", "signal", "coredump", FUNC_19(VAR_46));
out2:
 FUNC_20(VAR_46);
out:
 VAR_39 = FUNC_26(VAR_35, VAR_4, VAR_34, VAR_32);
 if (VAR_38 == 0)
  VAR_38 = VAR_39;



 FUNC_14(VAR_41, VAR_13);
 return (VAR_38);
}
