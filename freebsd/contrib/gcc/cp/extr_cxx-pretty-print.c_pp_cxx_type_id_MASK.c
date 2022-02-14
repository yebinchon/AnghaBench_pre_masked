
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int pp_flags ;
typedef int cxx_pretty_printer ;
struct TYPE_3__ {int flags; } ;
 int FUNC_0 (int ) ;





 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (cxx_pretty_printer *VAR_1, tree VAR_2)
{
  pp_flags VAR_3 = FUNC_1 (VAR_1)->flags;
  FUNC_1 (VAR_1)->flags |= VAR_0;

  switch (FUNC_0 (VAR_2))
    {
    case 130:
    case 128:
    case 138:
    case 139:
    case 132:
    case 140:
    case 129:
    case 134:
    case 133:
    case 135:
    case 137:
    case 131:
    case 136:
      FUNC_3 (VAR_1, VAR_2);
      break;

    default:
      FUNC_2 (FUNC_1 (VAR_1), VAR_2);
      break;
    }

  FUNC_1 (VAR_1)->flags = VAR_3;
}
