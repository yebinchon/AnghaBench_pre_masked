
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8, VAR_9;
  unsigned VAR_10;

  if (FUNC_3 (VAR_5) != VAR_1)
    return 0;

  VAR_6 = FUNC_4 (VAR_5, 0);
  if (FUNC_3 (VAR_6) != VAR_4)
    return 0;

  VAR_7 = FUNC_4 (VAR_5, 1);

  if (FUNC_3 (VAR_7) != VAR_3
      && FUNC_3 (VAR_7) != VAR_0)
    return 0;

  VAR_8 = FUNC_4 (VAR_7, 0);
  if (FUNC_3 (VAR_8) != VAR_4)
    return 0;

  VAR_9 = FUNC_2 (VAR_8);
  if (FUNC_3 (VAR_9) != VAR_2)
    return 0;

  for (VAR_10 = 0; VAR_10 < (unsigned) FUNC_1 (VAR_9); VAR_10++)
    if (FUNC_0 (VAR_9, VAR_10) == VAR_6)
      return 1;

  return 0;
}
