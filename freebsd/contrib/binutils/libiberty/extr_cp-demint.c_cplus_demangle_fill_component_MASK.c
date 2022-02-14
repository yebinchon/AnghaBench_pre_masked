
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct demangle_component* right; struct demangle_component* left; } ;
struct TYPE_4__ {TYPE_1__ s_binary; } ;
struct demangle_component {int type; TYPE_2__ u; } ;
typedef enum demangle_component_type { ____Placeholder_demangle_component_type } demangle_component_type ;
int
FUNC_0 (struct demangle_component *VAR_0,
                               enum demangle_component_type VAR_1,
                               struct demangle_component *VAR_2,
                                struct demangle_component *VAR_3)
{
  if (VAR_0 == ((void*)0))
    return 0;
  switch (VAR_1)
    {
    case 150:
    case 153:
    case 139:
    case 145:
    case 162:
    case 133:
    case 159:
    case 168:
    case 151:
    case 169:
    case 144:
    case 135:
    case 167:
    case 166:
    case 142:
    case 141:
    case 140:
    case 155:
    case 154:
      break;


    case 129:
    case 128:
    case 138:
    case 136:
    case 137:
    case 143:
    case 132:
    case 160:
    case 156:
    case 158:
    case 148:
    case 147:
    case 131:
    case 163:
    case 146:
    case 130:
    case 161:
    case 152:
    case 149:
    case 164:
    case 157:
    case 134:
    case 165:
      if (VAR_3 != ((void*)0))
 return 0;
      break;

    default:

      return 0;
    }

  VAR_0->type = VAR_1;
  VAR_0->u.s_binary.left = VAR_2;
  VAR_0->u.s_binary.right = VAR_3;

  return 1;
}
