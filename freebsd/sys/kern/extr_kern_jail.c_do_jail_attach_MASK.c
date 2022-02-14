
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {struct prison* cr_prison; } ;
struct thread {TYPE_1__* td_ucred; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct prison {int pr_root; int pr_cpuset; int pr_mtx; int pr_uref; int pr_ref; } ;
struct TYPE_2__ {struct prison* cr_prison; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,struct thread*) ;
 int FUNC_4 (struct proc*,int ) ;
 struct ucred* FUNC_5 (struct proc*,struct ucred*) ;
 int FUNC_6 (struct ucred*) ;
 struct ucred* FUNC_7 () ;
 int FUNC_8 (struct ucred*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct prison*,int ,struct thread*) ;
 int FUNC_12 (struct prison*,int) ;
 int FUNC_13 (struct proc*,struct ucred*) ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (struct proc*,struct ucred*,struct ucred*) ;
 int FUNC_16 (struct proc*,struct ucred*) ;
 int FUNC_17 (struct proc*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;

__attribute__((used)) static int
FUNC_20(struct thread *VAR_7, struct prison *VAR_8)
{
 struct proc *VAR_9;
 struct ucred *VAR_10, *VAR_11;
 int VAR_12;
 VAR_8->pr_ref++;
 VAR_8->pr_uref++;
 FUNC_10(&VAR_8->pr_mtx);


 VAR_12 = FUNC_11(VAR_8, VAR_5, VAR_7);
 if (VAR_12) {
  FUNC_12(VAR_8, VAR_2 | VAR_3 | VAR_4);
  return (VAR_12);
 }
 FUNC_18(&VAR_6);




 VAR_9 = VAR_7->td_proc;
 VAR_12 = FUNC_4(VAR_9, VAR_8->pr_cpuset);
 if (VAR_12)
  goto e_revert_osd;

 FUNC_19(VAR_8->pr_root, VAR_0 | VAR_1);
 if ((VAR_12 = FUNC_3(VAR_8->pr_root, VAR_7)) != 0)
  goto e_unlock;




 FUNC_2(VAR_8->pr_root, 0);
 if ((VAR_12 = FUNC_14(VAR_7, VAR_8->pr_root)))
  goto e_revert_osd;

 VAR_10 = FUNC_7();
 FUNC_0(VAR_9);
 VAR_11 = FUNC_5(VAR_9, VAR_10);
 VAR_10->cr_prison = VAR_8;
 FUNC_13(VAR_9, VAR_10);
 FUNC_17(VAR_9);




 FUNC_1(VAR_9);




 FUNC_12(VAR_11->cr_prison, VAR_2 | VAR_3);
 FUNC_6(VAR_11);
 return (0);

 e_unlock:
 FUNC_2(VAR_8->pr_root, 0);
 e_revert_osd:

 (void)FUNC_11(VAR_7->td_ucred->cr_prison, VAR_5, VAR_7);
 FUNC_12(VAR_8, VAR_2 | VAR_3);
 return (VAR_12);
}
