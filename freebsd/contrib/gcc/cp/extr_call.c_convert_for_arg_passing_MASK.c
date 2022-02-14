
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_3__ {scalar_t__ (* promote_prototypes ) (scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int ,char*) ;

tree
FUNC_17 (tree VAR_8, tree VAR_9)
{
  tree VAR_10;
  VAR_10 = FUNC_13 (VAR_9);
  if (VAR_10
      && FUNC_7 (FUNC_5 (VAR_9)) < FUNC_7 (VAR_8))
    VAR_9 = FUNC_12 (FUNC_6 (VAR_10), VAR_9);

  if (VAR_9 == VAR_4)
    ;

  else if (FUNC_3 (VAR_8))
    VAR_9 = FUNC_9 (VAR_0, FUNC_10 (VAR_8), VAR_9);
  else if (VAR_6.calls.promote_prototypes (VAR_8)
    && FUNC_1 (VAR_8)
    && FUNC_0 (VAR_8)
    && FUNC_2 (FUNC_8 (VAR_8),
       FUNC_8 (VAR_5)))
    VAR_9 = FUNC_14 (VAR_9);
  if (VAR_7)
    {
      tree VAR_11 = FUNC_5 (VAR_9);
      const enum tree_code VAR_12 = FUNC_4 (VAR_11);
      const enum tree_code VAR_13 = FUNC_4 (VAR_8);
      if ((VAR_13 == VAR_2 || VAR_13 == VAR_3)
   && VAR_12 == VAR_13
   && FUNC_11 (VAR_8, VAR_11))
 FUNC_16 (VAR_1,
   "argument of function call might be a candidate for a format attribute");
    }
  return VAR_9;
}
