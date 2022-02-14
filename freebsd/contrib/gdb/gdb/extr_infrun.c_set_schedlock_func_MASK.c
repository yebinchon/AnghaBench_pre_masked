
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 scalar_t__ FUNC_0 (struct cmd_list_element*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_5, int VAR_6, struct cmd_list_element *VAR_7)
{
  if (FUNC_0 (VAR_7) == VAR_2)
    if (!VAR_3)
      {
 VAR_1 = VAR_0;
 FUNC_1 ("Target '%s' cannot support this command.", VAR_4);
      }
}
