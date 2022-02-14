
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_13 (int) ;

__attribute__((used)) static inline tree
FUNC_14 (enum tree_code VAR_3,
      tree VAR_4,
      tree VAR_5,
      tree VAR_6)
{
  tree VAR_7, VAR_8;

  FUNC_13 (VAR_5);
  FUNC_13 (VAR_6);
  FUNC_13 (FUNC_4 (VAR_5) == VAR_1);
  FUNC_13 (FUNC_4 (VAR_6) == VAR_1);
  FUNC_13 (FUNC_11 (VAR_5) == FUNC_11 (VAR_6));
  FUNC_13 (VAR_4 == FUNC_11 (VAR_5));





  if (FUNC_2 (VAR_5) < FUNC_2 (VAR_6))
    {
      if (VAR_3 == VAR_0)
 return FUNC_6
   (FUNC_2 (VAR_6),
    FUNC_10 (VAR_4, VAR_5, FUNC_0 (VAR_6)),
    FUNC_1 (VAR_6));
      else
 return FUNC_6
   (FUNC_2 (VAR_6),
    FUNC_8 (VAR_4, VAR_5, FUNC_0 (VAR_6)),
    FUNC_9 (VAR_4, FUNC_1 (VAR_6),
    FUNC_3 (VAR_4)
    ? FUNC_7 (VAR_4, VAR_2)
    : FUNC_5 (VAR_4, -1)));
    }

  if (FUNC_2 (VAR_5) > FUNC_2 (VAR_6))
    {
      if (VAR_3 == VAR_0)
 return FUNC_6
   (FUNC_2 (VAR_5),
    FUNC_10 (VAR_4, FUNC_0 (VAR_5), VAR_6),
    FUNC_1 (VAR_5));
      else
 return FUNC_6
   (FUNC_2 (VAR_5),
    FUNC_8 (VAR_4, FUNC_0 (VAR_5), VAR_6),
    FUNC_1 (VAR_5));
    }

  if (VAR_3 == VAR_0)
    {
      VAR_7 = FUNC_10
 (VAR_4, FUNC_0 (VAR_5), FUNC_0 (VAR_6));
      VAR_8 = FUNC_10
 (VAR_4, FUNC_1 (VAR_5), FUNC_1 (VAR_6));
    }
  else
    {
      VAR_7 = FUNC_8
 (VAR_4, FUNC_0 (VAR_5), FUNC_0 (VAR_6));
      VAR_8 = FUNC_8
 (VAR_4, FUNC_1 (VAR_5), FUNC_1 (VAR_6));
    }

  if (FUNC_12 (VAR_8))
    return VAR_7;
  else
    return FUNC_6
      (FUNC_2 (VAR_5), VAR_7, VAR_8);
}
