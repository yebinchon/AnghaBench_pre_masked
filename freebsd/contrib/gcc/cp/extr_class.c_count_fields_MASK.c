
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_1)
{
  tree VAR_2;
  int VAR_3 = 0;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_1 (VAR_2))
    {
      if (FUNC_2 (VAR_2) == VAR_0 && FUNC_0 (FUNC_3 (VAR_2)))
 VAR_3 += FUNC_5 (FUNC_4 (FUNC_3 (VAR_2)));
      else
 VAR_3 += 1;
    }
  return VAR_3;
}
