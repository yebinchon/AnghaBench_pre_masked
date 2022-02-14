
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,char const*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*,int,scalar_t__) ;
 int VAR_12 ;

tree
FUNC_14 (tree VAR_13, tree VAR_14, tree VAR_15, int VAR_16,
       const char *VAR_17, tree VAR_18, int VAR_19)
{
  enum tree_code VAR_20 = FUNC_1 (VAR_14);
  tree VAR_21;
  enum tree_code VAR_22;



  if (FUNC_1 (VAR_15) == VAR_6
      && FUNC_3 (VAR_15) == FUNC_3 (FUNC_2 (VAR_15, 0))
      && VAR_20 != VAR_8)
    VAR_15 = FUNC_2 (VAR_15, 0);

  if (VAR_14 == VAR_10
      || VAR_15 == VAR_10
      || (FUNC_1 (VAR_15) == VAR_9 && FUNC_4 (VAR_15) == VAR_10))
    return VAR_10;

  if ((FUNC_1 (FUNC_3 (VAR_15)) == VAR_0
       && FUNC_1 (VAR_14) != VAR_0
       && (FUNC_1 (VAR_14) != VAR_8
    || FUNC_1 (FUNC_3 (VAR_14)) != VAR_0))
      || (FUNC_1 (FUNC_3 (VAR_15)) == VAR_4
   && (FUNC_1 (VAR_14) != VAR_8
       || FUNC_1 (FUNC_3 (VAR_14)) != VAR_4))
      || FUNC_1 (FUNC_3 (VAR_15)) == VAR_5)
    VAR_15 = FUNC_7 (VAR_15);

  VAR_21 = FUNC_3 (VAR_15);
  VAR_22 = FUNC_1 (VAR_21);

  if (VAR_22 == VAR_3)
    return VAR_10;




  if (VAR_20 == VAR_8)
    {

      int VAR_23 = 0, VAR_24 = 0;

      if (VAR_18)
 VAR_23 = VAR_12, VAR_24 = VAR_11;
      VAR_15 = FUNC_9 (VAR_14, VAR_15, VAR_7,
                  ((void*)0));
      if (VAR_18)
 {
   if (VAR_12 > VAR_23)
     FUNC_13 (0, "in passing argument %P of %q+D", VAR_19, VAR_18);
   else if (VAR_11 > VAR_24)
     FUNC_8 ("in passing argument %P of %q+D", VAR_19, VAR_18);
 }
      return VAR_15;
    }

  if (VAR_13 != 0)
    VAR_13 = FUNC_12 (VAR_13);
  if (VAR_13 == VAR_10)
    return VAR_10;

  VAR_21 = FUNC_10 (VAR_21);

  VAR_14 = FUNC_5 (VAR_14);

  if (FUNC_0 (VAR_14))
    return FUNC_11 (VAR_14, VAR_15, VAR_2|VAR_1, VAR_16);

  return FUNC_6 (VAR_14, VAR_15, VAR_17, VAR_18, VAR_19);
}
