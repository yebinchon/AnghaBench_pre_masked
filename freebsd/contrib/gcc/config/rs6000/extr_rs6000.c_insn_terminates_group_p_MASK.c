
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum group_termination { ____Placeholder_group_termination } group_termination ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_2, enum group_termination VAR_3)
{
  enum attr_type VAR_4;

  if (! VAR_2)
    return 0;

  VAR_4 = FUNC_0 (VAR_2);

  if (FUNC_3 (VAR_2))
    return 1;

  if (VAR_3 == VAR_0)
    {
      if (FUNC_1 (VAR_2))
 return 1;
      return 0;
    }
  else if (VAR_3 == VAR_1)
    {
      if (FUNC_2 (VAR_2))
 return 1;
      return 0;
    }

  return 0;
}
