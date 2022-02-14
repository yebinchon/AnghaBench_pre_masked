
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int abbrev_flag; struct cmd_list_element* cmd_pointer; int allow_unknown; int prefixname; int prefixlist; int function; int func; int doc; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 struct cmd_list_element* FUNC_0 (char*,int,int *,int ,struct cmd_list_element**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,struct cmd_list_element**) ;
 struct cmd_list_element* FUNC_3 (char**,struct cmd_list_element*,char*,int,int) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

struct cmd_list_element *
FUNC_6 (char *VAR_0, char *VAR_1, enum command_class VAR_2,
        int VAR_3, struct cmd_list_element **VAR_4)
{

  char *VAR_5;
  struct cmd_list_element *VAR_6;
  struct cmd_list_element *VAR_7;
  VAR_5 = (char *) FUNC_1 (FUNC_5 (VAR_1) + 1);
  FUNC_4 (VAR_5, VAR_1);
  VAR_6 = FUNC_3 (&VAR_5, *VAR_4, "", 1, 1);

  if (VAR_6 == 0)
    {
      FUNC_2 (VAR_0, VAR_4);
      return 0;
    }

  VAR_7 = FUNC_0 (VAR_0, VAR_2, ((void*)0), VAR_6->doc, VAR_4);

  VAR_7->func = VAR_6->func;
  VAR_7->function = VAR_6->function;
  VAR_7->prefixlist = VAR_6->prefixlist;
  VAR_7->prefixname = VAR_6->prefixname;
  VAR_7->allow_unknown = VAR_6->allow_unknown;
  VAR_7->abbrev_flag = VAR_3;
  VAR_7->cmd_pointer = VAR_6;
  return VAR_7;
}
