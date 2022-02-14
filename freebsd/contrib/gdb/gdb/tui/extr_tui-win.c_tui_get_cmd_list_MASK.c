
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,scalar_t__*,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

struct cmd_list_element **
FUNC_1 ()
{
  if (VAR_3 == 0)
    FUNC_0 ("tui", VAR_0, VAR_2,
                    "Text User Interface commands.",
                    &VAR_3, "tui ", 0, &VAR_1);
  return &VAR_3;
}
