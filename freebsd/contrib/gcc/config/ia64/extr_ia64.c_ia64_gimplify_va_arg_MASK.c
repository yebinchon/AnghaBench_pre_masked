
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int) ;
 int FUNC_11 (int ,int ,int *,int *) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_8, tree VAR_9, tree *VAR_10, tree *VAR_11)
{

  if (FUNC_10 (((void*)0), FUNC_3 (VAR_9), VAR_9, 0))
    {
      tree VAR_12 = FUNC_6 (VAR_9);
      tree VAR_13 = FUNC_11 (VAR_8, VAR_12, VAR_10, VAR_11);
      return FUNC_7 (VAR_13);
    }





  if ((FUNC_0 (VAR_9) == VAR_6 || FUNC_0 (VAR_9) == VAR_2)
      ? FUNC_9 (VAR_9) > 8 : FUNC_2 (VAR_9) > 8 * VAR_0)
    {
      tree VAR_14 = FUNC_4 (VAR_5, FUNC_1 (VAR_8), VAR_8,
         FUNC_5 (VAR_4, 2 * VAR_7 - 1));
      VAR_14 = FUNC_4 (VAR_1, FUNC_1 (VAR_14), VAR_14,
    FUNC_5 (VAR_4, -2 * VAR_7));
      VAR_14 = FUNC_4 (VAR_3, FUNC_1 (VAR_8), VAR_8, VAR_14);
      FUNC_8 (VAR_14, VAR_10);
    }

  return FUNC_11 (VAR_8, VAR_9, VAR_10, VAR_11);
}
