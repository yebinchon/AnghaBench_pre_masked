
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int keyword; int id_kind; } ;
typedef TYPE_1__ c_token ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static bool
FUNC_3 (c_token *VAR_0)
{
  switch (VAR_0->type)
    {
    case 160:
      switch (VAR_0->id_kind)
 {
 case 158:
   return 0;
 case 157:
   return 1;
 case 159:
   FUNC_1 (FUNC_0 ());
   return 1;
 default:
   FUNC_2 ();
 }
    case 162:
      switch (VAR_0->keyword)
 {
 case 136:
 case 145:
 case 140:
 case 133:
 case 143:
 case 155:
 case 134:
 case 130:
 case 141:
 case 138:
 case 137:
 case 152:
 case 142:
 case 153:
 case 144:
 case 147:
 case 129:
 case 149:
 case 148:
 case 150:
 case 154:
 case 146:
 case 135:
 case 131:
 case 132:
 case 151:
 case 128:
 case 139:
 case 156:
   return 1;
 default:
   return 0;
 }
    case 161:
      if (FUNC_0 ())
 return 1;
      return 0;
    default:
      return 0;
    }
}
