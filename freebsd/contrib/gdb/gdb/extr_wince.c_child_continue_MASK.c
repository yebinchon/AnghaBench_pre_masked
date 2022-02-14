
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int suspend_count; int h; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_5__ {scalar_t__ dwThreadId; scalar_t__ dwProcessId; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static BOOL
FUNC_3 (DWORD VAR_2, int VAR_3)
{
  int VAR_4;
  thread_info *VAR_5;
  BOOL VAR_6;

  FUNC_0 (("ContinueDebugEvent (cpid=%d, ctid=%d, DBG_CONTINUE);\n",
   (unsigned) VAR_0.dwProcessId, (unsigned) VAR_0.dwThreadId));
  VAR_6 = FUNC_1 (VAR_0.dwProcessId,
         VAR_0.dwThreadId,
         VAR_2);
  if (VAR_6)
    for (VAR_5 = &VAR_1; (VAR_5 = VAR_5->next) != ((void*)0);)
      if (((VAR_3 == -1) || (VAR_3 == VAR_5->id)) && VAR_5->suspend_count)
 {
   for (VAR_4 = 0; VAR_4 < VAR_5->suspend_count; VAR_4++)
     (void) FUNC_2 (VAR_5->h);
   VAR_5->suspend_count = 0;
 }

  return VAR_6;
}
