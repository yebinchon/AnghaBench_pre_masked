
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char** (* completer ) (char*,char*) ;} ;



void
FUNC_0 (struct cmd_list_element *VAR_0,
     char **(*VAR_1) (char *VAR_2, char *VAR_3))
{
  VAR_0->completer = VAR_1;
}
