
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int pretty_printer ;




 int const VAR_0 ;



 int VAR_1 ;
 int const VAR_2 ;




 int const FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6 (pretty_printer *VAR_3, tree VAR_4)
{
  tree VAR_5;

  FUNC_4 (FUNC_0 (VAR_4) == VAR_0);

  VAR_5 = FUNC_1 (VAR_4, 0);

  if (FUNC_0 (VAR_5) == VAR_2)
    VAR_5 = FUNC_1 (VAR_5, 0);

  switch (FUNC_0 (VAR_5))
    {
    case 128:
    case 130:
      FUNC_2 (VAR_3, VAR_5);
      break;

    case 137:
    case 133:
    case 132:
      FUNC_3 (VAR_3, FUNC_1 (VAR_5, 0), 0, 0, 0);
      break;

    case 134:
      FUNC_5 (VAR_3, "(");
      FUNC_3 (VAR_3, FUNC_1 (VAR_5, 0), 0, 0, 0);
      FUNC_5 (VAR_3, ") ? ");
      FUNC_3 (VAR_3, FUNC_1 (VAR_5, 1), 0, 0, 0);
      FUNC_5 (VAR_3, " : ");
      FUNC_3 (VAR_3, FUNC_1 (VAR_5, 2), 0, 0, 0);
      break;

    case 135:

      if (FUNC_0 (FUNC_1 (VAR_5, 0)) == 133 ||
   FUNC_0 (FUNC_1 (VAR_5, 0)) == 128)
 FUNC_2 (VAR_3, FUNC_1 (VAR_5, 1));
      else
 FUNC_3 (VAR_3, FUNC_1 (VAR_5, 0), 0, 0, 0);




      break;

    case 136:
      if (FUNC_0 (FUNC_1 (VAR_5, 0)) == 128)
 FUNC_2 (VAR_3, FUNC_1 (VAR_5, 0));
      else
 FUNC_3 (VAR_3, VAR_5, 0, 0, 0);
      break;

    case 129:
    case 131:
      FUNC_3 (VAR_3, VAR_5, 0, 0, 0);
      break;

    default:
      VAR_1;
    }
}
