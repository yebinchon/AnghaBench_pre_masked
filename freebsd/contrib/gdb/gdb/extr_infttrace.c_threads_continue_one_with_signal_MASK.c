
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ have_signal; int handled; scalar_t__ terminated; } ;
typedef TYPE_1__ thread_info ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (lwpid_t VAR_4, int VAR_5)
{
  thread_info *VAR_6;
  lwpid_t VAR_7;
  int VAR_8;






  VAR_7 = FUNC_4 (VAR_4);
  VAR_8 = FUNC_3 (VAR_7);

  VAR_6 = FUNC_2 (VAR_7);
  if (((void*)0) == VAR_6)
    {
      FUNC_0 (VAR_8, VAR_7);
    }







  if (!VAR_6->handled)
    FUNC_7 ("Internal error: continuing unhandled thread.");

  VAR_6->have_signal = 0;

  FUNC_1 (VAR_0,
        VAR_4,
        VAR_2,
        (TTRACE_ARG_TYPE) FUNC_6 (VAR_5),
        VAR_1);
}
