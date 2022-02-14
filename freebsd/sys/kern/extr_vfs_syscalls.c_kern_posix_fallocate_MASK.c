
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct thread {int td_ucred; int td_proc; } ;
struct mount {int dummy; } ;
struct file {int f_flag; scalar_t__ f_type; int f_cred; struct vnode* f_vnode; TYPE_1__* f_ops; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int fo_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct file*) ;
 int FUNC_2 (struct vnode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct vnode*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct vnode*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 () ;
 int VAR_13 ;
 int FUNC_7 (struct file*,struct thread*) ;
 int FUNC_8 (struct thread*,int,int *,struct file**) ;
 int FUNC_9 (int ,int ,struct vnode*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (struct vnode*,int ) ;
 int FUNC_14 (struct vnode*,struct mount**,int) ;

int
FUNC_15(struct thread *VAR_14, int VAR_15, off_t VAR_16, off_t VAR_17)
{
 struct file *VAR_18;
 struct mount *VAR_19;
 struct vnode *VAR_20;
 off_t VAR_21, VAR_22;
 int VAR_23;




 FUNC_0(VAR_15);
 if (VAR_16 < 0 || VAR_17 <= 0)
  return (VAR_4);

 if (VAR_16 > VAR_9 - VAR_17)
  return (VAR_3);
 FUNC_0(VAR_15);
 VAR_23 = FUNC_8(VAR_14, VAR_15, &VAR_13, &VAR_18);
 if (VAR_23 != 0)
  return (VAR_23);
 FUNC_1(VAR_14->td_proc, VAR_18);
 if ((VAR_18->f_ops->fo_flags & VAR_0) == 0) {
  VAR_23 = VAR_6;
  goto out;
 }
 if ((VAR_18->f_flag & VAR_7) == 0) {
  VAR_23 = VAR_2;
  goto out;
 }
 if (VAR_18->f_type != VAR_1) {
  VAR_23 = VAR_5;
  goto out;
 }
 VAR_20 = VAR_18->f_vnode;
 if (VAR_20->v_type != VAR_11) {
  VAR_23 = VAR_5;
  goto out;
 }


 for (;;) {
  VAR_21 = VAR_17;
  VAR_22 = VAR_16;

  FUNC_6();
  VAR_19 = ((void*)0);
  VAR_23 = FUNC_14(VAR_20, &VAR_19, VAR_12 | VAR_10);
  if (VAR_23 != 0)
   break;
  VAR_23 = FUNC_13(VAR_20, VAR_8);
  if (VAR_23 != 0) {
   FUNC_12(VAR_19);
   break;
  }
   VAR_23 = FUNC_4(VAR_20, &VAR_16, &VAR_17);
  FUNC_5(VAR_20, 0);
  FUNC_12(VAR_19);

  if (VAR_21 + VAR_22 != VAR_16 + VAR_17) {
   FUNC_11("offset + len changed from %jx/%jx to %jx/%jx",
       VAR_22, VAR_21, VAR_16, VAR_17);
  }
  if (VAR_23 != 0 || VAR_17 == 0)
   break;
  FUNC_3(VAR_21 > VAR_17, ("Iteration did not make progress?"));
  FUNC_10();
 }
 out:
 FUNC_7(VAR_18, VAR_14);
 return (VAR_23);
}
