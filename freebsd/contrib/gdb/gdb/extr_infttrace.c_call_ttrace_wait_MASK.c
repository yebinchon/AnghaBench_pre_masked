
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ttwopt_t ;
struct TYPE_8__ {int tts_pid; int tts_lwpid; int tts_event; } ;
typedef TYPE_1__ ttstate_t ;
struct TYPE_9__ {int have_state; int last_stop_state; } ;
typedef TYPE_2__ thread_info ;
typedef int lwpid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int,TYPE_1__*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14 (int VAR_11, ttwopt_t VAR_12, ttstate_t *VAR_13, size_t VAR_14)
{


  static int VAR_15;





  int VAR_16 = 0;
  lwpid_t VAR_17 = 0;
  lwpid_t VAR_18;

  int VAR_19 = 0;

  thread_info *VAR_20 = ((void*)0);

  if (VAR_11 != 0)
    {







      if (!FUNC_0 ())
 FUNC_4 ("No thread records for ttrace call w. specific pid");




      VAR_18 = FUNC_8 (VAR_11);
      VAR_15 = FUNC_6 (VAR_18);




    }
  if (VAR_9 == 0)
    {

      if (VAR_10 == VAR_2)
 {


   ;
 }
      else if (VAR_10 == VAR_0)
 {





   if (!VAR_7)
     {
       FUNC_13 ("Inconsistent thread state.");
     }
 }
      else if ((VAR_10 == VAR_1)
        || (VAR_10 == VAR_5))
 {




   ;
 }
      else if (VAR_10 == VAR_3)
 {
   FUNC_13 ("Process not running at wait call.");
 }
      else


 FUNC_13 ("Inconsistent process state.");
    }

  else
    {


      if (VAR_10 == VAR_3)
 {


   ;
 }
      else if (VAR_10 == VAR_2)
 {



   FUNC_13 ("Trying to continue with buffered events:");
 }
      else if (VAR_10 == VAR_0)
 {



   if (!VAR_7)
     {
       FUNC_13 ("Losing buffered thread events!\n");
     }
 }
      else if ((VAR_10 == VAR_1)
        || (VAR_10 == VAR_5))
 {




   ;
 }
      else
 FUNC_13 ("Process in unknown state with buffered events.");
    }
  if (VAR_7)
    {
      VAR_17 = VAR_8;
      VAR_16 = FUNC_6 (VAR_8);






    }

  if (VAR_9 == 0
      || VAR_10 != VAR_3)
    {
      VAR_19 = FUNC_1 (VAR_16, VAR_17, VAR_12, VAR_13, VAR_14);





      VAR_15 = VAR_13->tts_pid;







      if (FUNC_2 (VAR_15, VAR_13->tts_event))
 {
   if (!VAR_7)
     {
       if (VAR_9 > 0)
  FUNC_13 ("Internal error in stopping process");

       FUNC_12 (VAR_15);







     }
 }
      VAR_10 = VAR_3;





    }

  else
    {
      if (VAR_10 != VAR_3)
 {
   FUNC_13 ("Process not stopped at wait call, in state '%s'.\n",
     FUNC_7 (VAR_10));
 }

      if (VAR_7)
 FUNC_4 ("Internal error in stepping over breakpoint");

      VAR_19 = 0;
    }



  if (!FUNC_10 (VAR_15, VAR_13))
    FUNC_13 ("Can't find event, using previous event.");

  else if (VAR_13->tts_event == VAR_4)
    FUNC_13 ("Internal error: no thread has a real event.");

  else if (VAR_7)
    {
      if (VAR_8 != VAR_13->tts_lwpid)
 FUNC_13 ("Internal error in stepping over breakpoint.");



      VAR_7 = 0;
      VAR_8 = 0;
    }





  FUNC_11 (VAR_15, VAR_13->tts_lwpid);
  VAR_20 = FUNC_5 (VAR_13->tts_lwpid);
  if (VAR_20 != ((void*)0))
    {
      FUNC_3 (&VAR_20->last_stop_state, VAR_13);
      VAR_20->have_state = 1;
    }

  return VAR_19;
}
