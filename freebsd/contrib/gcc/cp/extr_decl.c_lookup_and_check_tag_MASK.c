
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ tag_scope ;
typedef enum tag_types { ____Placeholder_tag_types } tag_types ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int,scalar_t__,int) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static tree
FUNC_9 (enum tag_types VAR_7, tree VAR_8,
        tag_scope VAR_9, bool VAR_10)
{
  tree VAR_11;
  tree VAR_12;
  if (VAR_9 == VAR_5)
    {


      VAR_12 = FUNC_6 (VAR_8, 2);






      if (!VAR_12)
 VAR_12 = FUNC_7 (VAR_8, VAR_6);
    }
  else
    VAR_12 = FUNC_7 (VAR_8, VAR_9);

  if (VAR_12 && FUNC_0 (VAR_12))
    VAR_12 = FUNC_2 (VAR_12);

  if (VAR_12 && FUNC_3 (VAR_12) == VAR_2)
    {




      if (VAR_9 == VAR_4 && FUNC_1 (VAR_12))
 {
   FUNC_5 ("%qD has the same name as the class in which it is "
   "declared",
   VAR_12);
   return VAR_3;
 }
      VAR_11 = FUNC_4 (VAR_7,
        VAR_12,
        VAR_10
        | FUNC_1 (VAR_12));
      return VAR_11;
    }
  else if (VAR_12 && FUNC_3 (VAR_12) == VAR_1)
    {
      FUNC_5 ("reference to %qD is ambiguous", VAR_8);
      FUNC_8 (VAR_12);
      return VAR_3;
    }
  else
    return VAR_0;
}
