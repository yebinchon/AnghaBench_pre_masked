
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int si_signo; } ;
struct ptrace_lwpinfo {int pl_flags; TYPE_1__ pl_siginfo; } ;
typedef int pid_t ;
typedef int lwpinfo ;
typedef scalar_t__ l_ulong ;
typedef int l_siginfo_t ;
typedef int l_siginfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct thread*,int ,int ,struct ptrace_lwpinfo*,int) ;
 int FUNC_3 (struct thread*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_3, pid_t VAR_4, l_ulong VAR_5)
{
 struct ptrace_lwpinfo VAR_6;
 l_siginfo_t VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_8 != 0) {
  FUNC_3(VAR_3, "PT_LWPINFO failed with error %d", VAR_8);
  return (VAR_8);
 }

 if ((VAR_6.pl_flags & VAR_1) == 0) {
  VAR_8 = VAR_0;
  FUNC_3(VAR_3, "no PL_FLAG_SI, returning %d", VAR_8);
  return (VAR_8);
 }

 VAR_9 = FUNC_0(VAR_6.pl_siginfo.si_signo);
 FUNC_4(&VAR_6.pl_siginfo, &VAR_7, VAR_9);
 VAR_8 = FUNC_1(&VAR_7, (void *)VAR_5, sizeof(VAR_7));
 return (VAR_8);
}
