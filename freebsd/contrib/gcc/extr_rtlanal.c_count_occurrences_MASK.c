
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;







 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;

 int FUNC_3 (scalar_t__) ;



 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

int
FUNC_10 (rtx VAR_0, rtx VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;
  enum rtx_code VAR_5;
  const char *VAR_6;
  int VAR_7;

  if (VAR_0 == VAR_1)
    return 1;

  VAR_5 = FUNC_0 (VAR_0);

  switch (VAR_5)
    {
    case 130:
    case 134:
    case 135:
    case 133:
    case 128:
    case 136:
    case 131:
    case 137:
      return 0;

    case 132:
      if (FUNC_3 (VAR_1) && FUNC_9 (VAR_0, VAR_1))
 return 1;
      break;

    case 129:
      if (FUNC_4 (VAR_0) == VAR_1 && ! VAR_2)
 return FUNC_10 (FUNC_5 (VAR_0), VAR_1, VAR_2);
      break;

    default:
      break;
    }

  VAR_6 = FUNC_1 (VAR_5);
  VAR_7 = 0;

  for (VAR_3 = 0; VAR_3 < FUNC_2 (VAR_5); VAR_3++)
    {
      switch (*VAR_6++)
 {
 case 'e':
   VAR_7 += FUNC_10 (FUNC_6 (VAR_0, VAR_3), VAR_1, VAR_2);
   break;

 case 'E':
   for (VAR_4 = 0; VAR_4 < FUNC_8 (VAR_0, VAR_3); VAR_4++)
     VAR_7 += FUNC_10 (FUNC_7 (VAR_0, VAR_3, VAR_4), VAR_1, VAR_2);
   break;
 }
    }
  return VAR_7;
}
