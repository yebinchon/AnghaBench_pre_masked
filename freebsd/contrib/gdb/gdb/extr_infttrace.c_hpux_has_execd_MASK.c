
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tts_event; } ;
typedef TYPE_1__ ttstate_t ;
typedef int ttrace_state ;
struct TYPE_6__ {int last_stop_state; } ;
typedef TYPE_2__ thread_info ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;

int
FUNC_8 (int VAR_4, char **VAR_5)
{
  int VAR_6;
  ttstate_t VAR_7;
  thread_info *VAR_8;


  VAR_8 = FUNC_2 (FUNC_3 (VAR_4));
  if (VAR_8 != ((void*)0))
    FUNC_1 (&VAR_7, &VAR_8->last_stop_state);


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


      char *VAR_9 = FUNC_7 (VAR_4);

      *VAR_5 = FUNC_5 (VAR_9, FUNC_6 (VAR_9));
      return 1;
    }

  return 0;
}
