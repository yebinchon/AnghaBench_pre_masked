
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct quotactl_args {int cmd; int arg; int uid; int path; } ;
struct nameidata {TYPE_1__* ni_vp; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {struct mount* v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,int ,struct thread*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct mount*,int,int ,int ) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mount*,int ) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(struct thread *VAR_11, struct quotactl_args *VAR_12)
{
 struct mount *VAR_13;
 struct nameidata VAR_14;
 int VAR_15;

 FUNC_0(VAR_12->cmd);
 FUNC_1(VAR_12->uid);
 if (!FUNC_6(VAR_11->td_ucred, VAR_6))
  return (VAR_1);
 FUNC_3(&VAR_14, VAR_4, VAR_2 | VAR_3 | VAR_0, VAR_10,
     VAR_12->path, VAR_11);
 if ((VAR_15 = FUNC_5(&VAR_14)) != 0)
  return (VAR_15);
 FUNC_2(&VAR_14, VAR_5);
 VAR_13 = VAR_14.ni_vp->v_mount;
 FUNC_8(VAR_13);
 FUNC_11(VAR_14.ni_vp);
 VAR_15 = FUNC_7(VAR_13, 0);
 FUNC_9(VAR_13);
 if (VAR_15 != 0)
  return (VAR_15);
 VAR_15 = FUNC_4(VAR_13, VAR_12->cmd, VAR_12->uid, VAR_12->arg);
 if ((VAR_12->cmd >> VAR_9) != VAR_8 &&
     (VAR_12->cmd >> VAR_9) != VAR_7)
  FUNC_10(VAR_13);
 return (VAR_15);
}
