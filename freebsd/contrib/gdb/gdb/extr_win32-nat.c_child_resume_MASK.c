
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ ContextFlags; void* Dr7; void* Dr3; void* Dr2; void* Dr1; void* Dr0; int EFlags; } ;
struct TYPE_12__ {TYPE_8__ context; int h; } ;
typedef TYPE_4__ thread_info ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_9__ {int ExceptionCode; } ;
struct TYPE_10__ {TYPE_1__ ExceptionRecord; } ;
struct TYPE_11__ {TYPE_2__ Exception; } ;
struct TYPE_14__ {scalar_t__ dwDebugEventCode; int dwThreadId; TYPE_3__ u; } ;
struct TYPE_13__ {int them; int us; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_8__*) ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 TYPE_7__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void** VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_7 (int ,int ) ;
 TYPE_5__* VAR_11 ;

void
FUNC_8 (ptid_t VAR_12, int VAR_13, enum target_signal VAR_14)
{
  thread_info *VAR_15;
  DWORD VAR_16 = VAR_0;

  int VAR_17 = FUNC_3 (VAR_12);

  if (VAR_14 != VAR_6)
    {
      if (VAR_7.dwDebugEventCode != VAR_2)
 {
   FUNC_1(("Cannot continue with signal %d here.\n",VAR_14));
 }
      else if (VAR_14 == VAR_10)
 VAR_16 = VAR_1;
      else
 FUNC_1(("Can only continue with recieved signal %d.\n",
   VAR_10));
    }

  VAR_10 = VAR_6;

  FUNC_2 (("gdb: child_resume (pid=%d, step=%d, sig=%d);\n",
        VAR_17, VAR_13, VAR_14));


  VAR_15 = FUNC_7 (VAR_7.dwThreadId, VAR_3);
  if (VAR_15)
    {
      if (VAR_13)
 {

   FUNC_6 (VAR_5);
   VAR_15->context.EFlags |= VAR_4;
 }

      if (VAR_15->context.ContextFlags)
 {
   if (VAR_8)
     {
       VAR_15->context.Dr0 = VAR_9[0];
       VAR_15->context.Dr1 = VAR_9[1];
       VAR_15->context.Dr2 = VAR_9[2];
       VAR_15->context.Dr3 = VAR_9[3];


       VAR_15->context.Dr7 = VAR_9[7];
     }
   FUNC_0 (FUNC_4 (VAR_15->h, &VAR_15->context));
   VAR_15->context.ContextFlags = 0;
 }
    }




  FUNC_5 (VAR_16, VAR_17);
}
