
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,struct cmd_list_element**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1 (struct cmd_list_element *VAR_3,
     struct cmd_list_element *VAR_4)
{
  FUNC_0 ("system-call-allowed", VAR_0,
    VAR_1,
    "Set if the host system(3) call is allowed for the target.\n",
    &VAR_3);
  FUNC_0 ("system-call-allowed", VAR_0,
    VAR_2,
    "Show if the host system(3) call is allowed for the target.\n",
    &VAR_4);
}
