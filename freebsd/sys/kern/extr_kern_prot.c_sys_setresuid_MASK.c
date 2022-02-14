
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct uidinfo {int dummy; } ;
struct ucred {scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__ cr_uid; } ;
struct thread {struct proc* td_proc; } ;
struct setresuid_args {scalar_t__ euid; scalar_t__ ruid; scalar_t__ suid; } ;
struct proc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct ucred*,struct uidinfo*) ;
 int FUNC_6 (struct ucred*,struct uidinfo*) ;
 int FUNC_7 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_8 (struct proc*,struct ucred*) ;
 int FUNC_9 (struct ucred*) ;
 struct ucred* FUNC_10 () ;
 int FUNC_11 (struct ucred*) ;
 int FUNC_12 (struct ucred*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct ucred*,int ) ;
 int FUNC_14 (struct proc*,struct ucred*) ;
 int FUNC_15 (struct proc*,struct ucred*,struct ucred*) ;
 int FUNC_16 (struct proc*,struct ucred*) ;
 int FUNC_17 (struct proc*) ;
 struct uidinfo* FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct uidinfo*) ;

int
FUNC_20(struct thread *VAR_1, struct setresuid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct ucred *VAR_4, *VAR_5;
 uid_t VAR_6, VAR_7, VAR_8;
 struct uidinfo *VAR_9, *VAR_10;
 int VAR_11;

 VAR_6 = VAR_2->euid;
 VAR_7 = VAR_2->ruid;
 VAR_8 = VAR_2->suid;
 FUNC_0(VAR_6);
 FUNC_1(VAR_7);
 FUNC_2(VAR_8);
 VAR_4 = FUNC_10();
 VAR_9 = FUNC_18(VAR_6);
 VAR_10 = FUNC_18(VAR_7);
 FUNC_3(VAR_3);
 VAR_5 = FUNC_8(VAR_3, VAR_4);







 if (((VAR_7 != (uid_t)-1 && VAR_7 != VAR_5->cr_ruid &&
      VAR_7 != VAR_5->cr_svuid &&
       VAR_7 != VAR_5->cr_uid) ||
      (VAR_6 != (uid_t)-1 && VAR_6 != VAR_5->cr_ruid &&
     VAR_6 != VAR_5->cr_svuid &&
       VAR_6 != VAR_5->cr_uid) ||
      (VAR_8 != (uid_t)-1 && VAR_8 != VAR_5->cr_ruid &&
     VAR_8 != VAR_5->cr_svuid &&
       VAR_8 != VAR_5->cr_uid)) &&
     (VAR_11 = FUNC_13(VAR_5, VAR_0)) != 0)
  goto fail;

 if (VAR_6 != (uid_t)-1 && VAR_5->cr_uid != VAR_6) {
  FUNC_5(VAR_4, VAR_9);
  FUNC_17(VAR_3);
 }
 if (VAR_7 != (uid_t)-1 && VAR_5->cr_ruid != VAR_7) {
  FUNC_6(VAR_4, VAR_10);
  FUNC_17(VAR_3);
 }
 if (VAR_8 != (uid_t)-1 && VAR_5->cr_svuid != VAR_8) {
  FUNC_7(VAR_4, VAR_8);
  FUNC_17(VAR_3);
 }
 FUNC_14(VAR_3, VAR_4);




 FUNC_4(VAR_3);




 FUNC_19(VAR_10);
 FUNC_19(VAR_9);
 FUNC_9(VAR_5);
 return (0);

fail:
 FUNC_4(VAR_3);
 FUNC_19(VAR_10);
 FUNC_19(VAR_9);
 FUNC_9(VAR_4);
 return (VAR_11);

}
