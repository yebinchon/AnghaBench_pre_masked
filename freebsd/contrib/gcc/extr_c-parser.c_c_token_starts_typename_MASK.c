
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
    case 153:
      switch (VAR_0->id_kind)
 {
 case 151:
   return 0;
 case 150:
   return 1;
 case 152:
   FUNC_1 (FUNC_0 ());
   return 1;
 default:
   FUNC_2 ();
 }
    case 155:
      switch (VAR_0->keyword)
 {
 case 130:
 case 137:
 case 135:
 case 134:
 case 146:
 case 138:
 case 147:
 case 139:
 case 141:
 case 129:
 case 143:
 case 142:
 case 144:
 case 148:
 case 140:
 case 133:
 case 131:
 case 132:
 case 145:
 case 128:
 case 136:
 case 149:
   return 1;
 default:
   return 0;
 }
    case 154:
      if (FUNC_0 ())
 return 1;
      return 0;
    default:
      return 0;
    }
}
