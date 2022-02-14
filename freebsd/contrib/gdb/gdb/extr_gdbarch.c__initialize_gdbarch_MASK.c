
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 struct cmd_list_element* FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct cmd_list_element*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3 (void)
{
  struct cmd_list_element *VAR_7;

  FUNC_1 (FUNC_0 ("arch",
      VAR_0,
      VAR_6,
      (char *)&VAR_1,
      "Set architecture debugging.\nWhen non-zero, architecture debugging is enabled.", &VAR_2),

       &VAR_4);
  VAR_7 = FUNC_0 ("archdebug",
     VAR_0,
     VAR_6,
     (char *)&VAR_1,
     "Set architecture debugging.\nWhen non-zero, architecture debugging is enabled.", &VAR_3);


  FUNC_2 (VAR_7, "set debug arch");
  FUNC_2 (FUNC_1 (VAR_7, &VAR_5), "show debug arch");
}
