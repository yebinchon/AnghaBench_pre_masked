
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
struct rus_data {int may_branch; int may_throw; int * last_goto; } ;







 int FUNC_0 (int ) ;




 int const FUNC_1 (int ) ;


 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct rus_data*) ;
 int FUNC_6 (int *,struct rus_data*) ;
 int FUNC_7 (int *,struct rus_data*) ;
 int FUNC_8 (int *,struct rus_data*) ;
 int FUNC_9 (int *,struct rus_data*) ;
 int FUNC_10 (int *,struct rus_data*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20 (tree *VAR_1, struct rus_data *VAR_2)
{
  tree VAR_3 = *VAR_1, VAR_4;

  switch (FUNC_1 (VAR_3))
    {
    case 135:
      FUNC_6 (VAR_1, VAR_2);
      break;

    case 128:
      FUNC_10 (VAR_1, VAR_2);
      break;

    case 129:
      FUNC_9 (VAR_1, VAR_2);
      break;

    case 137:
      FUNC_5 (VAR_1, VAR_2);
      break;

    case 134:
      FUNC_7 (VAR_1, VAR_2);
      break;

    case 133:
      FUNC_8 (VAR_1, VAR_2);
      break;

    case 131:
      FUNC_2 (VAR_1);
      VAR_2->last_goto = ((void*)0);
      VAR_2->may_branch = 1;
      break;

    case 136:
      FUNC_2 (VAR_1);
      VAR_2->last_goto = ((void*)0);
      FUNC_4 (VAR_3);
      FUNC_19 (VAR_3);
      if (FUNC_11 (VAR_3))
 VAR_2->may_throw = 1;
      break;

    case 132:
      VAR_2->last_goto = ((void*)0);
      FUNC_2 (VAR_1);
      VAR_4 = FUNC_3 (VAR_3);
      if (VAR_4)
 {
   FUNC_19 (VAR_4);
   FUNC_4 (VAR_4);
 }
      if (FUNC_11 (VAR_3))
 VAR_2->may_throw = 1;
      break;

    case 130:
      {
 tree_stmt_iterator VAR_5 = FUNC_16 (VAR_3);
 while (!FUNC_13 (VAR_5))
   {
     VAR_3 = FUNC_17 (VAR_5);
     if (FUNC_0 (VAR_3))
       {
  FUNC_12 (&VAR_5);
  continue;
       }

     FUNC_20 (FUNC_18 (VAR_5), VAR_2);

     VAR_3 = FUNC_17 (VAR_5);
     if (FUNC_1 (VAR_3) == 130)
       {
  FUNC_14 (&VAR_5, VAR_3, VAR_0);
  FUNC_12 (&VAR_5);
       }
     else
       FUNC_15 (&VAR_5);
   }
      }
      break;
    case 138:
      FUNC_2 (VAR_1);
      VAR_2->last_goto = ((void*)0);
      break;

    default:
      VAR_2->last_goto = ((void*)0);
      break;
    }
}
