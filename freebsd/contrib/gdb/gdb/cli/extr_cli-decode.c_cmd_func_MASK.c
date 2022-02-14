
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int (* func ) (struct cmd_list_element*,char*,int) ;} ;


 scalar_t__ FUNC_0 (struct cmd_list_element*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cmd_list_element*,char*,int) ;

void
FUNC_3 (struct cmd_list_element *VAR_0, char *VAR_1, int VAR_2)
{
  if (FUNC_0 (VAR_0))
    (*VAR_0->func) (VAR_0, VAR_1, VAR_2);
  else
    FUNC_1 ("Invalid command");
}
