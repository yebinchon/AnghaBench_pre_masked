
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int VAR_14 ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int,int) ;
 int FUNC_17 (scalar_t__,int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_18 (scalar_t__,int,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int,scalar_t__) ;
 int VAR_19 ;
 scalar_t__ FUNC_22 (int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_23 (scalar_t__,int,scalar_t__,int) ;

__attribute__((used)) static rtx
FUNC_24 (rtx VAR_20, rtx VAR_21, rtx VAR_22, int VAR_23, int VAR_24)
{
  enum rtx_code VAR_25 = FUNC_1 (VAR_20);
  enum machine_mode VAR_26 = VAR_14;
  const char *VAR_27;
  int VAR_28, VAR_29;
  rtx VAR_30;
  if (! VAR_23 && ((VAR_20) == (VAR_21) || (FUNC_9 (VAR_20) && FUNC_9 (VAR_21) && FUNC_7 (VAR_20) == FUNC_7 (VAR_21) && FUNC_2 (VAR_20) == FUNC_2 (VAR_21))))
    {
      VAR_19++;
      return (VAR_24 && VAR_19 > 1 ? FUNC_19 (VAR_22) : VAR_22);
    }
  if (! VAR_23 && VAR_25 == VAR_10 && FUNC_9 (VAR_21)
      && FUNC_7 (VAR_20) == FUNC_7 (VAR_21))
    return FUNC_21 (FUNC_2 (VAR_20), VAR_18);



  if (VAR_25 != VAR_7 && VAR_25 != VAR_6 && FUNC_6 (VAR_20))
    return VAR_20;







  if (((VAR_20) == (VAR_22) || (FUNC_9 (VAR_20) && FUNC_9 (VAR_22) && FUNC_7 (VAR_20) == FUNC_7 (VAR_22) && FUNC_2 (VAR_20) == FUNC_2 (VAR_22))))
    return VAR_22;
  if (VAR_25 == VAR_8
      && FUNC_1 (FUNC_16 (VAR_20, 0, 0)) == VAR_11
      && FUNC_1 (FUNC_11 (FUNC_16 (VAR_20, 0, 0))) == VAR_0)
    {
      VAR_30 = FUNC_24 (FUNC_16 (VAR_20, 0, 0), VAR_21, VAR_22, 0, VAR_24);


      if (FUNC_1 (VAR_30) == VAR_2
   && FUNC_15 (VAR_30, 0) == VAR_18)
 return VAR_30;

      FUNC_14 (FUNC_16 (VAR_20, 0, 0), VAR_30);

      for (VAR_29 = FUNC_17 (VAR_20, 0) - 1; VAR_29 >= 1; VAR_29--)
 {
   rtx VAR_31 = FUNC_10 (FUNC_16 (VAR_20, 0, VAR_29));

   if (!FUNC_9 (VAR_31)
       && FUNC_1 (VAR_31) != VAR_1
       && FUNC_1 (VAR_31) != VAR_9)
     {
       VAR_30 = FUNC_24 (VAR_31, VAR_21, VAR_22, 0, VAR_24);


       if (FUNC_1 (VAR_30) == VAR_2
    && FUNC_15 (VAR_30, 0) == VAR_18)
  return VAR_30;

       FUNC_14 (FUNC_10 (FUNC_16 (VAR_20, 0, VAR_29)), VAR_30);
     }
 }
    }
  else
    {
      VAR_28 = FUNC_4 (VAR_25);
      VAR_27 = FUNC_3 (VAR_25);





      if (VAR_25 == VAR_11
   && (FUNC_9 (FUNC_10 (VAR_20))
       || FUNC_1 (FUNC_10 (VAR_20)) == VAR_1
       || FUNC_1 (FUNC_10 (VAR_20)) == VAR_9))
 VAR_27 = "ie";



      if (VAR_27[0] == 'e')
 VAR_26 = FUNC_2 (FUNC_15 (VAR_20, 0));

      for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
 {
   if (VAR_27[VAR_29] == 'E')
     {
       int VAR_32;
       for (VAR_32 = FUNC_17 (VAR_20, VAR_29) - 1; VAR_32 >= 0; VAR_32--)
  {
    if (((FUNC_16 (VAR_20, VAR_29, VAR_32)) == (VAR_21) || (FUNC_9 (FUNC_16 (VAR_20, VAR_29, VAR_32)) && FUNC_9 (VAR_21) && FUNC_7 (FUNC_16 (VAR_20, VAR_29, VAR_32)) == FUNC_7 (VAR_21) && FUNC_2 (FUNC_16 (VAR_20, VAR_29, VAR_32)) == FUNC_2 (VAR_21))))
      {
        VAR_30 = (VAR_24 && VAR_19
        ? FUNC_19 (VAR_22) : VAR_22);
        VAR_19++;
      }
    else
      {
        VAR_30 = FUNC_24 (FUNC_16 (VAR_20, VAR_29, VAR_32), VAR_21, VAR_22, 0,
       VAR_24);



        if (FUNC_1 (VAR_30) == VAR_2
     && FUNC_15 (VAR_30, 0) == VAR_18)
   return VAR_30;
      }

    FUNC_14 (FUNC_16 (VAR_20, VAR_29, VAR_32), VAR_30);
  }
     }
   else if (VAR_27[VAR_29] == 'e')
     {

       VAR_30 = FUNC_15 (VAR_20, VAR_29);
       if (VAR_23
    && VAR_29 == 0
    && (((VAR_25 == VAR_13 || VAR_25 == VAR_16)
         && FUNC_9 (VAR_30))
        || VAR_25 == VAR_12))
  ;

       else if (((FUNC_15 (VAR_20, VAR_29)) == (VAR_21) || (FUNC_9 (FUNC_15 (VAR_20, VAR_29)) && FUNC_9 (VAR_21) && FUNC_7 (FUNC_15 (VAR_20, VAR_29)) == FUNC_7 (VAR_21) && FUNC_2 (FUNC_15 (VAR_20, VAR_29)) == FUNC_2 (VAR_21))))
  {
    if (FUNC_1 (VAR_22) == VAR_13
        && ! FUNC_5 (FUNC_2 (VAR_22),
         FUNC_2 (FUNC_13 (VAR_22)))
        && ! (VAR_25 == VAR_13
       && FUNC_5 (FUNC_2 (VAR_20),
      FUNC_2 (FUNC_13 (VAR_22))))



        )
      return FUNC_21 (VAR_14, VAR_18);
    VAR_30 = (VAR_24 && VAR_19 ? FUNC_19 (VAR_22) : VAR_22);
    VAR_19++;
  }
       else
  VAR_30 = FUNC_24 (FUNC_15 (VAR_20, VAR_29), VAR_21, VAR_22,
        (((VAR_23
    && (VAR_25 == VAR_13 || VAR_25 == VAR_12
        || VAR_25 == VAR_16))
          || VAR_25 == VAR_11)
         && VAR_29 == 0), VAR_24);







       if (FUNC_1 (VAR_30) == VAR_2 && FUNC_15 (VAR_30, 0) == VAR_18)
  return VAR_30;

       if (FUNC_1 (VAR_20) == VAR_13
    && (FUNC_1 (VAR_30) == VAR_4
        || FUNC_1 (VAR_30) == VAR_3))
  {
    enum machine_mode VAR_33 = FUNC_2 (VAR_20);

    VAR_20 = FUNC_22 (FUNC_2 (VAR_20), VAR_30,
           FUNC_2 (FUNC_13 (VAR_20)),
           FUNC_12 (VAR_20));
    if (! VAR_20)
      VAR_20 = FUNC_21 (VAR_33, VAR_18);
  }
       else if (FUNC_1 (VAR_30) == VAR_4
         && FUNC_1 (VAR_20) == VAR_15)
  {
    VAR_20 = FUNC_23 (VAR_15, FUNC_2 (VAR_20),
      VAR_30, FUNC_2 (FUNC_15 (VAR_20, 0)));
    FUNC_20 (VAR_20);
  }
       else
  FUNC_14 (FUNC_15 (VAR_20, VAR_29), VAR_30);
     }
 }
    }





  for (VAR_29 = 0; VAR_29 < 4; VAR_29++)
    {


      if (VAR_25 != VAR_4 && VAR_25 != VAR_10 && VAR_25 != VAR_2)
 VAR_20 = FUNC_18 (VAR_20, VAR_26, VAR_23);

      if (FUNC_1 (VAR_20) == VAR_25)
 break;

      VAR_25 = FUNC_1 (VAR_20);



      VAR_26 = VAR_14;
    }

  return VAR_20;
}
