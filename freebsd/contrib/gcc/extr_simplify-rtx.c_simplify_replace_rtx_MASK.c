
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_12 (int,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,int,scalar_t__,int) ;

rtx
FUNC_14 (rtx VAR_6, rtx VAR_7, rtx VAR_8)
{
  enum rtx_code VAR_9 = FUNC_0 (VAR_6);
  enum machine_mode VAR_10 = FUNC_1 (VAR_6);
  enum machine_mode VAR_11;
  rtx VAR_12, VAR_13, VAR_14;





  if (VAR_6 == VAR_7)
    return VAR_8;

  switch (FUNC_2 (VAR_9))
    {
    case 128:
      VAR_12 = FUNC_5 (VAR_6, 0);
      VAR_11 = FUNC_1 (VAR_12);
      VAR_12 = FUNC_14 (VAR_12, VAR_7, VAR_8);
      if (VAR_12 == FUNC_5 (VAR_6, 0))
 return VAR_6;
      return FUNC_13 (VAR_9, VAR_10, VAR_12, VAR_11);

    case 136:
    case 134:
      VAR_12 = FUNC_14 (FUNC_5 (VAR_6, 0), VAR_7, VAR_8);
      VAR_13 = FUNC_14 (FUNC_5 (VAR_6, 1), VAR_7, VAR_8);
      if (VAR_12 == FUNC_5 (VAR_6, 0) && VAR_13 == FUNC_5 (VAR_6, 1))
 return VAR_6;
      return FUNC_9 (VAR_9, VAR_10, VAR_12, VAR_13);

    case 132:
    case 133:
      VAR_12 = FUNC_5 (VAR_6, 0);
      VAR_13 = FUNC_5 (VAR_6, 1);
      VAR_11 = FUNC_1 (VAR_12) != VAR_5 ? FUNC_1 (VAR_12) : FUNC_1 (VAR_13);
      VAR_12 = FUNC_14 (VAR_12, VAR_7, VAR_8);
      VAR_13 = FUNC_14 (VAR_13, VAR_7, VAR_8);
      if (VAR_12 == FUNC_5 (VAR_6, 0) && VAR_13 == FUNC_5 (VAR_6, 1))
 return VAR_6;
      return FUNC_10 (VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

    case 129:
    case 135:
      VAR_12 = FUNC_5 (VAR_6, 0);
      VAR_11 = FUNC_1 (VAR_12);
      VAR_12 = FUNC_14 (VAR_12, VAR_7, VAR_8);
      VAR_13 = FUNC_14 (FUNC_5 (VAR_6, 1), VAR_7, VAR_8);
      VAR_14 = FUNC_14 (FUNC_5 (VAR_6, 2), VAR_7, VAR_8);
      if (VAR_12 == FUNC_5 (VAR_6, 0) && VAR_13 == FUNC_5 (VAR_6, 1) && VAR_14 == FUNC_5 (VAR_6, 2))
 return VAR_6;
      if (VAR_11 == VAR_5)
 VAR_11 = FUNC_1 (VAR_12);
      return FUNC_12 (VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    case 131:

      if (VAR_9 == VAR_4)
 {
   VAR_12 = FUNC_14 (FUNC_4 (VAR_6), VAR_7, VAR_8);
   if (VAR_12 == FUNC_4 (VAR_6))
     return VAR_6;
   VAR_12 = FUNC_11 (FUNC_1 (VAR_6), VAR_12,
         FUNC_1 (FUNC_4 (VAR_6)),
         FUNC_3 (VAR_6));
   return VAR_12 ? VAR_12 : VAR_6;
 }
      break;

    case 130:
      if (VAR_9 == VAR_2)
 {
   VAR_12 = FUNC_14 (FUNC_5 (VAR_6, 0), VAR_7, VAR_8);
   if (VAR_12 == FUNC_5 (VAR_6, 0))
     return VAR_6;
   return FUNC_7 (VAR_6, VAR_12);
 }
      else if (VAR_9 == VAR_1)
 {
   VAR_12 = FUNC_14 (FUNC_5 (VAR_6, 0), VAR_7, VAR_8);
   VAR_13 = FUNC_14 (FUNC_5 (VAR_6, 1), VAR_7, VAR_8);


   if (FUNC_0 (VAR_12) == VAR_0 && FUNC_8 (FUNC_5 (VAR_12, 0), VAR_13))
     return VAR_13;

   if (VAR_12 == FUNC_5 (VAR_6, 0) && VAR_13 == FUNC_5 (VAR_6, 1))
     return VAR_6;
   return FUNC_6 (VAR_10, VAR_12, VAR_13);
 }
      else if (VAR_9 == VAR_3)
 {
   if (FUNC_8 (VAR_6, VAR_7))
     return VAR_8;
 }
      break;

    default:
      break;
    }
  return VAR_6;
}
