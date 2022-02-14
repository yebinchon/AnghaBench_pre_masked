
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {int name; } ;
typedef scalar_t__ TREE_READONLY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

tree
FUNC_10 (tree VAR_11, enum tree_code VAR_12, bool VAR_13)
{
  tree VAR_14;
  bool VAR_15;

  FUNC_7 (VAR_12 == VAR_3 || VAR_12 == VAR_0);
  if (VAR_11 == VAR_4)
    return VAR_4;

  VAR_11 = FUNC_8 (VAR_11);
  if (FUNC_1 (VAR_11) == VAR_2)
    {
      if (VAR_13 && (VAR_6 || VAR_10))
 FUNC_9 ("invalid application of %qs to a member function",
   VAR_5[(int) VAR_12].name);
      VAR_14 = VAR_8;
    }

  VAR_15 = FUNC_6 (VAR_11);
  if (!VAR_15)
    FUNC_5 (VAR_11);
  if (VAR_15






      || (VAR_7
   && FUNC_0 (VAR_11)
   && FUNC_1 (FUNC_2 (VAR_11)) != VAR_1))
    {
      VAR_14 = FUNC_3 (VAR_12, VAR_9, VAR_11);
      TREE_READONLY (VAR_16) = 1;
      return VAR_16;
    }

  return FUNC_4 (FUNC_5 (VAR_11),
       VAR_12 == VAR_3,
       VAR_13);
}
