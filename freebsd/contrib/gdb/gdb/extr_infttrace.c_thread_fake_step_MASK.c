
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signal_value; int handled; scalar_t__ have_signal; } ;
typedef TYPE_1__ thread_info ;
typedef int lwpid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (lwpid_t VAR_7, enum target_signal VAR_8)
{
  thread_info *VAR_9;
  if (VAR_5)
    FUNC_5 ("Step while step already in progress.");




  VAR_9 = FUNC_1 (VAR_7);
  if (VAR_9 != ((void*)0))
    {
      if (VAR_9->have_signal && VAR_8 == VAR_0)
 {


   VAR_8 = VAR_9->signal_value;
 }

      VAR_9->have_signal = 0;
    }

  if (!VAR_9->handled)
    FUNC_5 ("Internal error: continuing unhandled thread.");

  FUNC_0 (VAR_1,
        VAR_7,
        VAR_3,
        (TTRACE_ARG_TYPE) FUNC_4 (VAR_8),
        VAR_2);




  VAR_5 = 1;
  VAR_6 = VAR_7;

}
