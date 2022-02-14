
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_quad_t ;
struct vop_advlock_args {int a_flags; int a_op; scalar_t__ a_id; int a_fl; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_iflag; int v_lockf; int v_mount; } ;
struct vattr {scalar_t__ va_filerev; int va_mtime; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct proc {struct ucred* p_ucred; } ;
struct nfsnode {int n_flag; scalar_t__ n_change; int n_size; int n_mtime; scalar_t__ n_attrstamp; } ;
struct TYPE_2__ {int nm_flag; } ;


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
 int FUNC_0 (struct vnode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_18 ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (struct vnode*,int ) ;
 scalar_t__ FUNC_5 (struct vnode*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__* FUNC_6 (int ) ;
 int VAR_23 ;
 int FUNC_7 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ VAR_24 ;
 struct nfsnode* FUNC_8 (struct vnode*) ;
 int VAR_25 ;
 struct thread* VAR_26 ;
 int FUNC_9 (struct vop_advlock_args*,int *,int ) ;
 int FUNC_10 (struct vnode*,int ,struct thread*,int,int ) ;
 int FUNC_11 (struct vnode*,int ,struct thread*,int) ;
 int FUNC_12 (struct vop_advlock_args*) ;
 int FUNC_13 (int,int,char*) ;
 scalar_t__ FUNC_14 (struct vnode*,int ,struct ucred*,struct thread*,scalar_t__,int) ;
 int FUNC_15 (struct vnode*,int ,int ,int ,int ,struct ucred*,struct thread*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_16(struct vop_advlock_args *VAR_27)
{
 struct vnode *VAR_28 = VAR_27->a_vp;
 struct ucred *VAR_29;
 struct nfsnode *VAR_30 = FUNC_8(VAR_27->a_vp);
 struct proc *VAR_31 = (struct proc *)VAR_27->a_id;
 struct thread *VAR_32 = VAR_26;
 struct vattr VAR_33;
 int VAR_34, VAR_35;
 u_quad_t VAR_36;

 VAR_35 = FUNC_3(VAR_28, VAR_14);
 if (VAR_35 != 0)
  return (VAR_2);
 if (FUNC_5(VAR_28) && (VAR_27->a_flags & (VAR_8 | VAR_7)) != 0) {
  if (VAR_28->v_type != VAR_24) {
   VAR_35 = VAR_4;
   goto out;
  }
  if ((VAR_27->a_flags & VAR_8) != 0)
   VAR_29 = VAR_31->p_ucred;
  else
   VAR_29 = VAR_32->td_ucred;
  FUNC_3(VAR_28, VAR_15 | VAR_13);
  if (VAR_28->v_iflag & VAR_23) {
   VAR_35 = VAR_2;
   goto out;
  }






  if (VAR_27->a_op == VAR_10 &&
      FUNC_14(VAR_28, VAR_27->a_fl, VAR_29, VAR_32, VAR_27->a_id,
      VAR_27->a_flags))
   (void) FUNC_10(VAR_28, VAR_16, VAR_32, 1, 0);





  do {
   VAR_34 = FUNC_15(VAR_28, VAR_30->n_size, VAR_27->a_op,
       VAR_27->a_fl, 0, VAR_29, VAR_32, VAR_27->a_id, VAR_27->a_flags);
   if (VAR_34 == VAR_17 && (VAR_27->a_flags & VAR_11) &&
       VAR_27->a_op == VAR_9) {
    FUNC_4(VAR_28, 0);
    VAR_35 = FUNC_13(VAR_22 | VAR_21, VAR_34,
        "ncladvl");
    if (VAR_35)
     return (VAR_3);
    FUNC_3(VAR_28, VAR_12 | VAR_13);
    if (VAR_28->v_iflag & VAR_23) {
     VAR_35 = VAR_2;
     goto out;
    }
   }
  } while (VAR_34 == VAR_17 && (VAR_27->a_flags & VAR_11) &&
       VAR_27->a_op == VAR_9);
  if (VAR_34 == VAR_17) {
   VAR_35 = VAR_1;
   goto out;
  } else if (VAR_34 == VAR_4 || VAR_34 == VAR_2 || VAR_34 == VAR_3) {
   VAR_35 = VAR_34;
   goto out;
  } else if (VAR_34 != 0) {
   VAR_35 = VAR_0;
   goto out;
  }






  if (VAR_27->a_op == VAR_9) {
   if ((VAR_30->n_flag & VAR_20) == 0) {
    VAR_30->n_attrstamp = 0;
    FUNC_0(VAR_28);
    VAR_34 = FUNC_7(VAR_28, &VAR_33, VAR_29);
   }
   if ((VAR_30->n_flag & VAR_20) || VAR_34 ||
       VAR_30->n_change != VAR_33.va_filerev) {
    (void) FUNC_11(VAR_28, VAR_25, VAR_32, 1);
    VAR_30->n_attrstamp = 0;
    FUNC_0(VAR_28);
    VAR_34 = FUNC_7(VAR_28, &VAR_33, VAR_29);
    if (!VAR_34) {
     VAR_30->n_mtime = VAR_33.va_mtime;
     VAR_30->n_change = VAR_33.va_filerev;
    }
   }

   FUNC_1(VAR_30);
   VAR_30->n_flag |= VAR_19;
   FUNC_2(VAR_30);
  }
 } else if (!FUNC_5(VAR_28)) {
  if ((FUNC_6(VAR_28->v_mount)->nm_flag & VAR_18) != 0) {
   VAR_36 = FUNC_8(VAR_28)->n_size;
   FUNC_4(VAR_28, 0);
   VAR_35 = FUNC_9(VAR_27, &(VAR_28->v_lockf), VAR_36);
  } else {
   if (&FUNC_12 != ((void*)0))
    VAR_35 = FUNC_12(VAR_27);
   else {
    FUNC_4(VAR_28, 0);
    VAR_35 = VAR_5;
   }
  }
  if (VAR_35 == 0 && VAR_27->a_op == VAR_9) {
   VAR_35 = FUNC_3(VAR_28, VAR_14);
   if (VAR_35 == 0) {

    FUNC_1(VAR_30);
    VAR_30->n_flag |= VAR_19;
    FUNC_2(VAR_30);
    FUNC_4(VAR_28, 0);
   }
  }
  return (VAR_35);
 } else
  VAR_35 = VAR_6;
out:
 FUNC_4(VAR_28, 0);
 return (VAR_35);
}
