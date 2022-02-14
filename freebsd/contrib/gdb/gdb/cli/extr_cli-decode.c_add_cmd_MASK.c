
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* name; int class; char* doc; int * cmd_pointer; int * hookee_post; int * hookee_pre; int * user_commands; int * enums; int var_type; int * var; int type; scalar_t__ abbrev_flag; scalar_t__ allow_unknown; int * prefixname; int * prefixlist; scalar_t__ hook_in; int * hook_post; int * hook_pre; int * pre_show_hook; int * replacement; scalar_t__ flags; struct cmd_list_element* next; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 int FUNC_0 (char*,struct cmd_list_element**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmd_list_element*,void (*) (char*,int)) ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int FUNC_3 (struct cmd_list_element*,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;

struct cmd_list_element *
FUNC_6 (char *VAR_3, enum command_class VAR_4, void (*VAR_5) (char *, int),
  char *VAR_6, struct cmd_list_element **VAR_7)
{
  struct cmd_list_element *VAR_8
  = (struct cmd_list_element *) FUNC_5 (sizeof (struct cmd_list_element));
  struct cmd_list_element *VAR_9;

  FUNC_0 (VAR_3, VAR_7);

  if (*VAR_7 == ((void*)0) || FUNC_4 ((*VAR_7)->name, VAR_3) >= 0)
    {
      VAR_8->next = *VAR_7;
      *VAR_7 = VAR_8;
    }
  else
    {
      VAR_9 = *VAR_7;
      while (VAR_9->next && FUNC_4 (VAR_9->next->name, VAR_3) <= 0)
 {
   VAR_9 = VAR_9->next;
 }
      VAR_8->next = VAR_9->next;
      VAR_9->next = VAR_8;
    }

  VAR_8->name = VAR_3;
  VAR_8->class = VAR_4;
  FUNC_1 (VAR_8, VAR_5);
  FUNC_3 (VAR_8, ((void*)0));
  VAR_8->doc = VAR_6;
  VAR_8->flags = 0;
  VAR_8->replacement = ((void*)0);
  VAR_8->pre_show_hook = ((void*)0);
  VAR_8->hook_pre = ((void*)0);
  VAR_8->hook_post = ((void*)0);
  VAR_8->hook_in = 0;
  VAR_8->prefixlist = ((void*)0);
  VAR_8->prefixname = ((void*)0);
  VAR_8->allow_unknown = 0;
  VAR_8->abbrev_flag = 0;
  FUNC_2 (VAR_8, VAR_0);
  VAR_8->type = VAR_1;
  VAR_8->var = ((void*)0);
  VAR_8->var_type = VAR_2;
  VAR_8->enums = ((void*)0);
  VAR_8->user_commands = ((void*)0);
  VAR_8->hookee_pre = ((void*)0);
  VAR_8->hookee_post = ((void*)0);
  VAR_8->cmd_pointer = ((void*)0);

  return VAR_8;
}
