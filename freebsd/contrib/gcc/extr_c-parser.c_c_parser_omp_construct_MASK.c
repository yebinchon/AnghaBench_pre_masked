
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
typedef enum pragma_kind { ____Placeholder_pragma_kind } pragma_kind ;
typedef int c_parser ;
struct TYPE_2__ {int pragma_kind; int location; } ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13 (c_parser *VAR_0)
{
  enum pragma_kind VAR_1;
  location_t VAR_2;
  tree VAR_3;

  VAR_2 = FUNC_11 (VAR_0)->location;
  VAR_1 = FUNC_11 (VAR_0)->pragma_kind;
  FUNC_2 (VAR_0);




  if (VAR_1 != 135)
    FUNC_1 ();

  switch (VAR_1)
    {
    case 135:
      FUNC_3 (VAR_0);
      return;
    case 134:
      VAR_3 = FUNC_4 (VAR_0);
      break;
    case 133:
      VAR_3 = FUNC_5 (VAR_0);
      break;
    case 132:
      VAR_3 = FUNC_6 (VAR_0);
      break;
    case 131:
      VAR_3 = FUNC_7 (VAR_0);
      break;
    case 130:
      VAR_3 = FUNC_8 (VAR_0);
      break;
    case 129:
      VAR_3 = FUNC_9 (VAR_0);
      break;
    case 128:
      VAR_3 = FUNC_10 (VAR_0);
      break;
    default:
      FUNC_12 ();
    }

  if (VAR_3)
    FUNC_0 (VAR_3, VAR_2);
}
