
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int signbit_rw; int has_signed_zero; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct real_format* FUNC_2 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int,scalar_t__,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_17 (scalar_t__,int,int) ;
 int FUNC_18 (int ,int ,scalar_t__) ;
 int FUNC_19 () ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static rtx
FUNC_20 (enum rtx_code VAR_13, enum machine_mode VAR_14,
     rtx VAR_15, rtx VAR_16)
{
  const struct real_format *VAR_17;
  int VAR_18, VAR_19, VAR_20, VAR_21;
  enum machine_mode VAR_22;
  HOST_WIDE_INT VAR_23, VAR_24;
  rtx VAR_25, VAR_26;


  VAR_17 = FUNC_2 (VAR_14);
  if (VAR_17 == ((void*)0))
    return VAR_6;

  VAR_18 = VAR_17->signbit_rw;
  if (VAR_18 < 0)
    return VAR_6;


  if (VAR_13 == VAR_5 && !VAR_17->has_signed_zero)
    return VAR_6;

  if (FUNC_1 (VAR_14) <= VAR_9)
    {
      VAR_22 = FUNC_14 (VAR_14);
      if (VAR_22 == VAR_2)
 return VAR_6;
      VAR_19 = 0;
      VAR_20 = 1;
    }
  else
    {
      VAR_22 = VAR_11;

      if (VAR_3)
 VAR_19 = (FUNC_0 (VAR_14) - VAR_18) / VAR_1;
      else
 VAR_19 = VAR_18 / VAR_1;
      VAR_18 = VAR_18 % VAR_1;
      VAR_20 = (FUNC_0 (VAR_14) + VAR_1 - 1) / VAR_1;
    }

  if (VAR_18 < VAR_4)
    {
      VAR_23 = 0;
      VAR_24 = (HOST_WIDE_INT) 1 << VAR_18;
    }
  else
    {
      VAR_23 = (HOST_WIDE_INT) 1 << (VAR_18 - VAR_4);
      VAR_24 = 0;
    }
  if (VAR_13 == VAR_0)
    VAR_24 = ~VAR_24, VAR_23 = ~VAR_23;

  if (VAR_16 == 0 || VAR_16 == VAR_15)
    VAR_16 = FUNC_9 (VAR_14);

  if (VAR_20 > 1)
    {
      FUNC_19 ();

      for (VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21)
 {
   rtx VAR_27 = FUNC_16 (VAR_16, VAR_21, 1, VAR_14);
   rtx VAR_28 = FUNC_17 (VAR_15, VAR_21, VAR_14);

   if (VAR_21 == VAR_19)
     {
       VAR_25 = FUNC_7 (VAR_22, VAR_13 == VAR_0 ? VAR_10 : VAR_12,
       VAR_28,
       FUNC_13 (VAR_24, VAR_23, VAR_22),
       VAR_27, 1, VAR_7);
       if (VAR_25 != VAR_27)
  FUNC_4 (VAR_27, VAR_25);
     }
   else
     FUNC_4 (VAR_27, VAR_28);
 }

      VAR_26 = FUNC_11 ();
      FUNC_6 ();

      VAR_25 = FUNC_10 (VAR_13, VAR_14, FUNC_3 (VAR_15));
      FUNC_5 (VAR_26, VAR_16, VAR_15, VAR_6, VAR_25);
    }
  else
    {
      VAR_25 = FUNC_7 (VAR_22, VAR_13 == VAR_0 ? VAR_10 : VAR_12,
      FUNC_8 (VAR_22, VAR_15),
      FUNC_13 (VAR_24, VAR_23, VAR_22),
             FUNC_8 (VAR_22, VAR_16), 1, VAR_7);
      VAR_16 = FUNC_15 (VAR_14, VAR_25, VAR_22);

      FUNC_18 (FUNC_12 (), VAR_8,
      FUNC_10 (VAR_13, VAR_14, FUNC_3 (VAR_15)));
    }

  return VAR_16;
}
