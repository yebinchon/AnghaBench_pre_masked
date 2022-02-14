
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct mi_parse {char* token; } ;
struct cleanup {int dummy; } ;
struct captured_mi_execute_command_args {scalar_t__ action; struct mi_parse* command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ui_out*,int ,struct captured_mi_execute_command_args*,char*,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char,int ) ;
 int FUNC_4 (int ) ;
 struct cleanup* FUNC_5 (int ,char*) ;
 struct mi_parse* FUNC_6 (char*) ;
 int FUNC_7 (struct mi_parse*) ;
 int FUNC_8 (int *,int) ;
 int VAR_4 ;
 struct ui_out* VAR_5 ;
 int VAR_6 ;

void
FUNC_9 (char *VAR_7, int VAR_8)
{
  struct mi_parse *VAR_9;
  struct captured_mi_execute_command_args VAR_10;
  struct ui_out *VAR_11 = VAR_5;
  int VAR_12;



  if (VAR_7 == 0)
    FUNC_8 (((void*)0), VAR_8);

  VAR_9 = FUNC_6 (VAR_7);

  if (VAR_9 != ((void*)0))
    {


      VAR_10.command = VAR_9;
      VAR_12 = FUNC_0 (VAR_5, VAR_3, &VAR_10, "",
     VAR_2);

      if (VAR_10.action == VAR_1)
 {


   FUNC_7 (VAR_9);
   return;
 }
      if (VAR_10.action == VAR_0 || VAR_12 < 0)
 {
   char *VAR_13 = FUNC_1 ();
   struct cleanup *VAR_14 = FUNC_5 (VAR_6, VAR_13);


   FUNC_2 (VAR_9->token, VAR_4);
   FUNC_2 ("^error,msg=\"", VAR_4);
   FUNC_3 (VAR_13, '"', VAR_4);
   FUNC_2 ("\"\n", VAR_4);
 }
      FUNC_7 (VAR_9);
    }

  FUNC_2 ("(gdb) \n", VAR_4);
  FUNC_4 (VAR_4);


}
