
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdb_wince_result ;
typedef int ev ;
struct TYPE_5__ {scalar_t__ dwDebugEventCode; int dwThreadId; int dwProcessId; } ;
typedef int DWORD ;
typedef TYPE_1__ DEBUG_EVENT ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ,int,int ,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5 (int VAR_3)
{
  DWORD VAR_4 = FUNC_2 (L"WaitForDebugEvent ms", VAR_3, VAR_1);
  gdb_wince_result VAR_5;
  DEBUG_EVENT VAR_6;
  static int VAR_7 = 0;

  for (;;)
    {
      VAR_5 = FUNC_1 (&VAR_6, VAR_4);

      if (VAR_6.dwDebugEventCode == VAR_2)
 {
   if (VAR_7)
     {
       VAR_7--;
       goto ignore;
     }
   if ((VAR_7 = FUNC_4 (&VAR_6)))
     goto ignore;
 }

      FUNC_3 (L"WaitForDebugEvent event", VAR_5, VAR_3, VAR_1,
   &VAR_6, sizeof (VAR_6));
      break;

    ignore:
      FUNC_0 (VAR_6.dwProcessId, VAR_6.dwThreadId, VAR_0);
    }

  return;
}
