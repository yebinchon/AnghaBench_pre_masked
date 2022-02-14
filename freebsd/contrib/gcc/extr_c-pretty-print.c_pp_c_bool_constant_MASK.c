
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int c_pretty_printer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (c_pretty_printer *VAR_4, tree VAR_5)
{
  if (VAR_5 == VAR_1)
    {
      if (FUNC_1 ())
 FUNC_2 (VAR_4, "false");
      else if (VAR_3)
 FUNC_2 (VAR_4, "_False");
      else
 FUNC_4 (VAR_4, VAR_5);
    }
  else if (VAR_5 == VAR_2)
    {
      if (FUNC_1 ())
 FUNC_2 (VAR_4, "true");
      else if (VAR_3)
 FUNC_2 (VAR_4, "_True");
      else
 FUNC_4 (VAR_4, VAR_5);
    }
  else if (FUNC_0 (VAR_5) == VAR_0)
    FUNC_3 (VAR_4, VAR_5);
  else
    FUNC_4 (VAR_4, VAR_5);
}
