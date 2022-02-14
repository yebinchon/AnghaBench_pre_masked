
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int thread_info ;
struct TYPE_10__ {int integer; } ;
struct target_waitstatus {TYPE_3__ value; int kind; } ;
struct TYPE_11__ {int dwExitCode; } ;
struct TYPE_9__ {int hThread; int hProcess; } ;
struct TYPE_8__ {int hThread; } ;
struct TYPE_12__ {TYPE_4__ ExitProcess; TYPE_2__ CreateProcessInfo; TYPE_1__ CreateThread; } ;
struct TYPE_13__ {int dwDebugEventCode; int dwProcessId; int dwThreadId; TYPE_5__ u; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;





 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_3 (int ,int *,char*,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct target_waitstatus*) ;
 int VAR_9 ;
 int FUNC_9 (struct target_waitstatus*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_13 ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_6__*,int) ;

__attribute__((used)) static int
FUNC_16 (int VAR_14, struct target_waitstatus *VAR_15,
         DWORD VAR_16, int *VAR_17)
{
  int VAR_18 = 0;
  BOOL VAR_19;
  DWORD VAR_20, VAR_21;
  thread_info *VAR_22 = ((void*)0);
  static thread_info VAR_23;

  if (!(VAR_19 = FUNC_15 (&VAR_5, 1000)))
    {
      *VAR_17 = 0;
      goto out;
    }

  VAR_8++;
  VAR_20 = VAR_0;
  *VAR_17 = 0;

  VAR_21 = VAR_5.dwDebugEventCode;
  VAR_18 = VAR_21 == VAR_16;

  switch (VAR_21)
    {
    case 134:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%x code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "CREATE_THREAD_DEBUG_EVENT"));

      VAR_22 = FUNC_4 (VAR_5.dwThreadId,
        VAR_5.u.CreateThread.hThread);
      if (VAR_11)
 FUNC_11 ("[New %s]\n",
      FUNC_13 (VAR_5.dwThreadId));
      break;

    case 131:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "EXIT_THREAD_DEBUG_EVENT"));
      FUNC_6 (VAR_5.dwThreadId);
      VAR_22 = &VAR_23;
      break;

    case 135:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "CREATE_PROCESS_DEBUG_EVENT"));
      VAR_6 = VAR_5.u.CreateProcessInfo.hProcess;

      VAR_12 = VAR_5.dwThreadId;
      VAR_10 = FUNC_10 (VAR_12);

      VAR_22 = FUNC_4 (FUNC_2 (VAR_10),
        VAR_5.u.CreateProcessInfo.hThread);
      break;

    case 132:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "EXIT_PROCESS_DEBUG_EVENT"));
      VAR_15->kind = VAR_3;
      VAR_15->value.integer = VAR_5.u.ExitProcess.dwExitCode;
      FUNC_7 (VAR_6);
      *VAR_17 = VAR_5.dwProcessId;
      VAR_18 = 1;
      break;

    case 130:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "LOAD_DLL_DEBUG_EVENT"));
      FUNC_3 (VAR_9, ((void*)0), (char *) "", VAR_2);
      FUNC_12 ();
      break;

    case 128:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "UNLOAD_DLL_DEBUG_EVENT"));
      break;

    case 133:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "EXCEPTION_DEBUG_EVENT"));
      if (FUNC_8 (VAR_15))
 *VAR_17 = VAR_5.dwThreadId;
      else
 {
   VAR_20 = VAR_1;
   VAR_18 = 0;
 }
      break;

    case 129:
      FUNC_1 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_5.dwProcessId,
       (unsigned) VAR_5.dwThreadId,
       "OUTPUT_DEBUG_STRING_EVENT"));
      FUNC_9 ( VAR_15);
      break;
    default:
      FUNC_11 ("gdb: kernel event for pid=%d tid=%d\n",
    VAR_5.dwProcessId,
    VAR_5.dwThreadId);
      FUNC_11 ("                 unknown event code %d\n",
    VAR_5.dwDebugEventCode);
      break;
    }

  if (VAR_18)
    VAR_13 = VAR_7 = *(VAR_22 ?: FUNC_14 (VAR_5.dwThreadId, VAR_4));
  else
    FUNC_0 (FUNC_5 (VAR_20, -1));

out:
  return VAR_18;
}
