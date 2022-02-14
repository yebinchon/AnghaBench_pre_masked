
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;
 scalar_t__ FUNC_9 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int VAR_7 ;

tree
FUNC_15 (enum tree_code VAR_8, tree VAR_9, tree VAR_10)
{
  tree VAR_11, VAR_12, VAR_13;

  if (VAR_9 == VAR_6 || VAR_10 == VAR_6)
    return VAR_6;





  VAR_12 = FUNC_5 (VAR_9);
  if (!FUNC_0 (VAR_12)
      && !FUNC_1 (VAR_12)
      && !FUNC_2 (VAR_12))
    {
      FUNC_12 ("invalid expression type for %<#pragma omp atomic%>");
      return VAR_6;
    }





  VAR_13 = FUNC_10 (VAR_0, VAR_9, 0);
  if (VAR_13 == VAR_6)
    return VAR_6;
  VAR_13 = FUNC_14 (VAR_13);
  if (FUNC_3 (VAR_13) != VAR_3
      && (FUNC_3 (VAR_13) != VAR_0
   || FUNC_3 (FUNC_4 (VAR_13, 0)) != VAR_5))
    {


      tree VAR_14 = FUNC_11 (FUNC_5 (VAR_13), ((void*)0));
      VAR_13 = FUNC_7 (VAR_4, FUNC_5 (VAR_13), VAR_14, VAR_13, ((void*)0), ((void*)0));
    }
  VAR_9 = FUNC_8 (VAR_13, ((void*)0));




  VAR_11 = FUNC_9 (VAR_9, VAR_8, VAR_10);
  if (VAR_11 == VAR_6)
    return VAR_6;
  FUNC_13 (FUNC_3 (VAR_11) == VAR_1);
  VAR_10 = FUNC_4 (VAR_11, 1);


  return FUNC_6 (VAR_2, VAR_7, VAR_13, VAR_10);
}
