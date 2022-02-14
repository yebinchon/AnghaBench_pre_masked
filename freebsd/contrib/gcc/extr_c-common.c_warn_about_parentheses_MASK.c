
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2 (enum tree_code VAR_12, enum tree_code VAR_13,
   enum tree_code VAR_14)
{
  if (!VAR_11)
    return;

  if (VAR_12 == VAR_3 || VAR_12 == VAR_7)
    {
      if (VAR_13 == VAR_6 || VAR_13 == VAR_4
   || VAR_14 == VAR_6 || VAR_14 == VAR_4)
 FUNC_1 (VAR_5,
   "suggest parentheses around + or - inside shift");
    }

  if (VAR_12 == VAR_9)
    {
      if (VAR_13 == VAR_8
   || VAR_14 == VAR_8)
 FUNC_1 (VAR_5,
   "suggest parentheses around && within ||");
    }

  if (VAR_12 == VAR_1)
    {
      if (VAR_13 == VAR_0 || VAR_13 == VAR_2
   || VAR_13 == VAR_6 || VAR_13 == VAR_4
   || VAR_14 == VAR_0 || VAR_14 == VAR_2
   || VAR_14 == VAR_6 || VAR_14 == VAR_4)
 FUNC_1 (VAR_5,
   "suggest parentheses around arithmetic in operand of |");

      if (FUNC_0 (VAR_13) == VAR_10
   || FUNC_0 (VAR_14) == VAR_10)
 FUNC_1 (VAR_5,
   "suggest parentheses around comparison in operand of |");
    }

  if (VAR_12 == VAR_2)
    {
      if (VAR_13 == VAR_0
   || VAR_13 == VAR_6 || VAR_13 == VAR_4
   || VAR_14 == VAR_0
   || VAR_14 == VAR_6 || VAR_14 == VAR_4)
 FUNC_1 (VAR_5,
   "suggest parentheses around arithmetic in operand of ^");

      if (FUNC_0 (VAR_13) == VAR_10
   || FUNC_0 (VAR_14) == VAR_10)
 FUNC_1 (VAR_5,
   "suggest parentheses around comparison in operand of ^");
    }

  if (VAR_12 == VAR_0)
    {
      if (VAR_13 == VAR_6 || VAR_13 == VAR_4
   || VAR_14 == VAR_6 || VAR_14 == VAR_4)
 FUNC_1 (VAR_5,
   "suggest parentheses around + or - in operand of &");

      if (FUNC_0 (VAR_13) == VAR_10
   || FUNC_0 (VAR_14) == VAR_10)
 FUNC_1 (VAR_5,
   "suggest parentheses around comparison in operand of &");
    }


  if (FUNC_0 (VAR_12) == VAR_10
      && (FUNC_0 (VAR_13) == VAR_10
   || FUNC_0 (VAR_14) == VAR_10))
    FUNC_1 (VAR_5, "comparisons like X<=Y<=Z do not "
      "have their mathematical meaning");
}
