
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (scalar_t__) ;
 char FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5 (rtx VAR_0)
{
  enum rtx_code VAR_1 = FUNC_0 (VAR_0);
  const char *VAR_2;
  int VAR_3, VAR_4 = 1;

  if (FUNC_1 (VAR_1) == '2'
      || FUNC_1 (VAR_1) == 'c')
    {
      rtx VAR_5 = FUNC_4 (VAR_0, 0);
      rtx VAR_6 = FUNC_4 (VAR_0, 1);

      if (VAR_5 == VAR_6)
 return 1 + 2 * FUNC_5 (VAR_5);

      if ((FUNC_1 (FUNC_0 (VAR_6)) == '2'
    || FUNC_1 (FUNC_0 (VAR_6)) == 'c')
   && (VAR_5 == FUNC_4 (VAR_6, 0) || VAR_5 == FUNC_4 (VAR_6, 1)))
 return 2 + 2 * FUNC_5 (VAR_5)
        + FUNC_5 (VAR_0 == FUNC_4 (VAR_6, 0)
        ? FUNC_4 (VAR_6, 1) : FUNC_4 (VAR_6, 0));

      if ((FUNC_1 (FUNC_0 (VAR_5)) == '2'
    || FUNC_1 (FUNC_0 (VAR_5)) == 'c')
   && (VAR_6 == FUNC_4 (VAR_5, 0) || VAR_6 == FUNC_4 (VAR_5, 1)))
 return 2 + 2 * FUNC_5 (VAR_6)
        + FUNC_5 (VAR_0 == FUNC_4 (VAR_5, 0)
        ? FUNC_4 (VAR_5, 1) : FUNC_4 (VAR_5, 0));
    }

  VAR_2 = FUNC_2 (VAR_1);
  for (VAR_3 = FUNC_3 (VAR_1) - 1; VAR_3 >= 0; VAR_3--)
    if (VAR_2[VAR_3] == 'e')
      VAR_4 += FUNC_5 (FUNC_4 (VAR_0, VAR_3));

  return VAR_4;
}
