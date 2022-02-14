
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_7)
{
  enum attr_type VAR_8;

  if (!VAR_6)
    return 0;

  if (!VAR_7
      || VAR_7 == VAR_2
      || FUNC_0 (VAR_7) == VAR_1
      || FUNC_0 (FUNC_1 (VAR_7)) == VAR_4
      || FUNC_0 (FUNC_1 (VAR_7)) == VAR_0)
    return 0;

  VAR_8 = FUNC_2 (VAR_7);

  switch (VAR_8)
    {
    case 134:
    case 133:
    case 131:
    case 139:
    case 140:
    case 130:
    case 132:
      return 1;
    case 138:
    case 136:
      return 2;
    case 135:
    case 129:
    case 137:
    case 128:
      return 4;
    default:
      if (VAR_5 == VAR_3
   && FUNC_3 (VAR_7))
 return 2;
      return 0;
    }
}
