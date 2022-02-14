
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ucred {int cr_ngroups; } ;
struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 struct ucred* FUNC_4 (struct proc*,struct ucred*) ;
 int FUNC_5 (struct ucred*,scalar_t__) ;
 int FUNC_6 (struct ucred*) ;
 struct ucred* FUNC_7 () ;
 int FUNC_8 (struct ucred*,scalar_t__,int *) ;
 int FUNC_9 (struct ucred*,scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (struct ucred*,int ) ;
 int FUNC_11 (struct proc*,struct ucred*) ;
 int FUNC_12 (struct proc*) ;

int
FUNC_13(struct thread *VAR_2, u_int VAR_3, gid_t *VAR_4)
{
 struct proc *VAR_5 = VAR_2->td_proc;
 struct ucred *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_1(VAR_3 <= VAR_1 + 1);
 FUNC_0(VAR_4, VAR_3);
 VAR_6 = FUNC_7();
 FUNC_5(VAR_6, VAR_3);
 FUNC_2(VAR_5);
 VAR_7 = FUNC_4(VAR_5, VAR_6);







 VAR_8 = FUNC_10(VAR_7, VAR_0);
 if (VAR_8)
  goto fail;

 if (VAR_3 == 0) {






  VAR_6->cr_ngroups = 1;
 } else {
  FUNC_8(VAR_6, VAR_3, VAR_4);
 }
 FUNC_12(VAR_5);
 FUNC_11(VAR_5, VAR_6);
 FUNC_3(VAR_5);
 FUNC_6(VAR_7);
 return (0);

fail:
 FUNC_3(VAR_5);
 FUNC_6(VAR_6);
 return (VAR_8);
}
