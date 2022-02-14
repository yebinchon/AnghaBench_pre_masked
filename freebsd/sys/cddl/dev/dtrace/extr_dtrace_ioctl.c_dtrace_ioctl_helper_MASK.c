
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct proc {int p_flag; struct proc* p_pptr; int p_pid; } ;
struct cdev {int dummy; } ;
struct TYPE_3__ {int dofhp_gen; int dofhp_pid; int dofhp_dof; } ;
typedef TYPE_1__ dof_helper_t ;
typedef int dof_hdr_t ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct proc*) ;
 struct proc* VAR_4 ;
 int * FUNC_4 (uintptr_t,int*) ;
 int * FUNC_5 (struct proc*,uintptr_t,int*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_1__*,struct proc*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct proc* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_6, u_long VAR_7, caddr_t VAR_8, int VAR_9,
    struct thread *VAR_10)
{
 struct proc *VAR_11;
 dof_helper_t *VAR_12;
 dof_hdr_t *VAR_13;
 int VAR_14;

 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_14 = 0;
 switch (VAR_7) {
 case 129:
  VAR_12 = (dof_helper_t *)VAR_8;
  VAR_8 = (caddr_t)(uintptr_t)VAR_12->dofhp_dof;
  VAR_11 = VAR_4;
  if (VAR_11->p_pid == VAR_12->dofhp_pid) {
   VAR_13 = FUNC_4((uintptr_t)VAR_8, &VAR_14);
  } else {
   VAR_11 = FUNC_10(VAR_12->dofhp_pid);
   if (VAR_11 == ((void*)0))
    return (VAR_0);
   if (!FUNC_2(VAR_11) ||
       (VAR_11->p_flag & (VAR_2 | VAR_3)) != VAR_2 ||
       VAR_11->p_pptr != VAR_4) {
    FUNC_1(VAR_11);
    return (VAR_0);
   }
   FUNC_3(VAR_11);
   FUNC_1(VAR_11);
   VAR_13 = FUNC_5(VAR_11, (uintptr_t)VAR_8, &VAR_14);
  }

  if (VAR_13 == ((void*)0)) {
   if (VAR_11 != VAR_4)
    FUNC_0(VAR_11);
   break;
  }

  FUNC_8(&VAR_5);
  if ((VAR_14 = FUNC_7(VAR_13, VAR_12, VAR_11)) != -1) {
   VAR_12->dofhp_gen = VAR_14;
   VAR_14 = 0;
  } else {
   VAR_14 = VAR_0;
  }
  FUNC_9(&VAR_5);
  if (VAR_11 != VAR_4)
   FUNC_0(VAR_11);
  break;
 case 128:
  FUNC_8(&VAR_5);
  VAR_14 = FUNC_6(((void*)0), *(int *)(uintptr_t)VAR_8);
  FUNC_9(&VAR_5);
  break;
 default:
  VAR_14 = VAR_1;
  break;
 }
 return (VAR_14);
}
