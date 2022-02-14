
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_4__ {int fx_r_type; int fx_offset; int fx_line; int fx_file; int * fx_addsy; } ;
typedef TYPE_1__ fixS ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,char const*) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6 (fixS *VAR_0)
{


  switch (VAR_0->fx_r_type)
    {
    case 146:
    case 145:
    case 147:
      return 0;

    case 140:
    case 150:
    case 139:
    case 141:
    case 154:
      return 1;

    case 131:
    case 130:
      return 0;

    case 133:
    case 132:
    case 144:
    case 143:
    case 158:
    case 157:
    case 156:
    case 142:
      return 1;

    case 138:
    case 137:
    case 149:
    case 152:
    case 151:
    case 153:
    case 148:
    case 135:
    case 134:
    case 136:


      return 0;
    default:
      return 1;
    }
}
