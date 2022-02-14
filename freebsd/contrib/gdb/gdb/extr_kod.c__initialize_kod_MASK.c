
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3 (void)
{
  struct cmd_list_element *VAR_6;

  VAR_6 = FUNC_0 ("os", VAR_1, VAR_5,
     (char *) &VAR_2,
     "Set operating system",
     &VAR_3);
  FUNC_2 (VAR_6, VAR_0);
  FUNC_1 (VAR_6, &VAR_4);
}
