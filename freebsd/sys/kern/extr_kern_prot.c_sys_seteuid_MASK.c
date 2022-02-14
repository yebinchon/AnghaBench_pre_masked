
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct uidinfo {int dummy; } ;
struct ucred {scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__ cr_uid; } ;
struct thread {struct proc* td_proc; } ;
struct seteuid_args {scalar_t__ euid; } ;
struct proc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct ucred*,struct uidinfo*) ;
 struct ucred* FUNC_4 (struct proc*,struct ucred*) ;
 int FUNC_5 (struct ucred*) ;
 struct ucred* FUNC_6 () ;
 int FUNC_7 (struct ucred*,scalar_t__) ;
 int FUNC_8 (struct ucred*,int ) ;
 int FUNC_9 (struct proc*,struct ucred*) ;
 int FUNC_10 (struct proc*) ;
 struct uidinfo* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct uidinfo*) ;

int
FUNC_13(struct thread *VAR_1, struct seteuid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct ucred *VAR_4, *VAR_5;
 uid_t VAR_6;
 struct uidinfo *VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->euid;
 FUNC_0(VAR_6);
 VAR_4 = FUNC_6();
 VAR_7 = FUNC_11(VAR_6);
 FUNC_1(VAR_3);



 VAR_5 = FUNC_4(VAR_3, VAR_4);







 if (VAR_6 != VAR_5->cr_ruid &&
     VAR_6 != VAR_5->cr_svuid &&
     (VAR_8 = FUNC_8(VAR_5, VAR_0)) != 0)
  goto fail;




 if (VAR_5->cr_uid != VAR_6) {
  FUNC_3(VAR_4, VAR_7);
  FUNC_10(VAR_3);
 }
 FUNC_9(VAR_3, VAR_4);
 FUNC_2(VAR_3);
 FUNC_12(VAR_7);
 FUNC_5(VAR_5);
 return (0);

fail:
 FUNC_2(VAR_3);
 FUNC_12(VAR_7);
 FUNC_5(VAR_4);
 return (VAR_8);
}
