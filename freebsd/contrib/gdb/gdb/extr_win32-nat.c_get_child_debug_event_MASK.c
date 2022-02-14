
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int thread_info ;
struct TYPE_14__ {int related_pid; int integer; } ;
struct target_waitstatus {TYPE_6__ value; int kind; } ;
struct TYPE_12__ {int hFile; } ;
struct TYPE_11__ {int dwExitCode; } ;
struct TYPE_10__ {int hThread; int hProcess; int hFile; } ;
struct TYPE_9__ {int hThread; } ;
struct TYPE_13__ {TYPE_4__ LoadDll; TYPE_3__ ExitProcess; TYPE_2__ CreateProcessInfo; TYPE_1__ CreateThread; } ;
struct TYPE_15__ {int dwDebugEventCode; int dwThreadId; int dwProcessId; TYPE_5__ u; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_3 (TYPE_7__*,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,char*,int ) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 TYPE_7__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 () ;
 int FUNC_9 (struct target_waitstatus*) ;
 int VAR_12 ;
 int FUNC_10 (struct target_waitstatus*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_18 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int ) ;

__attribute__((used)) static int
FUNC_17 (int VAR_19, struct target_waitstatus *VAR_20)
{
  BOOL VAR_21;
  DWORD VAR_22, VAR_23;
  thread_info *VAR_24;
  static thread_info VAR_25;
  int VAR_26 = 0;

  VAR_16 = VAR_2;

  if (!(VAR_21 = FUNC_3 (&VAR_8, 1000)))
    goto out;

  VAR_11++;
  VAR_22 = VAR_0;

  VAR_23 = VAR_8.dwDebugEventCode;
  VAR_20->kind = VAR_5;
  VAR_24 = ((void*)0);

  switch (VAR_23)
    {
    case 134:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%x code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "CREATE_THREAD_DEBUG_EVENT"));
      if (VAR_18 != 1)
 {
   if (!VAR_18 && VAR_7)
     {



       VAR_26 = VAR_20->value.related_pid = FUNC_8 ();
       VAR_18++;
     }
   break;
 }

      VAR_24 = FUNC_5 (VAR_8.dwThreadId,
        VAR_8.u.CreateThread.hThread);
      if (VAR_15)
 FUNC_12 ("[New %s]\n",
      FUNC_15 (
        FUNC_11 (VAR_8.dwThreadId)));
      VAR_26 = VAR_8.dwThreadId;
      break;

    case 131:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "EXIT_THREAD_DEBUG_EVENT"));
      if (VAR_8.dwThreadId != VAR_17)
 {
   FUNC_7 (VAR_8.dwThreadId);
   VAR_24 = &VAR_25;
 }
      break;

    case 135:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "CREATE_PROCESS_DEBUG_EVENT"));
      FUNC_1 (VAR_8.u.CreateProcessInfo.hFile);
      if (++VAR_18 != 1)
 {
   FUNC_1 (VAR_8.u.CreateProcessInfo.hProcess);
   break;
 }

      VAR_9 = VAR_8.u.CreateProcessInfo.hProcess;
      if (VAR_17)
 FUNC_7 (VAR_17);
      VAR_17 = VAR_8.dwThreadId;

      VAR_24 = FUNC_5 (VAR_17,
        VAR_8.u.CreateProcessInfo.hThread);
      VAR_26 = VAR_20->value.related_pid = VAR_8.dwThreadId;
      break;

    case 132:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "EXIT_PROCESS_DEBUG_EVENT"));
      if (VAR_18 != 1)
 break;
      VAR_20->kind = VAR_3;
      VAR_20->value.integer = VAR_8.u.ExitProcess.dwExitCode;
      FUNC_1 (VAR_9);
      VAR_26 = VAR_17;
      break;

    case 130:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "LOAD_DLL_DEBUG_EVENT"));
      FUNC_1 (VAR_8.u.LoadDll.hFile);
      if (VAR_18 != 1)
 break;
      FUNC_4 (VAR_12, ((void*)0), (char *) "", VAR_1);
      FUNC_14 ();
      VAR_20->kind = VAR_4;
      VAR_20->value.integer = 0;
      VAR_26 = VAR_17;
      FUNC_13 ();
      break;

    case 128:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "UNLOAD_DLL_DEBUG_EVENT"));
      if (VAR_18 != 1)
 break;
      FUNC_4 (VAR_13, ((void*)0), (char *) "", VAR_1);
      FUNC_14 ();


      break;

    case 133:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "EXCEPTION_DEBUG_EVENT"));
      if (VAR_18 != 1)
 break;
      if (FUNC_9 (VAR_20))
 VAR_26 = VAR_8.dwThreadId;
      break;

    case 129:
      FUNC_2 (("gdb: kernel event for pid=%d tid=%d code=%s)\n",
       (unsigned) VAR_8.dwProcessId,
       (unsigned) VAR_8.dwThreadId,
       "OUTPUT_DEBUG_STRING_EVENT"));
      if (VAR_18 != 1)
 break;
      if (FUNC_10 (VAR_20))
 VAR_26 = VAR_17;
      break;

    default:
      if (VAR_18 != 1)
 break;
      FUNC_12 ("gdb: kernel event for pid=%ld tid=%ld\n",
    (DWORD) VAR_8.dwProcessId,
    (DWORD) VAR_8.dwThreadId);
      FUNC_12 ("                 unknown event code %ld\n",
    VAR_8.dwDebugEventCode);
      break;
    }

  if (!VAR_26 || VAR_18 != 1)
    FUNC_0 (FUNC_6 (VAR_22, -1));
  else
    {
      VAR_14 = FUNC_11 (VAR_26);
      VAR_10 = *(VAR_24 ?: FUNC_16 (VAR_8.dwThreadId, VAR_6));
    }

out:
  return VAR_26;
}
