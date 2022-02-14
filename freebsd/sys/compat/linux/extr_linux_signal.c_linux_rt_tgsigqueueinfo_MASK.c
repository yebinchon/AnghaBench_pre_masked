
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_rt_tgsigqueueinfo_args {int sig; int tgid; int tid; int uinfo; } ;
typedef int linfo ;
struct TYPE_4__ {scalar_t__ lsi_code; } ;
typedef TYPE_1__ l_siginfo_t ;
typedef int ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,struct thread*,int *) ;
 struct thread* FUNC_4 (struct thread*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;

int
FUNC_7(struct thread *VAR_3, struct linux_rt_tgsigqueueinfo_args *VAR_4)
{
 l_siginfo_t VAR_5;
 struct thread *VAR_6;
 ksiginfo_t VAR_7;
 int VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_4->sig))
  return (VAR_0);

 VAR_8 = FUNC_1(VAR_4->uinfo, &VAR_5, sizeof(VAR_5));
 if (VAR_8 != 0)
  return (VAR_8);

 if (VAR_5.lsi_code >= 0)
  return (VAR_1);

 VAR_6 = FUNC_4(VAR_3, VAR_4->tid, VAR_4->tgid);
 if (VAR_6 == ((void*)0))
  return (VAR_2);

 VAR_9 = FUNC_5(VAR_4->sig);
 FUNC_2(&VAR_7);
 FUNC_6(&VAR_5, &VAR_7, VAR_9);
 return (FUNC_3(VAR_3, VAR_6, &VAR_7));
}
