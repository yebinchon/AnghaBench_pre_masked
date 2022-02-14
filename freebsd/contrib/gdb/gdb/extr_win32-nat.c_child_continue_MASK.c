
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ContextFlags; void* Dr7; void* Dr3; void* Dr2; void* Dr1; void* Dr0; } ;
struct TYPE_5__ {int suspend_count; TYPE_4__ context; int h; scalar_t__ id; struct TYPE_5__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_6__ {int dwThreadId; int dwProcessId; } ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void** VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static BOOL
FUNC_5 (DWORD VAR_6, int VAR_7)
{
  int VAR_8;
  thread_info *VAR_9;
  BOOL VAR_10;

  FUNC_2 (("ContinueDebugEvent (cpid=%ld, ctid=%ld, %s);\n",
    VAR_2.dwProcessId, VAR_2.dwThreadId,
    VAR_6 == VAR_1 ?
    "DBG_CONTINUE" : "DBG_EXCEPTION_NOT_HANDLED"));
  VAR_10 = FUNC_1 (VAR_2.dwProcessId,
       VAR_2.dwThreadId,
       VAR_6);
  VAR_6 = 0;
  if (VAR_10)
    for (VAR_9 = &VAR_5; (VAR_9 = VAR_9->next) != ((void*)0);)
      if (((VAR_7 == -1) || (VAR_7 == (int) VAR_9->id)) && VAR_9->suspend_count)
 {

   for (VAR_8 = 0; VAR_8 < VAR_9->suspend_count; VAR_8++)
     (void) FUNC_3 (VAR_9->h);
   VAR_9->suspend_count = 0;
   if (VAR_3)
     {

       VAR_9->context.ContextFlags = VAR_0;
       VAR_9->context.Dr0 = VAR_4[0];
       VAR_9->context.Dr1 = VAR_4[1];
       VAR_9->context.Dr2 = VAR_4[2];
       VAR_9->context.Dr3 = VAR_4[3];


       VAR_9->context.Dr7 = VAR_4[7];
       FUNC_0 (FUNC_4 (VAR_9->h, &VAR_9->context));
       VAR_9->context.ContextFlags = 0;
     }
 }

  VAR_3 = 0;
  return VAR_10;
}
