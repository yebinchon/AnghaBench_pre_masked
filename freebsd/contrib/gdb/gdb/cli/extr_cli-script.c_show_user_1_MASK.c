
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct command_line {int dummy; } ;
struct cmd_list_element {char* name; struct command_line* user_commands; } ;


 int FUNC_0 (char*,struct ui_file*) ;
 int FUNC_1 (int ,struct command_line*,int) ;
 int VAR_0 ;

void
FUNC_2 (struct cmd_list_element *VAR_1, struct ui_file *VAR_2)
{
  struct command_line *VAR_3;

  VAR_3 = VAR_1->user_commands;
  if (!VAR_3)
    return;
  FUNC_0 ("User command ", VAR_2);
  FUNC_0 (VAR_1->name, VAR_2);
  FUNC_0 (":\n", VAR_2);

  FUNC_1 (VAR_0, VAR_3, 1);
  FUNC_0 ("\n", VAR_2);
}
