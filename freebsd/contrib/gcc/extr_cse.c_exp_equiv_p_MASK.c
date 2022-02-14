
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;




 unsigned int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int) ;



 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;





 unsigned int FUNC_12 (scalar_t__) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;

 scalar_t__ FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__,int) ;

 int FUNC_18 (scalar_t__,int) ;
 scalar_t__ FUNC_19 (scalar_t__,int,int) ;
 int FUNC_20 (scalar_t__,int) ;
 int FUNC_21 (scalar_t__,int) ;
 int FUNC_22 () ;
 int** VAR_1 ;
 int FUNC_23 (int ,int ) ;

int
FUNC_24 (rtx VAR_2, rtx VAR_3, int VAR_4, bool VAR_5)
{
  int VAR_6, VAR_7;
  enum rtx_code VAR_8;
  const char *VAR_9;



  if (VAR_2 == VAR_3 && !VAR_4)
    return 1;

  if (VAR_2 == 0 || VAR_3 == 0)
    return VAR_2 == VAR_3;

  VAR_8 = FUNC_6 (VAR_2);
  if (VAR_8 != FUNC_6 (VAR_3))
    return 0;


  if (FUNC_7 (VAR_2) != FUNC_7 (VAR_3))
    return 0;

  switch (VAR_8)
    {
    case 132:
    case 141:
    case 139:
    case 140:
      return VAR_2 == VAR_3;

    case 136:
      return FUNC_16 (VAR_2, 0) == FUNC_16 (VAR_3, 0);

    case 129:
      return FUNC_18 (VAR_2, 0) == FUNC_18 (VAR_3, 0);

    case 130:
      if (VAR_5)
 return FUNC_12 (VAR_2) == FUNC_12 (VAR_3);
      else
 {
   unsigned int VAR_10 = FUNC_12 (VAR_3);
   unsigned int VAR_11;
   unsigned int VAR_12
     = VAR_10 + (VAR_10 >= VAR_0 ? 1
         : VAR_1[VAR_10][FUNC_7 (VAR_3)]);





   if (FUNC_14 (FUNC_12 (VAR_2)) != FUNC_14 (VAR_10))
     return 0;

   if (! VAR_4)
     return 1;

   for (VAR_11 = VAR_10; VAR_11 < VAR_12; VAR_11++)
     if (FUNC_13 (VAR_11) != FUNC_15 (VAR_11))
       return 0;

   return 1;
 }

    case 135:
      if (VAR_5)
 {


   if (FUNC_11 (VAR_2) || FUNC_11 (VAR_3))
     return 0;
   if (FUNC_10 (VAR_2) != FUNC_10 (VAR_3))
     return 0;
 }
      break;


    case 131:
    case 134:
    case 143:
    case 137:
    case 128:
    case 133:
    case 138:
      return ((FUNC_24 (FUNC_16 (VAR_2, 0), FUNC_16 (VAR_3, 0),
        VAR_4, VAR_5)
        && FUNC_24 (FUNC_16 (VAR_2, 1), FUNC_16 (VAR_3, 1),
    VAR_4, VAR_5))
       || (FUNC_24 (FUNC_16 (VAR_2, 0), FUNC_16 (VAR_3, 1),
    VAR_4, VAR_5)
    && FUNC_24 (FUNC_16 (VAR_2, 1), FUNC_16 (VAR_3, 0),
       VAR_4, VAR_5)));

    case 142:




      if (FUNC_11 (VAR_2) || FUNC_11 (VAR_3))
 return 0;

      if (FUNC_7 (VAR_2) != FUNC_7 (VAR_3)
   || FUNC_23 (FUNC_5 (VAR_2), FUNC_5 (VAR_3))
   || FUNC_23 (FUNC_3 (VAR_2),
       FUNC_3 (VAR_3))
   || FUNC_4 (VAR_2) != FUNC_4 (VAR_3)
   || FUNC_2 (VAR_2) != FUNC_2 (VAR_3))
 return 0;

      if (FUNC_2 (VAR_2))
 {
   for (VAR_6 = FUNC_2 (VAR_2) - 1; VAR_6 >= 0; VAR_6--)
     if (! FUNC_24 (FUNC_0 (VAR_2, VAR_6),
          FUNC_0 (VAR_3, VAR_6),
          VAR_4, VAR_5)
  || FUNC_23 (FUNC_1 (VAR_2, VAR_6),
      FUNC_1 (VAR_3, VAR_6)))
       return 0;
 }

      return 1;

    default:
      break;
    }




  VAR_9 = FUNC_8 (VAR_8);
  for (VAR_6 = FUNC_9 (VAR_8) - 1; VAR_6 >= 0; VAR_6--)
    {
      switch (VAR_9[VAR_6])
 {
 case 'e':
   if (! FUNC_24 (FUNC_16 (VAR_2, VAR_6), FUNC_16 (VAR_3, VAR_6),
         VAR_4, VAR_5))
     return 0;
   break;

 case 'E':
   if (FUNC_20 (VAR_2, VAR_6) != FUNC_20 (VAR_3, VAR_6))
     return 0;
   for (VAR_7 = 0; VAR_7 < FUNC_20 (VAR_2, VAR_6); VAR_7++)
     if (! FUNC_24 (FUNC_19 (VAR_2, VAR_6, VAR_7), FUNC_19 (VAR_3, VAR_6, VAR_7),
    VAR_4, VAR_5))
       return 0;
   break;

 case 's':
   if (FUNC_23 (FUNC_18 (VAR_2, VAR_6), FUNC_18 (VAR_3, VAR_6)))
     return 0;
   break;

 case 'i':
   if (FUNC_17 (VAR_2, VAR_6) != FUNC_17 (VAR_3, VAR_6))
     return 0;
   break;

 case 'w':
   if (FUNC_21 (VAR_2, VAR_6) != FUNC_21 (VAR_3, VAR_6))
     return 0;
   break;

 case '0':
 case 't':
   break;

 default:
   FUNC_22 ();
 }
    }

  return 1;
}
