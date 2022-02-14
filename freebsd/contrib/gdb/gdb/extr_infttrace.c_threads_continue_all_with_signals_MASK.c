
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tts_flags; scalar_t__ tts_event; } ;
typedef TYPE_1__ ttstate_t ;
struct TYPE_9__ {int handled; int seen; scalar_t__ tid; int signal_value; scalar_t__ stepping_mode; scalar_t__ have_signal; struct TYPE_9__* next; scalar_t__ terminated; } ;
typedef TYPE_2__ thread_info ;
typedef scalar_t__ lwpid_t ;
struct TYPE_10__ {TYPE_2__* head; } ;
typedef int TTRACE_ARG_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_3__ VAR_9 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (lwpid_t VAR_10, int VAR_11)
{
  thread_info *VAR_12;
  int VAR_13;
  lwpid_t VAR_14;
  lwpid_t VAR_15;
  ttstate_t VAR_16;
  int VAR_17;
  FUNC_9 ();
  VAR_14 = FUNC_7 (VAR_10);
  VAR_17 = FUNC_3 (VAR_14);

  VAR_15 = FUNC_5 (VAR_17, &VAR_16);
  while (0 != VAR_15)
    {







      VAR_12 = FUNC_2 (VAR_15);
      if (((void*)0) == VAR_12)
 {
   FUNC_0 (VAR_17, VAR_15);
   VAR_12 = FUNC_2 (VAR_15);





   VAR_12->handled = 1;

   if (VAR_16.tts_event != VAR_1)
     {


       FUNC_13 ("Unexpected thread with \"%s\" event.",
         FUNC_4 (VAR_16.tts_event));
     }
 }







      VAR_12->seen = 1;

      VAR_15 = FUNC_6 (VAR_17, &VAR_16);
    }



  FUNC_12 ();



  for (VAR_12 = VAR_9.head; VAR_12; VAR_12 = VAR_12->next)
    {



      FUNC_11 (VAR_12);



      if (VAR_12->tid == VAR_14)
 {
   VAR_13 = VAR_11;
   VAR_12->have_signal = 0;
 }
      else if (VAR_12->have_signal)
 {
   VAR_13 = VAR_12->signal_value;
   VAR_12->have_signal = 0;
 }
      else
 VAR_13 = 0;

      if (VAR_12->stepping_mode == VAR_0)
 {
   FUNC_1 (
   VAR_5,
   VAR_12->tid,
   VAR_7,
   (TTRACE_ARG_TYPE) FUNC_10 (VAR_11),
   VAR_6);
 }
      else
 {


   FUNC_1 (
   VAR_4,
   VAR_12->tid,
   VAR_7,
      (TTRACE_ARG_TYPE) FUNC_10 (VAR_13),
   VAR_6);
 }
    }
}
