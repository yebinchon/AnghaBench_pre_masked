
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct affine_tree_combination {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;



 int VAR_0 ;





 int FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct affine_tree_combination*,struct affine_tree_combination*) ;
 int FUNC_4 (struct affine_tree_combination*,int ,int) ;
 int FUNC_5 (struct affine_tree_combination*,int ,int) ;
 int FUNC_6 (struct affine_tree_combination*,int ,int ) ;
 int FUNC_7 (struct affine_tree_combination*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int*,int *,int*,int*,int*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (tree VAR_1, tree VAR_2,
    struct affine_tree_combination *VAR_3)
{
  struct affine_tree_combination VAR_4;
  enum tree_code VAR_5;
  tree VAR_6, VAR_7, VAR_8;
  HOST_WIDE_INT VAR_9, VAR_10;
  enum machine_mode VAR_11;
  int VAR_12, VAR_13;

  FUNC_0 (VAR_1);

  VAR_5 = FUNC_1 (VAR_1);
  switch (VAR_5)
    {
    case 132:
      FUNC_5 (VAR_3, VAR_2, FUNC_10 (VAR_1));
      return;

    case 128:
    case 131:
      FUNC_11 (FUNC_2 (VAR_1, 0), VAR_2, VAR_3);
      FUNC_11 (FUNC_2 (VAR_1, 1), VAR_2, &VAR_4);
      if (VAR_5 == 131)
 FUNC_7 (&VAR_4, -1);
      FUNC_3 (VAR_3, &VAR_4);
      return;

    case 130:
      VAR_6 = FUNC_2 (VAR_1, 1);
      if (FUNC_1 (VAR_6) != 132)
 break;
      FUNC_11 (FUNC_2 (VAR_1, 0), VAR_2, VAR_3);
      FUNC_7 (VAR_3, FUNC_10 (VAR_6));
      return;

    case 129:
      FUNC_11 (FUNC_2 (VAR_1, 0), VAR_2, VAR_3);
      FUNC_7 (VAR_3, -1);
      return;

    case 133:
      VAR_7 = FUNC_9 (FUNC_2 (VAR_1, 0), &VAR_10, &VAR_9,
      &VAR_8, &VAR_11, &VAR_12, &VAR_13,
      0);
      if (VAR_9 % VAR_0 != 0)
 break;
      FUNC_5 (VAR_3, VAR_2, VAR_9 / VAR_0);
      VAR_7 = FUNC_8 (VAR_7);
      if (FUNC_1 (VAR_7) == 133)
 FUNC_4 (VAR_3, VAR_7, 1);
      else
 {
   FUNC_11 (VAR_7, VAR_2, &VAR_4);
   FUNC_3 (VAR_3, &VAR_4);
 }
      if (VAR_8)
 {
   FUNC_11 (VAR_8, VAR_2, &VAR_4);
   FUNC_3 (VAR_3, &VAR_4);
 }
      return;

    default:
      break;
    }

  FUNC_6 (VAR_3, VAR_2, VAR_1);
}
