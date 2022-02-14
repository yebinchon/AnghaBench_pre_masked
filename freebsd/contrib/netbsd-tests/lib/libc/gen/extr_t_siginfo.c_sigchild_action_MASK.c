
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long si_signo; unsigned long si_errno; unsigned long si_code; unsigned long si_uid; unsigned long si_pid; unsigned long si_status; scalar_t__ si_stime; scalar_t__ si_utime; } ;
typedef TYPE_1__ siginfo_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(int VAR_4, siginfo_t *VAR_5, void *VAR_6)
{
 if (VAR_5 != ((void*)0)) {
  FUNC_8("info=%p\n", VAR_5);
  FUNC_8("ptr=%p\n", VAR_6);
  FUNC_8("si_signo=%d\n", VAR_5->si_signo);
  FUNC_8("si_errno=%d\n", VAR_5->si_errno);
  FUNC_8("si_code=%d\n", VAR_5->si_code);
  FUNC_8("si_uid=%d\n", VAR_5->si_uid);
  FUNC_8("si_pid=%d\n", VAR_5->si_pid);
  FUNC_8("si_status=%d\n", VAR_5->si_status);




 }
 FUNC_0(VAR_5->si_code, VAR_2);
 FUNC_0(VAR_5->si_signo, VAR_0);
 FUNC_0(VAR_5->si_uid, FUNC_7());
 FUNC_0(VAR_5->si_pid, VAR_1);
 if (FUNC_2(VAR_5->si_status))
  FUNC_0(FUNC_1(VAR_5->si_status), VAR_3);
 else if (FUNC_4(VAR_5->si_status))
  FUNC_0(FUNC_5(VAR_5->si_status), VAR_3);
 else if (FUNC_3(VAR_5->si_status))
  FUNC_0(FUNC_6(VAR_5->si_status), VAR_3);
}
