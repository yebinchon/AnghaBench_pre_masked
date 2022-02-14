
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int pp_needs_newline ;
typedef int c_pretty_printer ;




 int FUNC_0 (int ) ;


 int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int const VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void
FUNC_10 (c_pretty_printer *VAR_1, tree VAR_2)
{
  if (!FUNC_3 (VAR_2) && FUNC_1 (VAR_2) != VAR_0)
    VAR_2 = FUNC_2 (VAR_2);
  switch (FUNC_1 (VAR_2))
    {
    case 129:

    case 128:
      if (FUNC_1 (FUNC_2 (VAR_2)) == 129)
 FUNC_10 (VAR_1, FUNC_2 (VAR_2));
      if (FUNC_1 (VAR_2) == 129)
 FUNC_6 (VAR_1);
      else
 FUNC_4 (VAR_1);
      FUNC_7 (VAR_1, VAR_2);
      break;

    case 131:
      FUNC_5 (VAR_1);
      FUNC_7 (VAR_1, VAR_2);
      break;




    case 130:
      FUNC_8 (VAR_1, FUNC_0 (VAR_2));
      pp_needs_newline (VAR_3) = 1;
      break;

    default:
      FUNC_9 (VAR_3, VAR_2);
    }
}
