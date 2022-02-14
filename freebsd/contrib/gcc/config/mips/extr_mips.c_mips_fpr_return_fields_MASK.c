
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (tree VAR_4, tree *VAR_5)
{
  tree VAR_6;
  int VAR_7;

  if (!VAR_3)
    return 0;

  if (FUNC_1 (VAR_4) != VAR_2)
    return 0;

  VAR_7 = 0;
  for (VAR_6 = FUNC_3 (VAR_4); VAR_6 != 0; VAR_6 = FUNC_0 (VAR_6))
    {
      if (FUNC_1 (VAR_6) != VAR_0)
 continue;

      if (FUNC_1 (FUNC_2 (VAR_6)) != VAR_1)
 return 0;

      if (VAR_7 == 2)
 return 0;

      VAR_5[VAR_7++] = VAR_6;
    }
  return VAR_7;
}
