
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

tree
FUNC_8 (tree VAR_3, tree VAR_4)
{
  enum tree_code VAR_5;
  enum tree_code VAR_6;


  if (VAR_3 == VAR_2 || VAR_4 == VAR_2)
    return VAR_2;

  VAR_5 = FUNC_1 (VAR_3);
  VAR_6 = FUNC_1 (VAR_4);

  if ((FUNC_0 (VAR_3) || VAR_5 == VAR_0
       || VAR_5 == VAR_1)
      && (FUNC_0 (VAR_4) || VAR_6 == VAR_0
   || VAR_6 == VAR_1))
    return FUNC_7 (VAR_3, VAR_4);

  else if ((FUNC_4 (VAR_3) && FUNC_4 (VAR_4))
    || (FUNC_3 (VAR_3) && FUNC_3 (VAR_4))
    || (FUNC_2 (VAR_3) && FUNC_2 (VAR_4)))
    return FUNC_5 (VAR_3, VAR_4, VAR_2, VAR_2,
       "conversion");
  else
    FUNC_6 ();
}
