
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;


 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;

 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;

 int FUNC_6 (scalar_t__) ;

 scalar_t__ FUNC_7 (scalar_t__) ;

 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int
FUNC_16 (rtx VAR_1, rtx VAR_2)
{
  int VAR_3;
  int VAR_4;
  enum rtx_code VAR_5;
  const char *VAR_6;

  if (VAR_1 == 0 && VAR_2 == 0)
    return 1;
  if (VAR_1 == 0 || VAR_2 == 0)
    return 0;

  if (VAR_1 == VAR_2)
    return 1;

  VAR_5 = FUNC_1 (VAR_1);

  if (VAR_5 != FUNC_1 (VAR_2))
    return 0;




  if (FUNC_2 (VAR_1) != FUNC_2 (VAR_2))
    return 0;


  switch (VAR_5)
    {
    case 130:
      return FUNC_6 (VAR_1) == FUNC_6 (VAR_2);

    case 131:
      return FUNC_8 (VAR_1, 0) == FUNC_8 (VAR_2, 0);

    case 129:
      return FUNC_10 (VAR_1, 0) == FUNC_10 (VAR_2, 0);

    case 128:
    case 132:
    case 133:



      return 0;

    default:
      break;
    }


  if (VAR_5 == VAR_0)
    return ((FUNC_16 (FUNC_8 (VAR_1, 0), FUNC_8 (VAR_2, 0))
      && FUNC_16 (FUNC_8 (VAR_1, 1), FUNC_8 (VAR_2, 1)))
     || (FUNC_16 (FUNC_8 (VAR_1, 0), FUNC_8 (VAR_2, 1))
  && FUNC_16 (FUNC_8 (VAR_1, 1), FUNC_8 (VAR_2, 0))));


  if (FUNC_0 (VAR_1))
    {
      rtx VAR_7 = FUNC_13 (FUNC_8 (VAR_1, 0));
      rtx VAR_8 = FUNC_13 (FUNC_8 (VAR_2, 0));
      rtx VAR_9 = FUNC_13 (FUNC_8 (VAR_2, 1));

      return ((FUNC_16 (VAR_7, VAR_8)
        && FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, 1)), VAR_9))
       || (FUNC_16 (VAR_7, VAR_9)
    && FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, 1)), VAR_8)));
    }
  else if (FUNC_5 (VAR_1))
    {
      return (FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, 0)),
          FUNC_13 (FUNC_8 (VAR_2, 0)))
       && FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, 1)),
      FUNC_13 (FUNC_8 (VAR_2, 1))));
    }
  else if (FUNC_7 (VAR_1))
    return FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, 0)),
       FUNC_13 (FUNC_8 (VAR_2, 0)));






  VAR_6 = FUNC_3 (VAR_5);
  for (VAR_3 = FUNC_4 (VAR_5) - 1; VAR_3 >= 0; VAR_3--)
    {
      switch (VAR_6[VAR_3])
 {
 case 'i':
   if (FUNC_9 (VAR_1, VAR_3) != FUNC_9 (VAR_2, VAR_3))
     return 0;
   break;

 case 'E':

   if (FUNC_12 (VAR_1, VAR_3) != FUNC_12 (VAR_2, VAR_3))
     return 0;


   for (VAR_4 = 0; VAR_4 < FUNC_12 (VAR_1, VAR_3); VAR_4++)
     if (FUNC_16 (FUNC_13 (FUNC_11 (VAR_1, VAR_3, VAR_4)),
     FUNC_13 (FUNC_11 (VAR_2, VAR_3, VAR_4))) == 0)
       return 0;
   break;

 case 'e':
   if (FUNC_16 (FUNC_13 (FUNC_8 (VAR_1, VAR_3)),
          FUNC_13 (FUNC_8 (VAR_2, VAR_3))) == 0)
     return 0;
   break;


 case 's':
   if (FUNC_15 (FUNC_10 (VAR_1, VAR_3), FUNC_10 (VAR_2, VAR_3)))
     return 0;
   break;


 case '0':
   break;




 default:
   FUNC_14 ();
 }
    }
  return 1;
}
