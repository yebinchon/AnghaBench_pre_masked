
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union wait {int w_tid; int w_status; } ;
struct TYPE_2__ {void* sig; int integer; } ;
struct target_waitstatus {TYPE_1__ value; void* kind; } ;
typedef int ptid_t ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (union wait) ;
 scalar_t__ FUNC_5 (union wait) ;
 scalar_t__ FUNC_6 (union wait) ;
 scalar_t__ FUNC_7 (union wait) ;
 scalar_t__ FUNC_8 (union wait) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int VAR_12 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_14 ;
 int FUNC_14 (int ,int,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (struct target_waitstatus*,int ) ;
 void* FUNC_18 (scalar_t__) ;
 int FUNC_19 (union wait*) ;

ptid_t
FUNC_20 (ptid_t VAR_15, struct target_waitstatus *VAR_16)
{
  int VAR_17;
  int VAR_18;
  union wait VAR_19;
  int VAR_20;

  while (1)
    {
      int VAR_21;

      FUNC_16 ();

      VAR_20 = FUNC_19 (&VAR_19);

      VAR_17 = VAR_12;

      FUNC_10 ();

      if (VAR_20 == -1)
 {
   if (VAR_17 == VAR_0)
     continue;
   FUNC_12 (VAR_13, "Child process unexpectedly missing: %s.\n",
         FUNC_15 (VAR_17));

   VAR_16->kind = VAR_9;
   VAR_16->value.sig = VAR_7;
   return -1;
 }

      if (VAR_20 != FUNC_2 (VAR_14))
 continue;

      VAR_18 = VAR_19.w_tid;




      if (FUNC_3 (VAR_14) == 0 && VAR_18 != 0)
 {
   VAR_14 = FUNC_1 (FUNC_2 (VAR_14), VAR_18);
   FUNC_9 (VAR_14);
 }

      VAR_15 = FUNC_0 (VAR_20, VAR_18);


      if (VAR_18 == 0)
 VAR_14 = VAR_15;


      if (FUNC_6 (VAR_19)
   && FUNC_7 (VAR_19) == VAR_5
   && !FUNC_13 (VAR_15))
 {
   int VAR_22;

   VAR_22 = FUNC_14 (VAR_2, FUNC_2 (VAR_15),
                     (PTRACE_ARG3_TYPE) 0, 0);

   if (VAR_22 == VAR_3)
     {


       VAR_16->kind = VAR_10;
       VAR_16->value.sig = VAR_6;
       return VAR_15;
     }
   else
     FUNC_11 ("Signal for unknown thread was not SIGNEWTHREAD");
 }


      else if (FUNC_6 (VAR_19)
        && FUNC_7 (VAR_19) == VAR_5
        && FUNC_13 (VAR_15))
 {
   int VAR_23;

   VAR_23 = FUNC_14 (VAR_2, FUNC_2 (VAR_15),
                     (PTRACE_ARG3_TYPE) 0, 0);

   if (VAR_23 == VAR_4)
     {
       FUNC_14 (VAR_1, FUNC_2 (VAR_15), (PTRACE_ARG3_TYPE) 0, 0);
       continue;
     }
 }
      FUNC_17 (VAR_16, VAR_19.w_status);


      return VAR_15;
    }
}
