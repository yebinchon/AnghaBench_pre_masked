
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static const char *
FUNC_5 (tree VAR_0)
{
  if (FUNC_3 (VAR_0))
    {
      if (FUNC_4 (VAR_0))
 return "static member function";
      else if (FUNC_1 (VAR_0))
 return "copy constructor";
      else if (FUNC_0 (VAR_0))
 return "constructor";
      else if (FUNC_2 (VAR_0))
 return "destructor";
      else
 return "member function";
    }
  else
    return "function";
}
