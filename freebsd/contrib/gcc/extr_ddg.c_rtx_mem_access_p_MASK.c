
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_0)
{
  int VAR_1, VAR_2;
  const char *VAR_3;
  enum rtx_code VAR_4;

  if (VAR_0 == 0)
    return 0;

  if (FUNC_3 (VAR_0))
    return 1;

  VAR_4 = FUNC_0 (VAR_0);
  VAR_3 = FUNC_1 (VAR_4);
  for (VAR_1 = FUNC_2 (VAR_4) - 1; VAR_1 >= 0; VAR_1--)
    {
      if (VAR_3[VAR_1] == 'e')
 {
   if (FUNC_7 (FUNC_4 (VAR_0, VAR_1)))
            return 1;
        }
      else if (VAR_3[VAR_1] == 'E')
 for (VAR_2 = 0; VAR_2 < FUNC_6 (VAR_0, VAR_1); VAR_2++)
   {
     if (FUNC_7 (FUNC_5 (VAR_0, VAR_1, VAR_2)))
              return 1;
          }
    }
  return 0;
}
