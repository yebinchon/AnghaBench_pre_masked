
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct proc {int p_flag; TYPE_2__* p_session; } ;
struct cdev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_ttyvp; } ;
struct TYPE_3__ {scalar_t__ v_type; struct cdev* v_rdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct cdev* VAR_3 ;
 struct proc* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_6, struct ucred *VAR_7, char *VAR_8, int VAR_9,
    struct cdev **VAR_10)
{
 struct proc *VAR_11;

 if (*VAR_10 != ((void*)0))
  return;
 if (FUNC_3(VAR_8, "tty"))
  return;
 VAR_11 = VAR_4;
 FUNC_5(&VAR_2);
 FUNC_4(&VAR_5);
 FUNC_4(&VAR_2);
 FUNC_0();
 if (!(VAR_11->p_flag & VAR_0))
  *VAR_10 = VAR_3;
 else if (VAR_11->p_session->s_ttyvp == ((void*)0))
  *VAR_10 = VAR_3;
 else if (VAR_11->p_session->s_ttyvp->v_type == VAR_1 ||
     VAR_11->p_session->s_ttyvp->v_rdev == ((void*)0)) {

  *VAR_10 = VAR_3;
 } else
  *VAR_10 = VAR_11->p_session->s_ttyvp->v_rdev;
 FUNC_1(*VAR_10);
 FUNC_2();
 FUNC_5(&VAR_5);
}
