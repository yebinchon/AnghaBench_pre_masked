
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,struct cmd_list_element**) ;
 int FUNC_1 (char*,char*,int ,int) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,int ,char*,struct cmd_list_element**,char*,int,struct cmd_list_element**) ;
 int VAR_0 ;
 struct cmd_list_element* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_list_element* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_4 (void)
{
  static struct cmd_list_element *VAR_8 = ((void*)0);

  FUNC_2 ("threads", VAR_2,
     "IDs of currently known threads.");

  FUNC_3 ("thread", VAR_0, VAR_6,
    "Use this command to switch between threads.\nThe new thread ID must be currently known.", &VAR_5, "thread ", 1, &VAR_1);


  FUNC_3 ("apply", VAR_0, VAR_4,
    "Apply a command to a list of threads.",
    &VAR_8, "apply ", 1, &VAR_5);

  FUNC_0 ("all", VAR_0, VAR_3,
    "Apply a command to all threads.", &VAR_8);

  if (!VAR_7)
    FUNC_1 ("t", "thread", VAR_0, 1);
}
