
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_2__ {int (* read_needs_frame ) (struct symbol*) ;} ;
 int FUNC_0 (struct symbol*) ;
 TYPE_1__* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;

int
FUNC_3 (struct symbol *VAR_0)
{
  switch (FUNC_0 (VAR_0))
    {


    case 145:
    case 144:





      return FUNC_1 (VAR_0)->read_needs_frame (VAR_0);

    case 134:
    case 149:
    case 135:
    case 133:
    case 132:
    case 138:
    case 137:
    case 148:
    case 147:
    case 141:
      return 1;

    case 129:
    case 143:
    case 131:
    case 140:
    case 130:

    case 139:




    case 146:
    case 142:
    case 128:
    case 136:
      return 0;
    }
  return 1;
}
