
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int have_signal; int signal_value; scalar_t__ stepping_mode; scalar_t__ terminated; } ;
typedef TYPE_1__ thread_info ;
typedef int ptid_t ;
typedef scalar_t__ process_state_t ;
typedef scalar_t__ lwpid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (char*,...) ;

void
FUNC_15 (ptid_t VAR_14, int VAR_15, enum target_signal VAR_16)
{
  int VAR_17;
  lwpid_t VAR_18;
  process_state_t VAR_19;
  lwpid_t VAR_20 = FUNC_0 (VAR_14);

  VAR_17 =
    (VAR_20 == VAR_4) ||
    (VAR_12);

  if (VAR_17)
    {




      if (VAR_12)
 VAR_18 = VAR_13;
      else
 VAR_18 = FUNC_8 (FUNC_0 (VAR_9));
    }
  else
    VAR_18 = FUNC_8 (VAR_20);
  if (VAR_11 == VAR_5)
    FUNC_14 ("Internal error in resume logic; doing resume or step anyway.");

  if (!VAR_15
      && VAR_17
      && VAR_16 != 0
      && VAR_10 > 0)
    {




      thread_info *VAR_21;






      VAR_21 = FUNC_6 (VAR_18);
      if (VAR_21 != ((void*)0))
 {
   VAR_21->have_signal = 1;
   VAR_21->signal_value = VAR_16;







 }







    }
  if (VAR_17
      && VAR_10 > 0)
    {
      thread_info *VAR_22;

      if (!VAR_15)
 {
   return;
 }
      else
 {






 }

      VAR_22 = FUNC_6 (VAR_18);
      if (VAR_22 == ((void*)0))
 {
   FUNC_14 ("No thread information for tid %d, 'next' command ignored.\n", VAR_18);
   return;
 }
      else
 {







   if (VAR_22->stepping_mode != VAR_1)
     {
       FUNC_14 ("Step or continue command applied to thread which is already stepping or continuing; command ignored.");

       return;
     }

   if (VAR_15)
     VAR_22->stepping_mode = VAR_2;
   else
     VAR_22->stepping_mode = VAR_0;

   return;
 }
    }





  VAR_19 = VAR_5;
  if (VAR_15)
    {
      if (VAR_17)
 {



   FUNC_11 (VAR_18, VAR_16);
   FUNC_2 ();
   FUNC_3 ();
 }

      else
 {
   FUNC_10 (VAR_18, VAR_16);





   FUNC_4 (VAR_18);
   FUNC_5 (VAR_18);
   VAR_19 = VAR_3;
 }
    }

  else
    {
      if (VAR_12)
 {
   FUNC_1 (VAR_7, VAR_18, VAR_6, VAR_6, VAR_6);
   FUNC_2 ();
   FUNC_3 ();
 }
      else if (VAR_17)
 {





   FUNC_12 (VAR_18, VAR_16);

   FUNC_2 ();
   FUNC_3 ();
 }
      else
 {




   FUNC_13 (VAR_18, VAR_16);




   FUNC_4 (VAR_18);
   FUNC_5 (VAR_18);
 }
    }

  VAR_11 = VAR_19;







}
