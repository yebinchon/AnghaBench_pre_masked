
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_8)
{
  if (!VAR_8 || !FUNC_1 (VAR_8)
      || FUNC_0 (FUNC_2 (VAR_8)) == VAR_6
      || FUNC_0 (FUNC_2 (VAR_8)) == VAR_0)
    return 0;

  if (VAR_7)
    {
      enum attr_type VAR_9 = FUNC_3 (VAR_8);
      if (VAR_9 == VAR_1
   || VAR_9 == VAR_2
   || VAR_9 == VAR_3
   || VAR_9 == VAR_5
   || VAR_9 == VAR_4)
 return 1;
    }

  return 0;
}
