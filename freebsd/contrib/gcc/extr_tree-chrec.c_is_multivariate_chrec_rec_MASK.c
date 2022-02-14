
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_2, unsigned int VAR_3)
{
  if (VAR_2 == VAR_0)
    return 0;

  if (FUNC_3 (VAR_2) == VAR_1)
    {
      if (FUNC_2 (VAR_2) != VAR_3)
 return 1;
      else
 return (FUNC_4 (FUNC_0 (VAR_2), VAR_3)
  || FUNC_4 (FUNC_1 (VAR_2), VAR_3));
    }
  else
    return 0;
}
