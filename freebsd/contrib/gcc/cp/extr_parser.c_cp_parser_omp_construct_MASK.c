
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_11__ {int pragma_kind; int location; } ;
typedef TYPE_1__ cp_token ;
typedef int cp_parser ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10 (cp_parser *VAR_0, cp_token *VAR_1)
{
  tree VAR_2;

  switch (VAR_1->pragma_kind)
    {
    case 135:
      FUNC_1 (VAR_0, VAR_1);
      return;
    case 134:
      VAR_2 = FUNC_2 (VAR_0, VAR_1);
      break;
    case 133:
      VAR_2 = FUNC_3 (VAR_0, VAR_1);
      break;
    case 132:
      VAR_2 = FUNC_4 (VAR_0, VAR_1);
      break;
    case 131:
      VAR_2 = FUNC_5 (VAR_0, VAR_1);
      break;
    case 130:
      VAR_2 = FUNC_6 (VAR_0, VAR_1);
      break;
    case 129:
      VAR_2 = FUNC_7 (VAR_0, VAR_1);
      break;
    case 128:
      VAR_2 = FUNC_8 (VAR_0, VAR_1);
      break;
    default:
      FUNC_9 ();
    }

  if (VAR_2)
    FUNC_0 (VAR_2, VAR_1->location);
}
