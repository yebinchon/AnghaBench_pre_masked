
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static tree
FUNC_7 (rtx VAR_3, int *VAR_4)
{
  tree VAR_5;
  int VAR_6;

  *VAR_4 = 0;

  if (FUNC_5 (VAR_3))
    return FUNC_4 (VAR_3);
  else if (!FUNC_3 (VAR_3))
    return 0;

  if (FUNC_2 (VAR_3) != 0)
    return FUNC_2 (VAR_3);


  *VAR_4 = 1;
  VAR_3 = FUNC_6 (VAR_3, 0);




  if ((VAR_5 = FUNC_7 (VAR_3, &VAR_6)) && ! VAR_6)
    return VAR_5;
  else if (FUNC_0 (VAR_3) == VAR_0
    && (VAR_5 = FUNC_7 (FUNC_6 (VAR_3, 1), &VAR_6)))
    return VAR_5;

  while (FUNC_1 (FUNC_0 (VAR_3)) == VAR_2
  || FUNC_1 (FUNC_0 (VAR_3)) == VAR_1)
    VAR_3 = FUNC_6 (VAR_3, 0);

  VAR_5 = FUNC_7 (VAR_3, &VAR_6);
  return VAR_6 ? 0 : VAR_5;
}
