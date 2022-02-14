
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_CODE ;


 size_t VAR_0 ;





 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;


 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_8 (rtx VAR_6)
{
  RTX_CODE VAR_7 = FUNC_0 (VAR_6);
  int VAR_8;
  const char *VAR_9;

  switch (VAR_7)
    {
    case 130:
      return !FUNC_3 (VAR_6) || FUNC_8 (FUNC_5 (VAR_6, 0));

    case 135:
    case 133:
    case 134:
    case 132:
    case 128:
    case 131:
      return 0;

    case 129:

      if (VAR_6 == VAR_3 || VAR_6 == VAR_4

   || (VAR_6 == VAR_1 && VAR_2[VAR_0]))
 return 0;




      if (VAR_6 == VAR_5)
 return 0;

      return 1;

    case 136:
      if (FUNC_4 (VAR_6))
 return 1;



    default:
      break;
    }

  VAR_9 = FUNC_1 (VAR_7);
  for (VAR_8 = FUNC_2 (VAR_7) - 1; VAR_8 >= 0; VAR_8--)
    if (VAR_9[VAR_8] == 'e')
      {
 if (FUNC_8 (FUNC_5 (VAR_6, VAR_8)))
   return 1;
      }
    else if (VAR_9[VAR_8] == 'E')
      {
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < FUNC_7 (VAR_6, VAR_8); VAR_10++)
   if (FUNC_8 (FUNC_6 (VAR_6, VAR_8, VAR_10)))
     return 1;
      }

  return 0;
}
