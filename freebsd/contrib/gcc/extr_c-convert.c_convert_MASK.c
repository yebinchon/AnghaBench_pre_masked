
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_4__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_3__ {char* (* invalid_conversion ) (scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (char const*,...) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_14 ;
 char* FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_15 ;

tree
FUNC_15 (tree VAR_16, tree VAR_17)
{
  tree VAR_18 = VAR_17;
  enum tree_code VAR_19 = FUNC_0 (VAR_16);
  const char *VAR_20;

  if (VAR_16 == VAR_13
      || VAR_17 == VAR_13
      || FUNC_1 (VAR_17) == VAR_13)
    return VAR_13;

  if ((VAR_20
       = VAR_15.invalid_conversion (FUNC_1 (VAR_17), VAR_16)))
    {
      FUNC_10 (VAR_20, "");
      return VAR_13;
    }

  if (VAR_16 == FUNC_1 (VAR_17))
    return VAR_17;

  if (FUNC_2 (VAR_16) == FUNC_2 (FUNC_1 (VAR_17)))
    return FUNC_12 (VAR_16, VAR_17);
  if (FUNC_0 (FUNC_1 (VAR_17)) == VAR_4)
    return VAR_13;
  if (FUNC_0 (FUNC_1 (VAR_17)) == VAR_12)
    {
      FUNC_10 ("void value not ignored as it ought to be");
      return VAR_13;
    }
  if (VAR_19 == VAR_12)
    return FUNC_12 (VAR_16, VAR_18);
  if (VAR_19 == VAR_5 || VAR_19 == VAR_3)
    return FUNC_11 (FUNC_6 (VAR_16, VAR_18));
  if (VAR_19 == VAR_1)
    return FUNC_12 (VAR_16, FUNC_3 (VAR_17));
  if (VAR_19 == VAR_6 || VAR_19 == VAR_9)
    return FUNC_11 (FUNC_7 (VAR_16, VAR_18));

  if (VAR_19 == VAR_0)
    return FUNC_11 (FUNC_4 (VAR_16, VAR_18));

  if (VAR_19 == VAR_7)
    return FUNC_11 (FUNC_8 (VAR_16, VAR_18));
  if (VAR_19 == VAR_2)
    return FUNC_11 (FUNC_5 (VAR_16, VAR_18));
  if (VAR_19 == VAR_11)
    return FUNC_11 (FUNC_9 (VAR_16, VAR_18));
  if ((VAR_19 == VAR_8 || VAR_19 == VAR_10)
      && VAR_14.types_compatible_p (VAR_16, FUNC_1 (VAR_17)))
      return VAR_18;

  FUNC_10 ("conversion to non-scalar type requested");
  return VAR_13;
}
