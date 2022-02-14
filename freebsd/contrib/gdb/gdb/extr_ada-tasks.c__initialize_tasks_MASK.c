
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,struct cmd_list_element**,char*,int,struct cmd_list_element**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2 (void)
{
  static struct cmd_list_element *VAR_3 = ((void*)0);
  extern struct cmd_list_element *VAR_4;

  FUNC_0 ("tasks", VAR_1,
     "Without argument: list all known Ada tasks, with status information.\n"
     "info tasks n: print detailed information of task n.\n");

  FUNC_1 ("task", VAR_0, VAR_2,
    "Use this command to switch between tasks.\n The new task ID must be currently known.", &VAR_3, "task ", 1, &VAR_4);

}
