
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static lwpid_t
FUNC_2 (int VAR_4, ttstate_t *VAR_5)
{
  int VAR_6;

  VAR_6 = FUNC_0 (VAR_2,
    (pid_t) VAR_4,
    (lwpid_t) VAR_1,
    (TTRACE_ARG_TYPE) VAR_5,
    (TTRACE_ARG_TYPE) sizeof (*VAR_5),
    VAR_1);

  if (VAR_3)
    {
      if (VAR_3 == VAR_0)
 {






   VAR_6 = 1;
   VAR_3 = 0;
   return 0;
 }
      else
 FUNC_1 ("ttrace");
    }

  if (VAR_6 < 0)


    return 0;

  return VAR_5->tts_lwpid;
}
