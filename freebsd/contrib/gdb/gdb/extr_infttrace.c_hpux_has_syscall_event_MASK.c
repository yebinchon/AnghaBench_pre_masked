
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tts_event; int tts_scno; } ;
typedef TYPE_1__ ttstate_t ;
typedef int ttrace_state ;
struct TYPE_6__ {int last_stop_state; } ;
typedef TYPE_2__ thread_info ;
typedef enum target_waitkind { ____Placeholder_target_waitkind } target_waitkind ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_7 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5 (int VAR_8, enum target_waitkind *VAR_9, int *VAR_10)
{
  int VAR_11;
  ttstate_t VAR_12;
  thread_info *VAR_13;


  VAR_13 = FUNC_2 (FUNC_3 (VAR_8));
  if (VAR_13 != ((void*)0))
    FUNC_1 (&VAR_12, &VAR_13->last_stop_state);


  else
    {
      VAR_11 = FUNC_0 (VAR_5,
          VAR_8,
          (TTRACE_ARG_TYPE) & VAR_12,
          (TTRACE_ARG_TYPE) sizeof (VAR_12),
          VAR_6);

      if (VAR_7)
 FUNC_4 ("ttrace");

      if (VAR_11 < 0)
 return 0;
    }

  *VAR_9 = VAR_0;
  *VAR_10 = -1;

  if (VAR_12.tts_event & VAR_3)
    *VAR_9 = VAR_1;
  else if (VAR_12.tts_event & VAR_4)
    *VAR_9 = VAR_2;
  else
    return 0;

  *VAR_10 = VAR_12.tts_scno;
  return 1;
}
