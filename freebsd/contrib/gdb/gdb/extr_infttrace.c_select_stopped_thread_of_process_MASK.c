
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tts_signo; } ;
struct TYPE_10__ {TYPE_1__ tts_signal; } ;
struct TYPE_11__ {scalar_t__ tts_event; scalar_t__ tts_lwpid; TYPE_2__ tts_u; } ;
typedef TYPE_3__ ttstate_t ;
typedef scalar_t__ lwpid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,...) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11 (int VAR_5, ttstate_t *VAR_6)
{
  lwpid_t VAR_7, VAR_8;
  ttstate_t VAR_9, VAR_10;







  if (!FUNC_1 (VAR_5, VAR_6->tts_event))
    return 1;





  VAR_7 = 0;
  for (VAR_8 = FUNC_4 (VAR_5, &VAR_10);
       VAR_8 != 0;
       VAR_8 = FUNC_5 (VAR_5, &VAR_10))
    {




      if (VAR_10.tts_event == VAR_0)
 {
   FUNC_8 (VAR_5, VAR_10.tts_lwpid);
 }
      else if (VAR_3 && (VAR_10.tts_lwpid == VAR_4))
 {
   VAR_7 = VAR_10.tts_lwpid;
   VAR_9 = VAR_10;
 }
      else if (!FUNC_10 (VAR_10.tts_lwpid) && VAR_7 == 0)
 {
   VAR_7 = VAR_10.tts_lwpid;
   VAR_9 = VAR_10;
 }





    }



  if (VAR_3)
    {
      if (VAR_7 == VAR_4)
 {


   VAR_10 = VAR_9;
 }
      else
 {
   FUNC_9 ("Internal error: fake-step failed to complete.");
   return 0;
 }
    }
  else if (VAR_7 != 0)
    {


      VAR_10 = VAR_9;
    }
  else if (VAR_8 != 0)
    {
      FUNC_9 ("Internal error in call of ttrace_wait.");
      return 0;
    }
  else
    {
      FUNC_9 ("Internal error: no unhandled thread event to select");
      return 0;
    }

  FUNC_2 (VAR_6, &VAR_10);
  return 1;
}
