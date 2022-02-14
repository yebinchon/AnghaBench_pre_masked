
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_lookup_args {struct vnode* a_dvp; struct componentname* a_cnp; struct vnode** a_vpp; } ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct componentname {int cn_flags; scalar_t__ cn_nameiop; struct thread* cn_thread; struct ucred* cn_cred; } ;
struct TYPE_2__ {int mnt_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct vnode*,struct vnode**,struct componentname*) ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*,int *,int *) ;

int
FUNC_3(struct vop_lookup_args *VAR_8)
{
 struct vnode *VAR_9;
 int VAR_10;
 struct vnode **VAR_11 = VAR_8->a_vpp;
 struct componentname *VAR_12 = VAR_8->a_cnp;
 struct ucred *VAR_13 = VAR_12->cn_cred;
 int VAR_14 = VAR_12->cn_flags;
 struct thread *VAR_15 = VAR_12->cn_thread;

 *VAR_11 = ((void*)0);
 VAR_9 = VAR_8->a_dvp;

 if (VAR_9->v_type != VAR_6)
  return (VAR_1);

 if ((VAR_14 & VAR_3) && (VAR_9->v_mount->mnt_flag & VAR_4) &&
     (VAR_12->cn_nameiop == VAR_0 || VAR_12->cn_nameiop == VAR_5))
  return (VAR_2);

 VAR_10 = FUNC_0(VAR_9, VAR_7, VAR_13, VAR_15);
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_2(VAR_9, VAR_11, VAR_12, ((void*)0), ((void*)0));
 if (VAR_10 == 0)
  return (FUNC_1(VAR_9, VAR_11, VAR_12));
 if (VAR_10 == -1)
  return (0);
 return (VAR_10);
}
