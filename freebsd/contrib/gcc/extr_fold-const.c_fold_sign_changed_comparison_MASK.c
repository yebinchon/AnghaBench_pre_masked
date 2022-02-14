
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_13 (enum tree_code VAR_9, tree VAR_10,
         tree VAR_11, tree VAR_12)
{
  tree VAR_13, VAR_14;
  tree VAR_15, VAR_16;

  if (FUNC_0 (VAR_11) != VAR_6
      && FUNC_0 (VAR_11) != VAR_0)
    return VAR_7;

  VAR_16 = FUNC_6 (VAR_11);
  VAR_13 = FUNC_4 (VAR_11, 0);
  VAR_15 = FUNC_6 (VAR_13);
  if (FUNC_7 (VAR_15) != FUNC_7 (VAR_16))
    return VAR_7;

  if (FUNC_0 (VAR_12) != VAR_4
      && !((FUNC_0 (VAR_12) == VAR_6
     || FUNC_0 (VAR_12) == VAR_0)
    && FUNC_6 (FUNC_4 (VAR_12, 0)) == VAR_15))
    return VAR_7;

  if (FUNC_8 (VAR_15) != FUNC_8 (VAR_16)
      && VAR_9 != VAR_5
      && VAR_9 != VAR_1)
    return VAR_7;

  if (FUNC_0 (VAR_12) == VAR_4)
    {
      VAR_14 = FUNC_9 (VAR_15,
    FUNC_3 (VAR_12),
    FUNC_2 (VAR_12));
      VAR_12 = FUNC_12 (VAR_14, 0,
        FUNC_5 (VAR_12),
        FUNC_1 (VAR_12));
    }
  else
    VAR_12 = FUNC_11 (VAR_15, VAR_12);

  return FUNC_10 (VAR_9, VAR_10, VAR_13, VAR_12);
}
