
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

 int VAR_4 ;

 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,char) ;
 int FUNC_22 (int *,int ) ;

__attribute__((used)) static void
FUNC_23 (c_pretty_printer *VAR_5, tree VAR_6)
{
  tree VAR_7 = FUNC_7 (VAR_6);
  const enum tree_code VAR_8 = FUNC_2 (VAR_7);

  switch (VAR_8)
    {
    case 130:
    case 129:
    case 132:
      {
 tree VAR_9 = FUNC_4 (VAR_6, 0);
 for (; VAR_9 != VAR_3; VAR_9 = FUNC_1 (VAR_9))
   {
     if (VAR_8 == 130 || VAR_8 == 129)
       {
  FUNC_12 (VAR_5);
  FUNC_15 (VAR_5, FUNC_5 (VAR_9));
       }
     else
       {
  FUNC_14 (VAR_5);
  if (FUNC_5 (VAR_9))
    FUNC_10 (VAR_5, FUNC_5 (VAR_9));
  FUNC_16 (VAR_5);
       }
     FUNC_17 (VAR_5);
     FUNC_18 (VAR_5);
     FUNC_17 (VAR_5);
     FUNC_20 (VAR_5, FUNC_8 (VAR_9));
     if (FUNC_1 (VAR_9))
       FUNC_21 (VAR_5, ',');
   }
      }
      return;

    case 128:
      if (FUNC_2 (VAR_6) == VAR_4)
 FUNC_13 (VAR_5, FUNC_9 (VAR_6));
      else if (FUNC_2 (VAR_6) == VAR_2)
 FUNC_11 (VAR_5, FUNC_0 (VAR_6));
      else
 break;
      return;

    case 131:
      if (FUNC_2 (VAR_6) == VAR_2)
 FUNC_11 (VAR_5, FUNC_0 (VAR_6));
      else if (FUNC_2 (VAR_6) == VAR_0 || FUNC_2 (VAR_6) == VAR_1)
 {
   const bool VAR_10 = FUNC_2 (VAR_6) == VAR_0;
   FUNC_19 (VAR_5, VAR_10 ? FUNC_6 (VAR_6) : FUNC_4 (VAR_6, 0));
   FUNC_21 (VAR_5, ',');
   FUNC_19 (VAR_5, VAR_10 ? FUNC_3 (VAR_6) : FUNC_4 (VAR_6, 1));
 }
      else
 break;
      return;

    default:
      break;
    }

  FUNC_22 (VAR_5, VAR_7);
}
