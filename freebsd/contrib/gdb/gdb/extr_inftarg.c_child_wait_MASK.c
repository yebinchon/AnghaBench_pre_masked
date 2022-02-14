
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sig; } ;
struct target_waitstatus {int kind; TYPE_1__ value; } ;
typedef int ptid_t ;
typedef enum target_waitkind { ____Placeholder_target_waitkind } target_waitkind ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct target_waitstatus*,int) ;
 scalar_t__ FUNC_10 (int,int,int*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static ptid_t
FUNC_12 (ptid_t VAR_7, struct target_waitstatus *VAR_8)
{
  int VAR_9;
  int VAR_10;
  char *VAR_11 = ((void*)0);
  int VAR_12;
  int VAR_13;
  int VAR_14;
  enum target_waitkind VAR_15;
  int VAR_16;

  do
    {
      FUNC_7 ();

      FUNC_8 ();

      VAR_16 = FUNC_5 (VAR_6, &VAR_10);

      VAR_9 = VAR_4;

      FUNC_2 ();

      FUNC_1 ();

      if (VAR_16 == -1)
 {
   if (VAR_9 == VAR_0)
     continue;

   FUNC_3 (VAR_5, "Child process unexpectedly missing: %s.\n",
         FUNC_6 (VAR_9));


   VAR_8->kind = VAR_2;
   VAR_8->value.sig = VAR_1;
   return FUNC_4 (-1);
 }



      if (FUNC_10 (VAR_16, VAR_10, &VAR_12))
 {

   continue;
 }

      if (!FUNC_11 (FUNC_4 (VAR_16)))
 {
   VAR_8->kind = VAR_3;
   return FUNC_4 (VAR_16);
 }
      } while (VAR_16 != FUNC_0 (VAR_6));

  FUNC_9 (VAR_8, VAR_10);
  return FUNC_4 (VAR_16);
}
