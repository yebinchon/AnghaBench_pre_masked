
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct setlogin_args {int namebuf; } ;
struct proc {TYPE_1__* p_session; } ;
typedef int logintmp ;
struct TYPE_3__ {int s_login; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int,int *) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (int ,char*) ;

int
FUNC_9(struct thread *VAR_4, struct setlogin_args *VAR_5)
{
 struct proc *VAR_6 = VAR_4->td_proc;
 int VAR_7;
 char VAR_8[VAR_2];

 FUNC_1(sizeof(VAR_6->p_session->s_login) >= sizeof(VAR_8));

 VAR_7 = FUNC_7(VAR_4, VAR_3);
 if (VAR_7)
  return (VAR_7);
 VAR_7 = FUNC_6(VAR_5->namebuf, VAR_8, sizeof(VAR_8), ((void*)0));
 if (VAR_7 != 0) {
  if (VAR_7 == VAR_1)
   VAR_7 = VAR_0;
  return (VAR_7);
 }
 FUNC_0(VAR_8);
 FUNC_2(VAR_6);
 FUNC_4(VAR_6->p_session);
 FUNC_8(VAR_6->p_session->s_login, VAR_8);
 FUNC_5(VAR_6->p_session);
 FUNC_3(VAR_6);
 return (0);
}
