
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9 (c_pretty_printer *VAR_3, tree VAR_4)
{
  const enum tree_code VAR_5 = FUNC_0 (VAR_4);

  switch (VAR_5)
    {
    case 130:
      {
 tree VAR_6 = FUNC_1 (VAR_4);
 if (VAR_6 == VAR_1)
   FUNC_2 (VAR_3, VAR_4);
 else if (VAR_6 == VAR_2)
   FUNC_3 (VAR_3, VAR_4);
 else if (FUNC_0 (VAR_6) == VAR_0
   && FUNC_4 (VAR_3, VAR_4))
   ;
 else
   FUNC_6 (VAR_3, VAR_4);
      }
      break;

    case 129:
      FUNC_5 (VAR_3, VAR_4);
      break;

    case 128:
      FUNC_7 (VAR_3, VAR_4);
      break;

    default:
      FUNC_8 (VAR_3, VAR_4);
      break;
    }
}
