
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,int,int) ;
 scalar_t__ VAR_6 ;

tree
FUNC_10 (enum tree_code VAR_7, tree VAR_8, enum tree_code VAR_9,
     tree VAR_10, enum tree_code VAR_11, bool *VAR_12)
{
  tree VAR_13;
  tree VAR_14;
  tree VAR_15;

  VAR_13 = VAR_8;
  VAR_14 = VAR_10;

  if (VAR_5)
    {
      if (FUNC_8 (VAR_8)
   || FUNC_8 (VAR_10))
 return FUNC_4 (VAR_7, VAR_8, VAR_10);
      VAR_8 = FUNC_6 (VAR_8);
      VAR_10 = FUNC_6 (VAR_10);
    }

  if (VAR_7 == VAR_0)
    VAR_15 = FUNC_2 (VAR_8, VAR_10);
  else
    VAR_15 = FUNC_5 (VAR_7, VAR_1, VAR_8, VAR_10, VAR_3,
    VAR_12);




  if (VAR_6
      && !VAR_5
      && !FUNC_7 (VAR_8)
      && !FUNC_7 (VAR_10)
      && (VAR_7 != VAR_2
   || !FUNC_0 (FUNC_1 (VAR_8))))
    FUNC_9 (VAR_7, VAR_9, VAR_11);

  if (VAR_5 && VAR_15 != VAR_4)
    return FUNC_3 (VAR_7, VAR_15, VAR_13, VAR_14);

  return VAR_15;
}
