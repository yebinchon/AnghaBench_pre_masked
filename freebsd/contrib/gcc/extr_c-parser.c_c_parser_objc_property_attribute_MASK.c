
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_2__ {scalar_t__ type; int keyword; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6 (c_parser *VAR_3)
{
  tree VAR_4;
  if (FUNC_4 (VAR_3)->type != VAR_1)
    {
      FUNC_1 (VAR_3, "expected a property attribute");
      FUNC_0 (VAR_3);
      return;
    }
  switch (FUNC_4 (VAR_3)->keyword)
    {
    case 129:
      FUNC_0 (VAR_3);
      FUNC_5 (1, VAR_2);
      break;
    case 131:
      FUNC_0 (VAR_3);
      VAR_4 = FUNC_3 (VAR_3);
      if (VAR_4)
 FUNC_5 (2, VAR_4);
      break;
    case 128:
      FUNC_0 (VAR_3);
      VAR_4 = FUNC_3 (VAR_3);
      if (VAR_4)
 FUNC_5 (3, VAR_4);

      if (FUNC_2 (VAR_3, VAR_0))
 FUNC_0 (VAR_3);
      break;

    case 130:
      FUNC_0 (VAR_3);
      FUNC_5 (13, VAR_2);
      break;

    default:
      FUNC_1 (VAR_3, "expected a property attribute");
      FUNC_0 (VAR_3);
    }
}
