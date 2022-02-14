
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int,int,int ,int ) ;

__attribute__((used)) static bool
FUNC_9 (int VAR_3, rtx VAR_4)
{
  enum rtx_code VAR_5 = FUNC_0 (VAR_4);
  int VAR_6, VAR_7;
  const char *VAR_8;

  if (VAR_5 == VAR_0)
    {
      if (FUNC_8 (VAR_3, VAR_3+1,
        FUNC_5 (VAR_4, 0), 0))
 return 1;
    }
  else if (VAR_5 == VAR_2
    && FUNC_0 (FUNC_3 (VAR_4)) == VAR_1)
    {
      if (FUNC_8 (VAR_3, VAR_3+1,
        FUNC_4 (VAR_4), 0))
 return 1;
    }

  VAR_8 = FUNC_1 (VAR_5);
  for (VAR_6 = FUNC_2 (VAR_5) - 1; VAR_6 >= 0; VAR_6--)
    {
      if (VAR_8[VAR_6] == 'e'
   && FUNC_9 (VAR_3, FUNC_5 (VAR_4, VAR_6)))
 return 1;

      else if (VAR_8[VAR_6] == 'E')
 for (VAR_7 = 0; VAR_7 < FUNC_7 (VAR_4, VAR_6); VAR_7++)
   if (FUNC_9 (VAR_3, FUNC_6 (VAR_4, VAR_6, VAR_7)))
     return 1;
    }
  return 0;
}
