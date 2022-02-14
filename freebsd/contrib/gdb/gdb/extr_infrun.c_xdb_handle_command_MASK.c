
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 char** FUNC_0 (char*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*,int) ;
 struct cleanup* FUNC_3 (char**) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_7 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_3, int VAR_4)
{
  char **VAR_5;
  struct cleanup *VAR_6;



  VAR_5 = FUNC_0 (VAR_3);
  if (VAR_5 == ((void*)0))
    {
      FUNC_5 (0);
    }
  VAR_6 = FUNC_3 (VAR_5);
  if (VAR_5[1] != (char *) ((void*)0))
    {
      char *VAR_7;
      int VAR_8;

      VAR_8 = FUNC_9 (VAR_5[0]) + 20;
      VAR_7 = (char *) FUNC_12 (VAR_8);
      if (VAR_7)
 {
   int VAR_9 = 1;
   enum target_signal VAR_10;

   VAR_10 = FUNC_10 (VAR_5[0]);
   FUNC_4 (VAR_7, 0, VAR_8);
   if (FUNC_8 (VAR_5[1], "Q") == 0)
     FUNC_7 (VAR_7, "%s %s", VAR_5[0], "noprint");
   else
     {
       if (FUNC_8 (VAR_5[1], "s") == 0)
  {
    if (!VAR_2[VAR_10])
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "stop");
    else
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "nostop");
  }
       else if (FUNC_8 (VAR_5[1], "i") == 0)
  {
    if (!VAR_1[VAR_10])
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "pass");
    else
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "nopass");
  }
       else if (FUNC_8 (VAR_5[1], "r") == 0)
  {
    if (!VAR_0[VAR_10])
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "print");
    else
      FUNC_7 (VAR_7, "%s %s", VAR_5[0], "noprint");
  }
       else
  VAR_9 = 0;
     }
   if (VAR_9)
     FUNC_2 (VAR_7, VAR_4);
   else
     FUNC_6 ("Invalid signal handling flag.\n");
   if (VAR_7)
     FUNC_11 (VAR_7);
 }
    }
  FUNC_1 (VAR_6);
}
