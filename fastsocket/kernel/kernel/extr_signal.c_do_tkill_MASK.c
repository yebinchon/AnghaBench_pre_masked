
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siginfo {int si_signo; int si_uid; int si_pid; int si_code; scalar_t__ si_errno; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,struct siginfo*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(pid_t VAR_2, pid_t VAR_3, int VAR_4)
{
 struct siginfo VAR_5 = {};

 VAR_5.si_signo = VAR_4;
 VAR_5.si_errno = 0;
 VAR_5.si_code = VAR_0;
 VAR_5.si_pid = FUNC_2(VAR_1);
 VAR_5.si_uid = FUNC_0();

 return FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_5);
}
