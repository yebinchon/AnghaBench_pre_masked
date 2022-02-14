
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int fr_var; int fr_subtype; } ;
typedef TYPE_1__ fragS ;
struct TYPE_16__ {int owner; } ;
typedef TYPE_2__ asection ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,long) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int,long) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

int
FUNC_7 (asection *VAR_0, fragS *VAR_1, long VAR_2)
{
  int VAR_3;
  int VAR_4;

  VAR_3 = VAR_1->fr_var;
  switch (VAR_1->fr_subtype)
    {
    case 139:
      VAR_4 = FUNC_4(VAR_1, VAR_0, VAR_2);
      break;
    case 140:
    case 138:
    case 132:
      VAR_4 = FUNC_6(VAR_1, 8, 2);
      break;
    case 141:
    case 133:
      VAR_4 = FUNC_6(VAR_1, 5, 2);
      break;
    case 136:
    case 130:
      VAR_4 = FUNC_6(VAR_1, 5, 1);
      break;
    case 137:
    case 131:
      VAR_4 = FUNC_6(VAR_1, 5, 0);
      break;
    case 148:
      VAR_4 = FUNC_4(VAR_1, VAR_0, VAR_2);
      break;
    case 135:
    case 134:
    case 144:
    case 145:
      VAR_4 = FUNC_6(VAR_1, 8, 0);
      break;
    case 147:
      VAR_4 = FUNC_5(VAR_1, VAR_0, 11, VAR_2);
      break;
    case 146:
      VAR_4 = FUNC_5(VAR_1, VAR_0, 8, VAR_2);
      break;
    case 151:
    case 152:
      VAR_4 = FUNC_6 (VAR_1, 8, 2);
      break;
    case 142:
    case 143:
      VAR_4 = FUNC_6 (VAR_1, 7, 2);
      break;
    case 150:
    case 149:
    case 129:
    case 128:
      VAR_4 = FUNC_3 (VAR_1, VAR_0);
      break;
    default:
      FUNC_0();
    }

  VAR_1->fr_var = VAR_4;




  if (VAR_2 <= 0 && VAR_4 > 2)
    {
      FUNC_2 (VAR_0->owner, VAR_0, VAR_1);
      FUNC_1(VAR_1);
    }

  return VAR_4 - VAR_3;
}
