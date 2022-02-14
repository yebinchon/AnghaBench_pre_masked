
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {int dummy; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum iv_grd_result { ____Placeholder_iv_grd_result } iv_grd_result ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct df_ref*) ;
 int const FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;


 scalar_t__ FUNC_5 (scalar_t__) ;


 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;

 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,scalar_t__,struct df_ref**) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int const,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_16 (struct df_ref *VAR_6, rtx VAR_7,
  rtx *VAR_8, enum machine_mode *VAR_9,
  enum rtx_code *VAR_10, enum machine_mode VAR_11,
  rtx *VAR_12)
{
  rtx VAR_13, VAR_14, VAR_15 = VAR_3, VAR_16 = VAR_3;
  rtx VAR_17, VAR_18, VAR_19;
  enum rtx_code VAR_20;
  rtx VAR_21 = FUNC_1 (VAR_6);
  struct df_ref *VAR_22;
  enum iv_grd_result VAR_23;

  VAR_13 = FUNC_14 (VAR_21);
  if (!VAR_13)
    return 0;

  VAR_14 = FUNC_8 (VAR_21);
  if (VAR_14)
    VAR_14 = FUNC_7 (VAR_14, 0);
  else
    VAR_14 = FUNC_5 (VAR_13);

  VAR_20 = FUNC_2 (VAR_14);
  switch (VAR_20)
    {
    case 129:
    case 131:
      VAR_17 = VAR_14;
      break;

    case 132:
    case 133:
      VAR_15 = FUNC_7 (VAR_14, 0);
      VAR_16 = FUNC_7 (VAR_14, 1);

      if (VAR_20 == 132 && FUNC_0 (VAR_15))
 {
   VAR_19 = VAR_15; VAR_15 = VAR_16; VAR_16 = VAR_19;
 }

      if (!FUNC_12 (VAR_15)
   || !FUNC_0 (VAR_16))
 return 0;

      if (FUNC_3 (VAR_14) != VAR_11)
 {
   if (FUNC_2 (VAR_15) != 129)
     return 0;
   if (FUNC_3 (FUNC_6 (VAR_15)) != VAR_11)
     return 0;
 }

      VAR_17 = VAR_15;
      break;

    case 130:
    case 128:
      if (FUNC_3 (VAR_14) != VAR_11)
 return 0;

      VAR_15 = FUNC_7 (VAR_14, 0);
      if (!FUNC_12 (VAR_15))
 return 0;

      VAR_17 = VAR_15;
      break;

    default:
      return 0;
    }

  if (FUNC_2 (VAR_17) == 129)
    {
      if (!FUNC_15 (VAR_17))
 return 0;

      VAR_18 = FUNC_6 (VAR_17);
      if (FUNC_3 (VAR_18) != VAR_11)
 return 0;
    }
  else
    VAR_18 = VAR_17;

  VAR_23 = FUNC_10 (VAR_21, VAR_18, &VAR_22);

  if (VAR_23 == VAR_0 || VAR_23 == VAR_1)
    return 0;

  if (VAR_23 == VAR_2)
    {
      if (!FUNC_11 (VAR_18, VAR_7))
 return 0;

      *VAR_8 = VAR_5;
      *VAR_10 = VAR_4;
      *VAR_9 = VAR_11;
      *VAR_12 = VAR_5;
    }
  else if (!FUNC_16 (VAR_22, VAR_7,
       VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_12))
    return 0;

  if (FUNC_2 (VAR_17) == 129)
    {
      enum machine_mode VAR_24 = FUNC_3 (VAR_17);

      if (FUNC_4 (VAR_24) > FUNC_4 (*VAR_9))
 return 0;

      *VAR_9 = VAR_24;
      *VAR_8 = FUNC_13 (132, VAR_11,
      *VAR_8, *VAR_12);
      *VAR_12 = VAR_5;
      *VAR_10 = VAR_4;
    }

  switch (VAR_20)
    {
    case 131:
    case 129:
      break;

    case 132:
    case 133:
      if (*VAR_9 == VAR_11

   || FUNC_3 (VAR_14) != VAR_11)
 *VAR_8 = FUNC_13 (VAR_20, VAR_11,
        *VAR_8, VAR_16);
      else
 *VAR_12 = FUNC_13 (VAR_20, VAR_11,
        *VAR_12, VAR_16);
      break;

    case 130:
    case 128:
      FUNC_9 (FUNC_3 (VAR_15) == *VAR_9
    && *VAR_10 == VAR_4
    && *VAR_12 == VAR_5);

      *VAR_10 = VAR_20;
      break;

    default:
      return 0;
    }

  return 1;
}
