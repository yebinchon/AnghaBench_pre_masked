
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tts_signo; } ;
struct TYPE_7__ {TYPE_1__ tts_signal; } ;
struct TYPE_8__ {scalar_t__ tts_event; TYPE_2__ tts_u; } ;
typedef TYPE_3__ ttstate_t ;
typedef int lwpid_t ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (int,TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6 (int VAR_3, lwpid_t VAR_4)
{
  ttstate_t VAR_5;
  lwpid_t VAR_6;
  int VAR_7;



  VAR_7 = 0;
  VAR_6 = FUNC_1 (VAR_3, &VAR_5);
  while (VAR_6 > 0)
    {
      if (VAR_5.tts_event != VAR_0
   && !FUNC_5 (VAR_6))
 {
   VAR_7++;
 }
      VAR_6 = FUNC_2 (VAR_3, &VAR_5);
    }







  return VAR_7;
}
