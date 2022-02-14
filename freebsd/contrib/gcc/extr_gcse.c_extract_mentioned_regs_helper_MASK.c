
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_0, rtx VAR_1)
{
  int VAR_2;
  enum rtx_code VAR_3;
  const char * VAR_4;


 repeat:

  if (VAR_0 == 0)
    return VAR_1;

  VAR_3 = FUNC_0 (VAR_0);
  switch (VAR_3)
    {
    case 129:
      return FUNC_6 (0, VAR_0, VAR_1);

    case 135:
      VAR_0 = FUNC_3 (VAR_0, 0);
      goto repeat;

    case 131:
    case 130:
    case 133:
    case 132:

      FUNC_7 ();

    case 134:
    case 141:
    case 140:
    case 138:
    case 139:
    case 137:
    case 128:
    case 136:
    case 142:
    case 143:
      return VAR_1;

    default:
      break;
    }

  VAR_2 = FUNC_2 (VAR_3) - 1;
  VAR_4 = FUNC_1 (VAR_3);

  for (; VAR_2 >= 0; VAR_2--)
    {
      if (VAR_4[VAR_2] == 'e')
 {
   rtx VAR_5 = FUNC_3 (VAR_0, VAR_2);



   if (VAR_2 == 0)
     {
       VAR_0 = VAR_5;
       goto repeat;
     }

   VAR_1 = FUNC_8 (VAR_5, VAR_1);
 }
      else if (VAR_4[VAR_2] == 'E')
 {
   int VAR_6;

   for (VAR_6 = 0; VAR_6 < FUNC_5 (VAR_0, VAR_2); VAR_6++)
     VAR_1 = FUNC_8 (FUNC_4 (VAR_0, VAR_2, VAR_6), VAR_1);
 }
    }

  return VAR_1;
}
