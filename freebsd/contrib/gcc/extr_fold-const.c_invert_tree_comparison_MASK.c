
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

enum tree_code
FUNC_1 (enum tree_code VAR_2, bool VAR_3)
{
  if (VAR_3 && VAR_1)
    return VAR_0;

  switch (VAR_2)
    {
    case 141:
      return 135;
    case 135:
      return 141;
    case 139:
      return VAR_3 ? 130 : 138;
    case 140:
      return VAR_3 ? 129 : 136;
    case 136:
      return VAR_3 ? 132 : 140;
    case 138:
      return VAR_3 ? 131 : 139;
    case 137:
      return 133;
    case 133:
      return 137;
    case 131:
      return 138;
    case 132:
      return 136;
    case 129:
      return 140;
    case 130:
      return 139;
    case 134:
      return 128;
    case 128:
      return 134;
    default:
      FUNC_0 ();
    }
}
