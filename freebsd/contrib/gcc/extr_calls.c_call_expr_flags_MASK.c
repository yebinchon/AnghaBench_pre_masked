
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int
FUNC_5 (tree VAR_1)
{
  int VAR_2;
  tree VAR_3 = FUNC_4 (VAR_1);

  if (VAR_3)
    VAR_2 = FUNC_3 (VAR_3);
  else
    {
      VAR_1 = FUNC_2 (FUNC_1 (VAR_1, 0));
      if (VAR_1 && FUNC_0 (VAR_1) == VAR_0)
 VAR_2 = FUNC_3 (FUNC_2 (VAR_1));
      else
 VAR_2 = 0;
    }

  return VAR_2;
}
