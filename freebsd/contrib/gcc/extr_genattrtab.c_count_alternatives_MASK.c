
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_1)
{
  int VAR_2, VAR_3, VAR_4;
  const char *VAR_5;

  if (FUNC_0 (VAR_1) == VAR_0)
    return FUNC_8 (FUNC_4 (VAR_1, 2));

  for (VAR_2 = 0, VAR_5 = FUNC_1 (FUNC_0 (VAR_1));
       VAR_2 < FUNC_2 (FUNC_0 (VAR_1)); VAR_2++)
    switch (*VAR_5++)
      {
      case 'e':
      case 'u':
 VAR_4 = FUNC_9 (FUNC_3 (VAR_1, VAR_2));
 if (VAR_4)
   return VAR_4;
 break;

      case 'E':
      case 'V':
 if (FUNC_5 (VAR_1, VAR_2) != ((void*)0))
   for (VAR_3 = 0; VAR_3 < FUNC_7 (VAR_1, VAR_2); VAR_3++)
     {
       VAR_4 = FUNC_9 (FUNC_6 (VAR_1, VAR_2, VAR_3));
       if (VAR_4)
  return VAR_4;
     }
      }

  return 0;
}
