
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int eloop_signal_handler ;
struct TYPE_3__ {void* user_data; int handler; } ;
struct TYPE_4__ {TYPE_1__ term_signal; } ;
typedef int PHANDLER_ROUTINE ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;

int FUNC_3(eloop_signal_handler VAR_3,
        void *VAR_4)
{

 if (FUNC_1((PHANDLER_ROUTINE) VAR_2,
      VAR_0) == 0) {
  FUNC_2("SetConsoleCtrlHandler() failed: %d\n",
         (int) FUNC_0());
  return -1;
 }


 VAR_1.term_signal.handler = VAR_3;
 VAR_1.term_signal.user_data = VAR_4;

 return 0;
}
