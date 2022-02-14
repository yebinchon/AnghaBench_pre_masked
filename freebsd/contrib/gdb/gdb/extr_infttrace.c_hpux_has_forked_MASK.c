
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tts_fpid; } ;
struct TYPE_8__ {TYPE_1__ tts_fork; } ;
struct TYPE_9__ {int tts_event; TYPE_2__ tts_u; } ;
typedef TYPE_3__ ttstate_t ;
typedef int ttrace_state ;
struct TYPE_10__ {int last_stop_state; } ;
typedef TYPE_4__ thread_info ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5 (int VAR_4, int *VAR_5)
{
  int VAR_6;
  ttstate_t VAR_7;
  thread_info *VAR_8;


  VAR_8 = FUNC_2 (FUNC_3 (VAR_4));
  if (VAR_8 != ((void*)0))
    {
      FUNC_1 (&VAR_7, &VAR_8->last_stop_state);
    }


  else
    {
      VAR_6 = FUNC_0 (VAR_1,
          VAR_4,
          (TTRACE_ARG_TYPE) & VAR_7,
          (TTRACE_ARG_TYPE) sizeof (VAR_7),
          VAR_2);

      if (VAR_3)
 FUNC_4 ("ttrace");

      if (VAR_6 < 0)
 return 0;
    }

  if (VAR_7.tts_event & VAR_0)
    {
      *VAR_5 = VAR_7.tts_u.tts_fork.tts_fpid;
      return 1;
    }

  return 0;
}
