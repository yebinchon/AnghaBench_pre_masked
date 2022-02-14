
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ si_signo; scalar_t__ si_errno; int si_code; int si_addr; int si_status; int si_uid; int si_pid; } ;
struct TYPE_5__ {TYPE_1__ ti_siginfo; int ti_pending; int ti_sigmask; } ;
typedef TYPE_2__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;







 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7 (char *VAR_4, int VAR_5)
{
  td_thrhandle_t VAR_6;
  td_thrinfo_t VAR_7;
  td_err_e VAR_8;
  const char *VAR_9;

  if (!VAR_1 || !FUNC_1(VAR_2))
    return;

  VAR_8 = FUNC_5 (VAR_3, FUNC_0 (VAR_2), &VAR_6);
  if (VAR_8 != VAR_0)
    return;

  VAR_8 = FUNC_6 (&VAR_6, &VAR_7);
  if (VAR_8 != VAR_0)
    return;

  FUNC_3("signal mask:\n");
  FUNC_2(&VAR_7.ti_sigmask);
  FUNC_3("signal pending:\n");
  FUNC_2(&VAR_7.ti_pending);
  if (VAR_7.ti_siginfo.si_signo != 0) {
   FUNC_3("si_signo %d si_errno %d", VAR_7.ti_siginfo.si_signo,
     VAR_7.ti_siginfo.si_errno);
   if (VAR_7.ti_siginfo.si_errno != 0)
    FUNC_3(" (%s)", FUNC_4(VAR_7.ti_siginfo.si_errno));
   FUNC_3("\n");
   switch (VAR_7.ti_siginfo.si_code) {
   case 131:
 VAR_9 = "NOINFO";
 break;
    case 128:
 VAR_9 = "USER";
 break;
    case 130:
 VAR_9 = "QUEUE";
 break;
    case 129:
 VAR_9 = "TIMER";
 break;
    case 134:
 VAR_9 = "ASYNCIO";
 break;
    case 132:
 VAR_9 = "MESGQ";
 break;
    case 133:
 VAR_9 = "KERNEL";
 break;
    default:
 VAR_9 = "UNKNOWN";
 break;
    }
    FUNC_3("si_code %s (%d) si_pid %d si_uid %d si_status %x "
      "si_addr %p\n",
      VAR_9, VAR_7.ti_siginfo.si_code, VAR_7.ti_siginfo.si_pid, VAR_7.ti_siginfo.si_uid,
      VAR_7.ti_siginfo.si_status, VAR_7.ti_siginfo.si_addr);
  }
}
