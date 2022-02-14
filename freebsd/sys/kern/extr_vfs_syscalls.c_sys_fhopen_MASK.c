
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_dupfd; int* td_retval; int td_ucred; } ;
struct mount {int dummy; } ;
struct file {int f_seqcount; int f_flag; struct vnode* f_vnode; int * f_ops; } ;
struct fhopen_args {int u_fhp; int flags; } ;
struct fhandle {int fh_fid; int fh_fsid; } ;
typedef int fhp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mount*,int *,int ,struct vnode**) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_11 ;
 int FUNC_4 (int ,struct fhandle*,int) ;
 int FUNC_5 (struct thread*,struct file**) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct file*,int,int ,struct vnode*,int *) ;
 int FUNC_8 (struct thread*,struct file*,int*,int,int *) ;
 int FUNC_9 (struct file*,int ,int ,struct thread*) ;
 int FUNC_10 (struct thread*,int ) ;
 struct mount* FUNC_11 (int *) ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (struct vnode*,int,int ,struct thread*,struct file*) ;
 int VAR_12 ;
 int FUNC_14 (struct vnode*) ;

int
FUNC_15(struct thread *VAR_13, struct fhopen_args *VAR_14)
{
 struct mount *VAR_15;
 struct vnode *VAR_16;
 struct fhandle VAR_17;
 struct file *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_20 = FUNC_10(VAR_13, VAR_10);
 if (VAR_20 != 0)
  return (VAR_20);
 VAR_21 = -1;
 VAR_19 = FUNC_0(VAR_14->flags);

 if (((VAR_19 & (VAR_5 | VAR_6)) == 0) || (VAR_19 & VAR_8))
  return (VAR_1);
 VAR_20 = FUNC_4(VAR_14->u_fhp, &VAR_17, sizeof(VAR_17));
 if (VAR_20 != 0)
  return(VAR_20);

 VAR_15 = FUNC_11(&VAR_17.fh_fsid);
 if (VAR_15 == ((void*)0))
  return (VAR_2);

 VAR_20 = FUNC_2(VAR_15, &VAR_17.fh_fid, VAR_7, &VAR_16);
 FUNC_12(VAR_15);
 if (VAR_20 != 0)
  return (VAR_20);

 VAR_20 = FUNC_5(VAR_13, &VAR_18);
 if (VAR_20 != 0) {
  FUNC_14(VAR_16);
  return (VAR_20);
 }
 VAR_20 = FUNC_13(VAR_16, VAR_19, VAR_13->td_ucred, VAR_13, VAR_18);
 if (VAR_20 != 0) {
  FUNC_1(VAR_18->f_ops == &VAR_11,
      ("VOP_OPEN in fhopen() set f_ops"));
  FUNC_1(VAR_13->td_dupfd < 0,
      ("fhopen() encountered fdopen()"));

  FUNC_14(VAR_16);
  goto bad;
 }



 VAR_18->f_vnode = VAR_16;
 VAR_18->f_seqcount = 1;
 FUNC_7(VAR_18, (VAR_19 & VAR_4) | (VAR_18->f_flag & VAR_3), VAR_0, VAR_16,
     &VAR_12);
 FUNC_3(VAR_16, 0);
 if ((VAR_19 & VAR_9) != 0) {
  VAR_20 = FUNC_9(VAR_18, 0, VAR_13->td_ucred, VAR_13);
  if (VAR_20 != 0)
   goto bad;
 }

 VAR_20 = FUNC_8(VAR_13, VAR_18, &VAR_21, VAR_19, ((void*)0));
bad:
 FUNC_6(VAR_18, VAR_13);
 VAR_13->td_retval[0] = VAR_21;
 return (VAR_20);
}
