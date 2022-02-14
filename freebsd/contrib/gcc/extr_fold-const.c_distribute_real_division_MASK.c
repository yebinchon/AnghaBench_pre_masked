
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int,int *,int *) ;

__attribute__((used)) static tree
FUNC_7 (enum tree_code VAR_5, tree VAR_6, tree VAR_7, tree VAR_8)
{
  bool VAR_9 = FUNC_0 (VAR_7) == VAR_0;
  bool VAR_10 = FUNC_0 (VAR_8) == VAR_0;


  if (VAR_9 == VAR_10
      && FUNC_5 (FUNC_1 (VAR_7, 1),
         FUNC_1 (VAR_8, 1), 0))
    return FUNC_4 (VAR_9 ? VAR_0 : VAR_2, VAR_6,
   FUNC_4 (VAR_5, VAR_6,
         FUNC_1 (VAR_7, 0),
         FUNC_1 (VAR_8, 0)),
   FUNC_1 (VAR_7, 1));


  if (FUNC_5 (FUNC_1 (VAR_7, 0),
         FUNC_1 (VAR_8, 0), 0)
      && FUNC_0 (FUNC_1 (VAR_7, 1)) == VAR_3
      && FUNC_0 (FUNC_1 (VAR_8, 1)) == VAR_3)
    {
      REAL_VALUE_TYPE VAR_11, VAR_12;
      VAR_11 = FUNC_2 (FUNC_1 (VAR_7, 1));
      VAR_12 = FUNC_2 (FUNC_1 (VAR_8, 1));
      if (!VAR_9)
 FUNC_6 (&VAR_11, VAR_2, &VAR_4, &VAR_11);
      if (!VAR_10)
        FUNC_6 (&VAR_12, VAR_2, &VAR_4, &VAR_12);
      FUNC_6 (&VAR_11, VAR_5, &VAR_11, &VAR_12);
      return FUNC_4 (VAR_0, VAR_6,
     FUNC_1 (VAR_7, 0),
     FUNC_3 (VAR_6, VAR_11));
    }

  return VAR_1;
}
