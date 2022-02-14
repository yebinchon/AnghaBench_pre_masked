
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_2)
{
  int VAR_3, VAR_4;
  const char *VAR_5;

  if (FUNC_0 (VAR_2) == VAR_0 && FUNC_4 (VAR_2, 0) == VAR_1)
    return 1;

  for (VAR_3 = 0, VAR_5 = FUNC_1 (FUNC_0 (VAR_2));
       VAR_3 < FUNC_2 (FUNC_0 (VAR_2)); VAR_3++)
    switch (*VAR_5++)
      {
      case 'e':
      case 'u':
 if (FUNC_7 (FUNC_3 (VAR_2, VAR_3)))
   return 1;
 break;

      case 'E':
 for (VAR_4 = 0; VAR_4 < FUNC_6 (VAR_2, VAR_3); VAR_4++)
   if (FUNC_7 (FUNC_5 (VAR_2, VAR_3, VAR_4)))
     return 1;
 break;
      }

  return 0;
}
