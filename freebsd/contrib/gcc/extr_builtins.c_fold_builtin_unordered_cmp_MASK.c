
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,int,int,int ) ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_8, tree VAR_9,
       enum tree_code VAR_10,
       enum tree_code VAR_11)
{
  tree VAR_12 = FUNC_5 (FUNC_5 (VAR_8));
  enum tree_code VAR_13;
  tree VAR_14, VAR_15;
  tree VAR_16, VAR_17;
  enum tree_code VAR_18, VAR_19;
  tree VAR_20 = VAR_1;

  if (!FUNC_14 (VAR_9, VAR_2, VAR_2, VAR_5))
    {

      if (VAR_9 == 0 || FUNC_3 (VAR_9) == 0)
 {
   FUNC_9 ("too few arguments to function %qs",
   FUNC_2 (FUNC_0 (VAR_8)));
   return VAR_6;
 }
      else if (FUNC_3 (FUNC_3 (VAR_9)) != 0)
 {
   FUNC_9 ("too many arguments to function %qs",
   FUNC_2 (FUNC_0 (VAR_8)));
   return VAR_6;
 }
    }

  VAR_14 = FUNC_6 (VAR_9);
  VAR_15 = FUNC_6 (FUNC_3 (VAR_9));

  VAR_16 = FUNC_5 (VAR_14);
  VAR_17 = FUNC_5 (VAR_15);

  VAR_18 = FUNC_4 (VAR_16);
  VAR_19 = FUNC_4 (VAR_17);

  if (VAR_18 == VAR_2 && VAR_19 == VAR_2)

    VAR_20 = FUNC_8 (VAR_16) >= FUNC_8 (VAR_17)
      ? VAR_16 : VAR_17;
  else if (VAR_18 == VAR_2 && VAR_19 == VAR_0)
    VAR_20 = VAR_16;
  else if (VAR_18 == VAR_0 && VAR_19 == VAR_2)
    VAR_20 = VAR_17;
  else
    {
      FUNC_9 ("non-floating-point argument to function %qs",
   FUNC_2 (FUNC_0 (VAR_8)));
      return VAR_6;
    }

  VAR_14 = FUNC_12 (VAR_20, VAR_14);
  VAR_15 = FUNC_12 (VAR_20, VAR_15);

  if (VAR_10 == VAR_4)
    {
      if (!FUNC_1 (FUNC_7 (FUNC_5 (VAR_14))))
 return FUNC_13 (VAR_12, VAR_7, VAR_14, VAR_15);
      return FUNC_11 (VAR_4, VAR_12, VAR_14, VAR_15);
    }

  VAR_13 = FUNC_1 (FUNC_7 (FUNC_5 (VAR_14))) ? VAR_10
         : VAR_11;
  return FUNC_10 (VAR_3, VAR_12,
        FUNC_11 (VAR_13, VAR_12, VAR_14, VAR_15));
}
