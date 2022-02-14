
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_5, tree VAR_6)
{
  tree VAR_7 = VAR_6;
  tree VAR_8, VAR_9;

  VAR_8 = FUNC_5 (VAR_5, VAR_7, VAR_4);
  if (VAR_8 == VAR_3)
    return VAR_3;

  VAR_9 = VAR_8;
  if (FUNC_2 (VAR_9) == VAR_0)
    VAR_9 = FUNC_3 (VAR_9, 0);
  if (FUNC_2 (VAR_9) == VAR_1)
    VAR_9 = FUNC_0 (VAR_9);







  if (!FUNC_1 (VAR_9))
    {
      FUNC_4 ("%qE is not a valid template argument for type %qT "
      "because function %qD has not external linkage",
      VAR_6, VAR_5, VAR_9);
      return VAR_2;
    }

  return VAR_8;
}
