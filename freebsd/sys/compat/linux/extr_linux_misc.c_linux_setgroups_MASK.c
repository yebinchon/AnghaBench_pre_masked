
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ngroups; int * cr_groups; } ;
struct thread {struct proc* td_proc; } ;
struct proc {struct ucred* p_ucred; } ;
struct linux_setgroups_args {int gidsetsize; int grouplist; } ;
typedef int l_gid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct ucred*,struct ucred*) ;
 int FUNC_4 (struct ucred*,int) ;
 int FUNC_5 (struct ucred*) ;
 struct ucred* FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct ucred*,int ) ;
 int FUNC_10 (struct proc*,struct ucred*) ;
 int FUNC_11 (struct proc*) ;

int
FUNC_12(struct thread *VAR_5, struct linux_setgroups_args *VAR_6)
{
 struct ucred *VAR_7, *VAR_8;
 l_gid_t *VAR_9;
 gid_t *VAR_10;
 int VAR_11, VAR_12;
 struct proc *VAR_13;

 VAR_11 = VAR_6->gidsetsize;
 if (VAR_11 < 0 || VAR_11 >= VAR_4 + 1)
  return (VAR_0);
 VAR_9 = FUNC_8(VAR_11 * sizeof(*VAR_9), VAR_1, VAR_2);
 VAR_12 = FUNC_2(VAR_6->grouplist, VAR_9, VAR_11 * sizeof(l_gid_t));
 if (VAR_12)
  goto out;
 VAR_7 = FUNC_6();
 FUNC_4(VAR_7, VAR_11 + 1);
 VAR_13 = VAR_5->td_proc;
 FUNC_0(VAR_13);
 VAR_8 = VAR_13->p_ucred;
 FUNC_3(VAR_7, VAR_8);







 if ((VAR_12 = FUNC_9(VAR_8, VAR_3)) != 0) {
  FUNC_1(VAR_13);
  FUNC_5(VAR_7);
  goto out;
 }

 if (VAR_11 > 0) {
  VAR_7->cr_ngroups = VAR_11 + 1;

  VAR_10 = VAR_7->cr_groups;
  VAR_11--;
  while (VAR_11 >= 0) {
   VAR_10[VAR_11 + 1] = VAR_9[VAR_11];
   VAR_11--;
  }
 } else
  VAR_7->cr_ngroups = 1;

 FUNC_11(VAR_13);
 FUNC_10(VAR_13, VAR_7);
 FUNC_1(VAR_13);
 FUNC_5(VAR_8);
 VAR_12 = 0;
out:
 FUNC_7(VAR_9, VAR_1);
 return (VAR_12);
}
