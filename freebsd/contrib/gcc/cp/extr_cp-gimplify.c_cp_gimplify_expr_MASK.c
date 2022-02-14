
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
struct TYPE_2__ {int stmts_are_full_exprs_p; } ;




 int FUNC_0 (int ) ;







 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 () ;

int
FUNC_27 (tree *VAR_4, tree *VAR_5, tree *VAR_6)
{
  int VAR_7 = 0;
  enum tree_code VAR_8 = FUNC_3 (*VAR_4);
  enum gimplify_status VAR_9;

  if (FUNC_1 (VAR_8))
    {
      VAR_7 = FUNC_26 ();
      FUNC_13 ()->stmts_are_full_exprs_p
 = FUNC_2 (*VAR_4);
    }

  switch (VAR_8)
    {
    case 134:
      *VAR_4 = FUNC_12 (*VAR_4);
      VAR_9 = VAR_1;
      break;

    case 148:
      FUNC_25 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 132:


      *VAR_4 = FUNC_4 (*VAR_4, 0);
      VAR_9 = VAR_1;
      break;

    case 136:
      FUNC_22 (VAR_4, VAR_5);
      VAR_9 = VAR_1;
      break;




    case 137:
      FUNC_10 (VAR_4, VAR_5, VAR_6);
      VAR_9 = VAR_1;
      break;

    case 142:

      *VAR_4 = FUNC_7 (FUNC_5 (*VAR_4), ((void*)0));
      VAR_9 = VAR_1;
      break;

    case 147:
      *VAR_4 = FUNC_0 (*VAR_4);
      VAR_9 = VAR_1;
      break;

    case 131:
      FUNC_17 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 139:
      FUNC_15 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 143:
      FUNC_16 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 129:


      *VAR_4 = FUNC_8 ();
      VAR_9 = VAR_0;
      break;

    case 138:
      FUNC_21 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 140:
      FUNC_20 (VAR_4, VAR_5);
      VAR_9 = VAR_0;
      break;

    case 128:
      FUNC_24 (VAR_4);
      VAR_9 = VAR_0;
      break;

    case 144:
      FUNC_18 (VAR_4);
      VAR_9 = VAR_0;
      break;

    case 133:
      FUNC_23 (VAR_4);
      VAR_9 = VAR_0;
      break;

    case 135:
      VAR_9 = FUNC_11 (VAR_4);
      break;

    case 145:
      *VAR_4 = FUNC_6 (VAR_3);
      VAR_9 = VAR_0;
      break;

    case 146:
      *VAR_4 = FUNC_6 (VAR_2);
      VAR_9 = VAR_0;
      break;

    case 141:
      FUNC_19 (VAR_4);
      VAR_9 = VAR_1;
      break;

    case 130:
      {
 tree VAR_10 = FUNC_4 (*VAR_4, 0);
 tree VAR_11 = FUNC_5 (*VAR_4);
 *VAR_4 = (FUNC_5 (VAR_10) != VAR_11) ? FUNC_14 (VAR_11, VAR_10)
         : VAR_10;
 VAR_9 = VAR_1;
      }
      break;

    default:
      VAR_9 = FUNC_9 (VAR_4, VAR_5, VAR_6);
      break;
    }


  if (FUNC_1 (VAR_8))
    FUNC_13 ()->stmts_are_full_exprs_p
      = VAR_7;

  return VAR_9;
}
