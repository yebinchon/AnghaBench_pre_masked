
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;


 int FUNC_4 (scalar_t__) ;


 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;

int
FUNC_13 (rtx VAR_0, rtx VAR_1)
{
  int VAR_2;
  int VAR_3;
  enum rtx_code VAR_4;
  const char *VAR_5;

  if (VAR_0 == VAR_1)
    return 1;
  if (VAR_0 == 0 || VAR_1 == 0)
    return 0;

  VAR_4 = FUNC_0 (VAR_0);

  if (VAR_4 != FUNC_0 (VAR_1))
    return 0;




  if (FUNC_1 (VAR_0) != FUNC_1 (VAR_1))
    return 0;


  switch (VAR_4)
    {
    case 130:
      return (FUNC_4 (VAR_0) == FUNC_4 (VAR_1));

    case 131:
      return FUNC_5 (VAR_0, 0) == FUNC_5 (VAR_1, 0);

    case 128:
      return FUNC_7 (VAR_0, 0) == FUNC_7 (VAR_1, 0);

    case 129:
    case 133:
    case 132:
      return 0;

    default:
      break;
    }




  VAR_5 = FUNC_2 (VAR_4);
  for (VAR_2 = FUNC_3 (VAR_4) - 1; VAR_2 >= 0; VAR_2--)
    {
      switch (VAR_5[VAR_2])
 {
 case 'w':
   if (FUNC_10 (VAR_0, VAR_2) != FUNC_10 (VAR_1, VAR_2))
     return 0;
   break;

 case 'n':
 case 'i':
   if (FUNC_6 (VAR_0, VAR_2) != FUNC_6 (VAR_1, VAR_2))
     return 0;
   break;

 case 'V':
 case 'E':

   if (FUNC_9 (VAR_0, VAR_2) != FUNC_9 (VAR_1, VAR_2))
     return 0;


   for (VAR_3 = 0; VAR_3 < FUNC_9 (VAR_0, VAR_2); VAR_3++)
     if (FUNC_13 (FUNC_8 (VAR_0, VAR_2, VAR_3), FUNC_8 (VAR_1, VAR_2, VAR_3)) == 0)
       return 0;
   break;

 case 'e':
   if (FUNC_13 (FUNC_5 (VAR_0, VAR_2), FUNC_5 (VAR_1, VAR_2)) == 0)
     return 0;
   break;

 case 'S':
 case 's':
   if ((FUNC_7 (VAR_0, VAR_2) || FUNC_7 (VAR_1, VAR_2))
       && (! FUNC_7 (VAR_0, VAR_2) || ! FUNC_7 (VAR_1, VAR_2)
    || FUNC_12 (FUNC_7 (VAR_0, VAR_2), FUNC_7 (VAR_1, VAR_2))))
     return 0;
   break;

 case 'u':

   break;

 case '0':
 case 't':
   break;




 default:
   FUNC_11 ();
 }
    }
  return 1;
}
