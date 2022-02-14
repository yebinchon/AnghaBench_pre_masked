
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int ,int) ;
 char* VAR_5 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5 (rtx VAR_6, enum rtx_code VAR_7)
{
  const char *VAR_8;
  if (FUNC_0 (VAR_6) == VAR_7)
    return FUNC_5 (FUNC_1 (VAR_6, 0), VAR_7)
    | FUNC_5 (FUNC_1 (VAR_6, 1), VAR_7);

  else if (VAR_7 == VAR_0 && FUNC_0 (VAR_6) == VAR_4
    && FUNC_0 (FUNC_1 (VAR_6, 0)) == VAR_1
    && FUNC_3 (FUNC_1 (VAR_6, 0), 0) == VAR_5)
    VAR_8 = FUNC_3 (FUNC_1 (VAR_6, 0), 1);

  else if (VAR_7 == VAR_3 && FUNC_0 (VAR_6) == VAR_1
    && FUNC_3 (VAR_6, 0) == VAR_5)
    VAR_8 = FUNC_3 (VAR_6, 1);

  else if (FUNC_0 (VAR_6) == VAR_2)
    {
      if (VAR_7 == VAR_0 && FUNC_2 (VAR_6, 1))
 return FUNC_2 (VAR_6, 0);

      if (VAR_7 == VAR_3 && !FUNC_2 (VAR_6, 1))
 return FUNC_2 (VAR_6, 0);

      return 0;
    }
  else
    return 0;

  if (VAR_8[1] == 0)
    return 1 << (VAR_8[0] - '0');
  return 1 << FUNC_4 (VAR_8);
}
