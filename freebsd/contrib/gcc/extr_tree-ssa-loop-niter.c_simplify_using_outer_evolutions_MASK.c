
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_6 (struct loop *VAR_5, tree VAR_6)
{
  enum tree_code VAR_7 = FUNC_0 (VAR_6);
  bool VAR_8;
  tree VAR_9, VAR_10, VAR_11, VAR_12;

  if (FUNC_5 (VAR_6))
    return VAR_6;

  if (VAR_7 == VAR_3
      || VAR_7 == VAR_2
      || VAR_7 == VAR_0)
    {
      VAR_8 = 0;

      VAR_10 = FUNC_6 (VAR_5, FUNC_1 (VAR_6, 0));
      if (FUNC_1 (VAR_6, 0) != VAR_10)
 VAR_8 = 1;

      VAR_11 = FUNC_6 (VAR_5, FUNC_1 (VAR_6, 1));
      if (FUNC_1 (VAR_6, 1) != VAR_11)
 VAR_8 = 1;

      if (VAR_7 == VAR_0)
 {
   VAR_12 = FUNC_6 (VAR_5, FUNC_1 (VAR_6, 2));
   if (FUNC_1 (VAR_6, 2) != VAR_12)
     VAR_8 = 1;
 }
      else
 VAR_12 = VAR_1;

      if (VAR_8)
 {
   if (VAR_7 == VAR_0)
     VAR_6 = FUNC_3 (VAR_7, VAR_4, VAR_10, VAR_11, VAR_12);
   else
     VAR_6 = FUNC_2 (VAR_7, VAR_4, VAR_10, VAR_11);
 }

      return VAR_6;
    }

  VAR_9 = FUNC_4 (VAR_5, VAR_6);
  if (FUNC_5 (VAR_9))
    return VAR_9;

  return VAR_6;
}
