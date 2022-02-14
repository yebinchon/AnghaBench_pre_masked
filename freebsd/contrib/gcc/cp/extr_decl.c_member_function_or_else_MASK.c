
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum overload_flags { ____Placeholder_overload_flags } overload_flags ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1 (tree VAR_1, tree VAR_2, enum overload_flags VAR_3)
{
  if (VAR_1 && VAR_1 != VAR_2)
    {
      if (VAR_3 == VAR_0)
 FUNC_0 ("destructor for alien class %qT cannot be a member", VAR_1);
      else
 FUNC_0 ("constructor for alien class %qT cannot be a member", VAR_1);
      return 0;
    }
  return 1;
}
