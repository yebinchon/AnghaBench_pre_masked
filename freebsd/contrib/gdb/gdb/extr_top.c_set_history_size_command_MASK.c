
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (char *VAR_2, int VAR_3, struct cmd_list_element *VAR_4)
{
  if (VAR_1 == VAR_0)
    FUNC_2 ();
  else if (VAR_1 >= 0)
    FUNC_1 (VAR_1);
  else
    {
      VAR_1 = VAR_0;
      FUNC_0 ("History size must be non-negative");
    }
}
