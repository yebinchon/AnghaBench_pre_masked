
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {struct proc* td_proc; int td_ucred; } ;
struct proc {int p_flag; TYPE_1__* p_session; } ;
struct devfs_dirent {struct cdev_priv* de_cdp; } ;
struct TYPE_4__ {struct ucred* si_cred; } ;
struct cdev_priv {TYPE_2__ cdp_c; } ;
struct TYPE_3__ {struct cdev_priv* s_ttydp; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct ucred*) ;

__attribute__((used)) static inline int
FUNC_3(struct devfs_dirent *VAR_1, struct thread *VAR_2)
{
 struct cdev_priv *VAR_3;
 struct ucred *VAR_4;
 struct proc *VAR_5;
 int VAR_6;

 VAR_3 = VAR_1->de_cdp;
 if (VAR_3 == ((void*)0))
  return (0);
 VAR_4 = VAR_3->cdp_c.si_cred;
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_6 = FUNC_2(VAR_2->td_ucred, VAR_4);
 if (VAR_6 == 0)
  return (0);

 VAR_5 = VAR_2->td_proc;
 FUNC_0(VAR_5);
 if (!(VAR_5->p_flag & VAR_0)) {
  FUNC_1(VAR_5);
  return (VAR_6);
 }
 if (VAR_5->p_session->s_ttydp == VAR_3)
  VAR_6 = 0;
 FUNC_1(VAR_5);
 return (VAR_6);
}
