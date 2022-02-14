
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {struct command_line* next; } ;
struct cmd_list_element {struct command_line* user_commands; } ;
struct cleanup {int dummy; } ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct command_line*) ;
 int* VAR_3 ;
 struct cleanup* FUNC_3 (int ,int*) ;
 struct cleanup* FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;

void
FUNC_6 (struct cmd_list_element *VAR_5, char *VAR_6)
{
  struct command_line *VAR_7;
  struct cleanup *VAR_8;
  enum command_control_type VAR_9;
  static int VAR_10 = 0;
  extern int VAR_11;

  VAR_8 = FUNC_4 (VAR_6);

  VAR_7 = VAR_5->user_commands;
  if (VAR_7 == 0)

    return;

  if (++VAR_10 > VAR_11)
    FUNC_1 ("Max user call depth exceeded -- command aborted\n");

  VAR_8 = FUNC_3 (VAR_2, &VAR_10);



  VAR_8 = FUNC_3 (VAR_1, VAR_3);
  VAR_3 = (FILE *) 0;
  while (VAR_7)
    {
      VAR_9 = FUNC_2 (VAR_7);
      if (VAR_9 != VAR_4 && VAR_9 != VAR_0)
 {
   FUNC_5 ("Error in control structure.\n");
   break;
 }
      VAR_7 = VAR_7->next;
    }
  FUNC_0 (VAR_8);

  VAR_10--;
}
