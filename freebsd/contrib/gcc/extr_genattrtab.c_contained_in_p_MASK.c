
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_0, rtx VAR_1)
{
  int VAR_2, VAR_3;
  const char *VAR_4;

  if (FUNC_6 (VAR_0, VAR_1))
    return 1;

  for (VAR_2 = 0, VAR_4 = FUNC_1 (FUNC_0 (VAR_1));
       VAR_2 < FUNC_2 (FUNC_0 (VAR_1)); VAR_2++)
    switch (*VAR_4++)
      {
      case 'e':
      case 'u':
 if (FUNC_7 (VAR_0, FUNC_3 (VAR_1, VAR_2)))
   return 1;
 break;

      case 'E':
 for (VAR_3 = 0; VAR_3 < FUNC_5 (VAR_1, VAR_2); VAR_3++)
   if (FUNC_7 (VAR_0, FUNC_4 (VAR_1, VAR_2, VAR_3)))
     return 1;
 break;
      }

  return 0;
}
