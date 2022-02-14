
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cmd_list_element {char* prefixname; int class; int * func; struct cmd_list_element** prefixlist; scalar_t__ abbrev_flag; struct cmd_list_element* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmd_list_element*,int ,char*,int ,struct ui_file*) ;

__attribute__((used)) static void
FUNC_1 (struct ui_file *VAR_1)
{
  struct cmd_list_element *VAR_2;
  extern struct cmd_list_element *VAR_3;

  for (VAR_2 = VAR_3; VAR_2; VAR_2 = VAR_2->next)
    {
      if (VAR_2->abbrev_flag)
        continue;

      if (VAR_2->prefixlist)
        FUNC_0 (*VAR_2->prefixlist, VAR_0, VAR_2->prefixname, 0, VAR_1);


      else if (VAR_2->func == ((void*)0))
        FUNC_0 (VAR_3, VAR_2->class, "", 0, VAR_1);
    }
}
