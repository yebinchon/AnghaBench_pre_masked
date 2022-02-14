
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int FUNC_2 (int) ;

 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int) ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (int,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__,int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ,int,scalar_t__,int) ;
 scalar_t__ FUNC_19 (int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_20 (int,int,scalar_t__,int) ;
 int FUNC_21 (int) ;

__attribute__((used)) static rtx
FUNC_22 (rtx VAR_13, enum rtx_code VAR_14, rtx VAR_15, rtx VAR_16)
{
  enum rtx_code VAR_17 = FUNC_3 (VAR_13);
  rtx VAR_18;
  const char *VAR_19;
  int VAR_20, VAR_21;

  if (FUNC_17 (VAR_13))
    return VAR_13;



  if (VAR_14 == 136
      && FUNC_16 (VAR_13, VAR_15)
      && ! FUNC_2 (FUNC_4 (VAR_13))
      && ! FUNC_2 (FUNC_4 (VAR_16)))
    return VAR_16;

  if (VAR_14 == VAR_8 && FUNC_16 (VAR_13, VAR_15))
    return VAR_16;




  if (VAR_17 == VAR_0 && FUNC_16 (FUNC_10 (VAR_13, 0), VAR_15) && VAR_16 == VAR_11)
    switch (VAR_14)
      {
      case 135: case 133: case 136:
 return FUNC_10 (VAR_13, 0);
      case 129: case 131:
 return FUNC_18 (VAR_2, FUNC_4 (FUNC_10 (VAR_13, 0)),
       FUNC_10 (VAR_13, 0),
       FUNC_4 (FUNC_10 (VAR_13, 0)));
      default:
 break;
      }




  else if (FUNC_1 (VAR_13) || FUNC_0 (VAR_13))
    {
      if (FUNC_16 (FUNC_10 (VAR_13, 0), VAR_16))
 VAR_14 = FUNC_21 (VAR_14), VAR_18 = VAR_16, VAR_16 = VAR_15, VAR_15 = VAR_18;

      if (FUNC_16 (FUNC_10 (VAR_13, 0), VAR_15) && FUNC_16 (FUNC_10 (VAR_13, 1), VAR_16))
 {
   if (FUNC_1 (VAR_13))
     {
       if (FUNC_13 (VAR_14, VAR_17))
  return VAR_12;

       VAR_17 = FUNC_15 (VAR_13, ((void*)0));
       if (VAR_17 != VAR_9
    && FUNC_13 (VAR_14, VAR_17))
  return VAR_11;
       else
  return VAR_13;
     }
   else if (VAR_17 == VAR_3 || VAR_17 == VAR_4
     || VAR_17 == VAR_7 || VAR_17 == VAR_6)
     {
       int VAR_22 = (VAR_17 == VAR_7 || VAR_17 == VAR_6);





       if ((VAR_17 == VAR_3 || VAR_17 == VAR_6)
    && ! (VAR_14 == 136 || VAR_14 == VAR_1))
  VAR_14 = FUNC_14 (VAR_14);

       switch (VAR_14)
  {
  case 135: case 133:
    return VAR_22 ? VAR_13 : FUNC_10 (VAR_13, 1);
  case 131: case 129:
    return VAR_22 ? VAR_13 : FUNC_10 (VAR_13, 0);
  case 134: case 132:
    return VAR_22 ? FUNC_10 (VAR_13, 1) : VAR_13;
  case 130: case 128:
    return VAR_22 ? FUNC_10 (VAR_13, 0) : VAR_13;
  default:
    break;
  }
     }
 }
    }
  else if (VAR_17 == VAR_5)
    {
      enum machine_mode VAR_23 = FUNC_4 (FUNC_8 (VAR_13));
      rtx VAR_24, VAR_25 = FUNC_22 (FUNC_8 (VAR_13), VAR_14, VAR_15, VAR_16);

      if (FUNC_8 (VAR_13) != VAR_25)
 {


   VAR_24 = FUNC_19 (FUNC_4 (VAR_13), VAR_25,
     VAR_23, FUNC_7 (VAR_13));
   if (VAR_24)
     return VAR_24;
   else
     FUNC_9 (FUNC_8 (VAR_13), VAR_25);
 }

      return VAR_13;
    }






  else if (VAR_17 == VAR_10)
    {
      enum machine_mode VAR_26 = FUNC_4 (FUNC_10 (VAR_13, 0));
      rtx VAR_27, VAR_28 = FUNC_22 (FUNC_10 (VAR_13, 0), VAR_14, VAR_15, VAR_16);

      if (FUNC_10 (VAR_13, 0) != VAR_28)
 {


   VAR_27 = FUNC_20 (VAR_10, FUNC_4 (VAR_13),
       VAR_28, VAR_26);
   if (VAR_27)
     return VAR_27;
   else
     FUNC_9 (FUNC_10 (VAR_13, 0), VAR_28);
 }

      return VAR_13;
    }

  VAR_19 = FUNC_5 (VAR_17);
  for (VAR_20 = FUNC_6 (VAR_17) - 1; VAR_20 >= 0; VAR_20--)
    {
      if (VAR_19[VAR_20] == 'e')
 FUNC_9 (FUNC_10 (VAR_13, VAR_20), FUNC_22 (FUNC_10 (VAR_13, VAR_20), VAR_14, VAR_15, VAR_16));
      else if (VAR_19[VAR_20] == 'E')
 for (VAR_21 = FUNC_12 (VAR_13, VAR_20) - 1; VAR_21 >= 0; VAR_21--)
   FUNC_9 (FUNC_11 (VAR_13, VAR_20, VAR_21), FUNC_22 (FUNC_11 (VAR_13, VAR_20, VAR_21),
      VAR_14, VAR_15, VAR_16));
    }

  return VAR_13;
}
