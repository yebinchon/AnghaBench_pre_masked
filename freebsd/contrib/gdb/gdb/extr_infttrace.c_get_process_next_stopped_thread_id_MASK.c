
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tts_lwpid; } ;
typedef TYPE_1__ ttstate_t ;
typedef int pid_t ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static lwpid_t
FUNC_2 (int VAR_3, ttstate_t *VAR_4)
{
  int VAR_5;

  VAR_5 = FUNC_0 (
     VAR_1,
     (pid_t) VAR_3,
     (lwpid_t) VAR_0,
     (TTRACE_ARG_TYPE) VAR_4,
     (TTRACE_ARG_TYPE) sizeof (*VAR_4),
     VAR_0);
  if (VAR_2)
    FUNC_1 ("ttrace");

  if (VAR_5 < 0)


    return 0;

  else if (VAR_5 == 0)
    {





      return 0;
    }

  return VAR_4->tts_lwpid;
}
