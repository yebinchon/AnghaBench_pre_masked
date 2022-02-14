
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;

 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_0 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_1)
{
  int VAR_2 = 0;
  enum rtx_code VAR_3;
  if (!VAR_1)
    return 0;
  VAR_3 = FUNC_0 (VAR_1);
  switch (VAR_3)
    {
    case 128:
      if (FUNC_4 (VAR_1, 1)[0])
 return 10;
      else
 return 0;

    case 129:
      return 0;

    case 130:

      if (!FUNC_7 (FUNC_4 (VAR_1, 0), VAR_0))
 return 0;
      else
 return 5;
    default:
      {
 int VAR_4, VAR_5;
 const char *VAR_6 = FUNC_1 (VAR_3);
 for (VAR_4 = FUNC_2 (VAR_3) - 1; VAR_4 >= 0; VAR_4--)
   {
     switch (VAR_6[VAR_4])
       {
       case 'V':
       case 'E':
  for (VAR_5 = 0; VAR_5 < FUNC_6 (VAR_1, VAR_4); VAR_5++)
    VAR_2 += FUNC_8 (FUNC_5 (VAR_1, VAR_4, VAR_5));
  break;
       case 'e':
  VAR_2 += FUNC_8 (FUNC_3 (VAR_1, VAR_4));
  break;
       }
   }
      }
      break;
    }
  return VAR_2;
}
