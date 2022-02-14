
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_5)
{
  if (!VAR_5 || !FUNC_1 (VAR_5)
      || FUNC_0 (FUNC_2 (VAR_5)) == VAR_3
      || FUNC_0 (FUNC_2 (VAR_5)) == VAR_0)
    return 0;

  if (VAR_4)
    {
      enum attr_type VAR_6 = FUNC_3 (VAR_5);
      if (VAR_6 == VAR_1 || VAR_6 == VAR_2)
 return 1;
      return 0;
    }

  return 0;
}
