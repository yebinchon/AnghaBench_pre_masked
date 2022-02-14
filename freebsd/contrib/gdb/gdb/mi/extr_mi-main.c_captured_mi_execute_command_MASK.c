
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct mi_parse {int op; char* token; int command; int args; } ;
struct captured_mi_execute_command_args {int rc; void* action; struct mi_parse* command; } ;



 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct mi_parse*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct ui_out*,int ) ;
 int FUNC_7 (struct ui_out*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 () ;
 int VAR_15 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10 (struct ui_out *VAR_16, void *VAR_17)
{
  struct captured_mi_execute_command_args *VAR_18 =
    (struct captured_mi_execute_command_args *) VAR_17;
  struct mi_parse *VAR_19 = VAR_18->command;

  switch (VAR_19->op)
    {

    case 128:

      if (VAR_11)

 FUNC_1 (VAR_13, " token=`%s' command=`%s' args=`%s'\n",
       VAR_19->token, VAR_19->command, VAR_19->args);




      VAR_18->action = VAR_1;
      VAR_18->rc = FUNC_4 (VAR_19);

      if (!FUNC_8 () || !VAR_15)
 {






   if (VAR_18->rc == VAR_8)
     {
       FUNC_2 (VAR_19->token, VAR_13);
       FUNC_2 ("^done", VAR_13);
       FUNC_6 (VAR_16, VAR_13);
       FUNC_7 (VAR_16);
       FUNC_2 ("\n", VAR_13);
     }
   else if (VAR_18->rc == VAR_9)
     {
       if (VAR_12)
  {
    FUNC_2 (VAR_19->token, VAR_13);
    FUNC_2 ("^error,msg=\"", VAR_13);
    FUNC_3 (VAR_12, '"', VAR_13);
    FUNC_9 (VAR_12);
    FUNC_2 ("\"\n", VAR_13);
  }
       FUNC_7 (VAR_16);
     }
   else if (VAR_18->rc == VAR_7)
     {
       FUNC_7 (VAR_16);
       VAR_18->action = VAR_0;
       return 1;
     }
   else
     FUNC_7 (VAR_16);
 }
      else if (VAR_14)
 {


   VAR_18->action = VAR_2;
   return 1;
 }
      break;

    case 129:




      FUNC_1 (VAR_10, "%s\n", VAR_19->command);
      FUNC_5 (VAR_19->command, 0, ((void*)0));


      if (FUNC_0 (VAR_3)
   || FUNC_0 (VAR_4)
   || FUNC_0 (VAR_5)
   || FUNC_0 (VAR_6))
 {


   FUNC_2 (VAR_19->token, VAR_13);
   FUNC_2 ("^done", VAR_13);
   FUNC_6 (VAR_16, VAR_13);
   FUNC_7 (VAR_16);
   FUNC_2 ("\n", VAR_13);
   VAR_18->action = VAR_1;
   VAR_18->rc = VAR_8;
 }
      break;

    }

  return 1;
}
