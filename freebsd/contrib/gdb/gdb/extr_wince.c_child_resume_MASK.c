
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ContextFlags; } ;
struct TYPE_5__ {TYPE_3__ context; int h; } ;
typedef TYPE_1__ thread_info ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_7__ {int dwThreadId; } ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_6 (int ,int ) ;

void
FUNC_7 (ptid_t VAR_7, int VAR_8, enum target_signal VAR_9)
{
  thread_info *VAR_10;
  DWORD VAR_11 = VAR_6 > 0 && VAR_6 < VAR_3 ?
  VAR_1 : VAR_0;
  int VAR_12 = FUNC_2 (VAR_7);

  FUNC_1 (("gdb: child_resume (pid=%d, step=%d, sig=%d);\n",
        VAR_12, VAR_8, VAR_9));


  VAR_10 = FUNC_6 (VAR_4.dwThreadId, VAR_2);

  if (VAR_10->context.ContextFlags)
    {
      FUNC_0 (FUNC_5 (VAR_10->h, &VAR_10->context));
      VAR_10->context.ContextFlags = 0;
    }



  if (VAR_9 && VAR_9 != VAR_6)
    FUNC_4 (VAR_5, "Can't send signals to the child.  signal %d\n", VAR_9);

  VAR_6 = 0;
  FUNC_3 (VAR_11, VAR_12);
}
