
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_list_element*,int ) ;

void
FUNC_2 (void)
{
  struct cmd_list_element *VAR_4;

  VAR_4 = FUNC_0 ("interpreter-exec", VAR_0,
        VAR_3,
        "Execute a command in an interpreter.  It takes two arguments:\nThe first argument is the name of the interpreter to use.\nThe second argument is the command to execute.\n", &VAR_1);


  FUNC_1 (VAR_4, VAR_2);
}
