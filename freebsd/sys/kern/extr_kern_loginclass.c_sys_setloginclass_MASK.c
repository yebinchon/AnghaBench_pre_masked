
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct loginclass* cr_loginclass; } ;
struct thread {struct proc* td_proc; } ;
struct setloginclass_args {int namebuf; } ;
struct proc {int dummy; } ;
struct loginclass {int dummy; } ;
typedef int lcname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,char*,int,int *) ;
 struct ucred* FUNC_3 (struct proc*,struct ucred*) ;
 int FUNC_4 (struct ucred*) ;
 struct ucred* FUNC_5 () ;
 int FUNC_6 (struct ucred*) ;
 struct loginclass* FUNC_7 (char*) ;
 int FUNC_8 (struct loginclass*) ;
 int FUNC_9 (struct thread*,int ) ;
 int FUNC_10 (struct proc*,struct ucred*) ;
 int FUNC_11 (struct proc*,struct ucred*,struct ucred*) ;
 int FUNC_12 (struct proc*,struct ucred*) ;

int
FUNC_13(struct thread *VAR_3, struct setloginclass_args *VAR_4)
{
 struct proc *VAR_5 = VAR_3->td_proc;
 int VAR_6;
 char VAR_7[VAR_1];
 struct loginclass *VAR_8;
 struct ucred *VAR_9, *VAR_10;

 VAR_6 = FUNC_9(VAR_3, VAR_2);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_2(VAR_4->namebuf, VAR_7, sizeof(VAR_7), ((void*)0));
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8 == ((void*)0))
  return (VAR_0);
 VAR_9 = FUNC_5();

 FUNC_0(VAR_5);
 VAR_10 = FUNC_3(VAR_5, VAR_9);
 VAR_9->cr_loginclass = VAR_8;
 FUNC_10(VAR_5, VAR_9);




 FUNC_1(VAR_5);




 FUNC_8(VAR_10->cr_loginclass);
 FUNC_4(VAR_10);

 return (0);
}
