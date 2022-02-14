
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* doc; } ;


 scalar_t__ VAR_0 ;
 struct cmd_list_element* FUNC_0 (char**,int ,int *,int) ;
 int VAR_1 ;

void
FUNC_1 (char *VAR_2, int VAR_3, struct cmd_list_element *VAR_4)
{
  char *VAR_5 = "verbose";
  struct cmd_list_element *VAR_6;

  VAR_6 = FUNC_0 (&VAR_5, VAR_1, ((void*)0), 1);

  if (VAR_0)
    {
      VAR_4->doc = "Set verbose printing of informational messages.";
      VAR_6->doc = "Show verbose printing of informational messages.";
    }
  else
    {
      VAR_4->doc = "Set verbosity.";
      VAR_6->doc = "Show verbosity.";
    }
}
