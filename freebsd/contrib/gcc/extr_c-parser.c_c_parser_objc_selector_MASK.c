
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ type; int keyword; int value; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static tree
FUNC_2 (c_parser *VAR_3)
{
  c_token *VAR_4 = FUNC_1 (VAR_3);
  tree VAR_5 = VAR_4->value;
  if (VAR_4->type == VAR_1)
    {
      FUNC_0 (VAR_3);
      return VAR_5;
    }
  if (VAR_4->type != VAR_0)
    return VAR_2;
  switch (VAR_4->keyword)
    {
    case 151:
    case 135:
    case 132:
    case 147:
    case 152:
    case 128:
    case 154:
    case 149:
    case 134:
    case 160:
    case 155:
    case 163:
    case 156:
    case 139:
    case 148:
    case 165:
    case 136:
    case 133:
    case 166:
    case 131:
    case 143:
    case 157:
    case 138:
    case 129:
    case 137:
    case 140:
    case 158:
    case 146:
    case 141:
    case 145:
    case 162:
    case 161:
    case 142:
    case 144:
    case 159:
    case 150:
    case 153:
    case 130:
    case 164:
      FUNC_0 (VAR_3);
      return VAR_5;
    default:
      return VAR_2;
    }
}
