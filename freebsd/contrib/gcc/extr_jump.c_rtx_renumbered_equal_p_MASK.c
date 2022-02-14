
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {scalar_t__ (* commutative_p ) (scalar_t__,int ) ;} ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;

 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

 int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (scalar_t__,int,int) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__,int) ;
 int FUNC_18 () ;
 int FUNC_19 (scalar_t__) ;
 int* VAR_3 ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (int,scalar_t__,int,scalar_t__) ;
 TYPE_1__ VAR_4 ;

int
FUNC_24 (rtx VAR_5, rtx VAR_6)
{
  int VAR_7;
  enum rtx_code VAR_8 = FUNC_0 (VAR_5);
  const char *VAR_9;

  if (VAR_5 == VAR_6)
    return 1;

  if ((VAR_8 == VAR_0 || (VAR_8 == VAR_1 && FUNC_7 (FUNC_9 (VAR_5))))
      && (FUNC_7 (VAR_6) || (FUNC_0 (VAR_6) == VAR_1
      && FUNC_7 (FUNC_9 (VAR_6)))))
    {
      int VAR_10 = -1, VAR_11 = -1;
      int VAR_12 = 0, VAR_13 = 0;

      if (FUNC_1 (VAR_5) != FUNC_1 (VAR_6))
 return 0;



      if (VAR_3 == 0)
 return FUNC_20 (VAR_5, VAR_6);

      if (VAR_8 == VAR_1)
 {
   VAR_10 = FUNC_6 (FUNC_9 (VAR_5));
   VAR_12 = FUNC_8 (VAR_5);

   if (VAR_3[VAR_10] >= 0)
     {
       VAR_10 = FUNC_23 (VAR_3[VAR_10],
        FUNC_1 (FUNC_9 (VAR_5)),
        VAR_12,
        FUNC_1 (VAR_5));
       VAR_12 = 0;
     }
 }
      else
 {
   VAR_10 = FUNC_6 (VAR_5);
   if (VAR_3[VAR_10] >= 0)
     VAR_10 = VAR_3[VAR_10];
 }

      if (FUNC_0 (VAR_6) == VAR_1)
 {
   VAR_11 = FUNC_6 (FUNC_9 (VAR_6));
   VAR_13 = FUNC_8 (VAR_6);

   if (VAR_3[VAR_11] >= 0)
     {
       VAR_11 = FUNC_23 (VAR_3[VAR_11],
        FUNC_1 (FUNC_9 (VAR_6)),
        VAR_13,
        FUNC_1 (VAR_6));
       VAR_13 = 0;
     }
 }
      else
 {
   VAR_11 = FUNC_6 (VAR_6);
   if (VAR_3[VAR_11] >= 0)
     VAR_11 = VAR_3[VAR_11];
 }

      return VAR_10 >= 0 && VAR_10 == VAR_11 && VAR_12 == VAR_13;
    }



  if (VAR_8 != FUNC_0 (VAR_6))
    return 0;

  switch (VAR_8)
    {
    case 129:
    case 134:
    case 135:
    case 136:
    case 131:
    case 132:
      return 0;

    case 130:

      if (FUNC_4 (VAR_5) || FUNC_4 (VAR_6))
 return FUNC_11 (VAR_5, 0) == FUNC_11 (VAR_6, 0);



      return (FUNC_19 (FUNC_11 (VAR_5, 0))
       == FUNC_19 (FUNC_11 (VAR_6, 0)));

    case 128:
      return FUNC_13 (VAR_5, 0) == FUNC_13 (VAR_6, 0);

    case 133:

      return 0;

    default:
      break;
    }



  if (FUNC_1 (VAR_5) != FUNC_1 (VAR_6))
    return 0;



  if (VAR_4.commutative_p (VAR_5, VAR_2))
    return ((FUNC_24 (FUNC_11 (VAR_5, 0), FUNC_11 (VAR_6, 0))
      && FUNC_24 (FUNC_11 (VAR_5, 1), FUNC_11 (VAR_6, 1)))
     || (FUNC_24 (FUNC_11 (VAR_5, 0), FUNC_11 (VAR_6, 1))
  && FUNC_24 (FUNC_11 (VAR_5, 1), FUNC_11 (VAR_6, 0))));
  else if (FUNC_5 (VAR_5))
    return (FUNC_24 (FUNC_11 (VAR_5, 0), FUNC_11 (VAR_6, 0))
     && FUNC_24 (FUNC_11 (VAR_5, 1), FUNC_11 (VAR_6, 1)));
  else if (FUNC_10 (VAR_5))
    return FUNC_24 (FUNC_11 (VAR_5, 0), FUNC_11 (VAR_6, 0));




  VAR_9 = FUNC_2 (VAR_8);
  for (VAR_7 = FUNC_3 (VAR_8) - 1; VAR_7 >= 0; VAR_7--)
    {
      int VAR_14;
      switch (VAR_9[VAR_7])
 {
 case 'w':
   if (FUNC_17 (VAR_5, VAR_7) != FUNC_17 (VAR_6, VAR_7))
     return 0;
   break;

 case 'i':
   if (FUNC_12 (VAR_5, VAR_7) != FUNC_12 (VAR_6, VAR_7))
     return 0;
   break;

 case 't':
   if (FUNC_14 (VAR_5, VAR_7) != FUNC_14 (VAR_6, VAR_7))
     return 0;
   break;

 case 's':
   if (FUNC_21 (FUNC_13 (VAR_5, VAR_7), FUNC_13 (VAR_6, VAR_7)))
     return 0;
   break;

 case 'e':
   if (! FUNC_24 (FUNC_11 (VAR_5, VAR_7), FUNC_11 (VAR_6, VAR_7)))
     return 0;
   break;

 case 'u':
   if (FUNC_11 (VAR_5, VAR_7) != FUNC_11 (VAR_6, VAR_7))
     return 0;

 case '0':
   break;

 case 'E':
   if (FUNC_16 (VAR_5, VAR_7) != FUNC_16 (VAR_6, VAR_7))
     return 0;
   for (VAR_14 = FUNC_16 (VAR_5, VAR_7) - 1; VAR_14 >= 0; VAR_14--)
     if (!FUNC_24 (FUNC_15 (VAR_5, VAR_7, VAR_14), FUNC_15 (VAR_6, VAR_7, VAR_14)))
       return 0;
   break;

 default:
   FUNC_18 ();
 }
    }
  return 1;
}
