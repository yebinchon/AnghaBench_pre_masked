
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cmd_list_element {int dummy; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (char*,struct ui_file*) ;
 int FUNC_3 (struct cmd_list_element*,int,char*,int,struct ui_file*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;

void
FUNC_8 (struct cmd_list_element *VAR_1, char *VAR_2,
    enum command_class VAR_3, struct ui_file *VAR_4)
{
  int VAR_5;
  char *VAR_6, *VAR_7;


  VAR_5 = FUNC_5 (VAR_2);
  VAR_6 = (char *) FUNC_0 (VAR_5 + 1);
  VAR_6[0] = 0;
  VAR_7 = (char *) FUNC_0 (VAR_5 + 4);
  VAR_7[0] = 0;
  if (VAR_5)
    {
      VAR_6[0] = ' ';
      FUNC_6 (VAR_6 + 1, VAR_2, VAR_5 - 1);
      VAR_6[VAR_5] = 0;
      FUNC_6 (VAR_7, VAR_2, VAR_5 - 1);
      FUNC_4 (VAR_7 + VAR_5 - 1, " sub");
    }

  if (VAR_3 == VAR_0)
    FUNC_1 (VAR_4, "List of classes of %scommands:\n\n", VAR_7);
  else
    FUNC_1 (VAR_4, "List of %scommands:\n\n", VAR_7);

  FUNC_3 (VAR_1, VAR_3, VAR_2, (int) VAR_3 >= 0, VAR_4);

  if (VAR_3 == VAR_0)
    {
      FUNC_1 (VAR_4, "\nType \"help%s\" followed by a class name for a list of commands in ",

   VAR_6);
      FUNC_7 ("");
      FUNC_1 (VAR_4, "that class.");
    }

  FUNC_1 (VAR_4, "\nType \"help%s\" followed by %scommand name ",
      VAR_6, VAR_7);
  FUNC_7 ("");
  FUNC_2 ("for ", VAR_4);
  FUNC_7 ("");
  FUNC_2 ("full ", VAR_4);
  FUNC_7 ("");
  FUNC_2 ("documentation.\n", VAR_4);
  FUNC_2 ("Command name abbreviations are allowed if unambiguous.\n",
    VAR_4);
}
