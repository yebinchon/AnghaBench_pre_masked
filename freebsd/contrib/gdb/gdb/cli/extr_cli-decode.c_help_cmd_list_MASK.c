
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cmd_list_element {scalar_t__ abbrev_flag; int class; char* prefixname; struct cmd_list_element** prefixlist; int doc; int name; int * func; struct cmd_list_element* next; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ui_file*,char*,char*,int ) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int FUNC_2 (struct ui_file*,int ) ;

void
FUNC_3 (struct cmd_list_element *VAR_2, enum command_class VAR_3,
        char *VAR_4, int VAR_5, struct ui_file *VAR_6)
{
  struct cmd_list_element *VAR_7;

  for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
    {
      if (VAR_7->abbrev_flag == 0 &&
   (VAR_3 == VAR_1
    || (VAR_3 == VAR_0 && VAR_7->func == ((void*)0))
    || (VAR_3 == VAR_7->class && VAR_7->func != ((void*)0))))
 {
   FUNC_0 (VAR_6, "%s%s -- ", VAR_4, VAR_7->name);
   FUNC_2 (VAR_6, VAR_7->doc);
   FUNC_1 ("\n", VAR_6);
 }
      if (VAR_5
   && VAR_7->prefixlist != 0
   && VAR_7->abbrev_flag == 0)
 FUNC_3 (*VAR_7->prefixlist, VAR_3, VAR_7->prefixname, 1, VAR_6);
    }
}
