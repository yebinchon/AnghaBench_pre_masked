
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {TYPE_1__* p_session; } ;
struct getlogin_args {int namelen; int namebuf; } ;
struct TYPE_3__ {int s_login; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (char*,int ,int) ;

int
FUNC_6(struct thread *VAR_2, struct getlogin_args *VAR_3)
{
 char VAR_4[VAR_1];
 struct proc *VAR_5 = VAR_2->td_proc;
 size_t VAR_6;

 if (VAR_3->namelen > VAR_1)
  VAR_3->namelen = VAR_1;
 FUNC_0(VAR_5);
 FUNC_2(VAR_5->p_session);
 VAR_6 = FUNC_5(VAR_4, VAR_5->p_session->s_login, VAR_3->namelen) + 1;
 FUNC_3(VAR_5->p_session);
 FUNC_1(VAR_5);
 if (VAR_6 > VAR_3->namelen)
  return (VAR_0);
 return (FUNC_4(VAR_4, VAR_3->namebuf, VAR_6));
}
