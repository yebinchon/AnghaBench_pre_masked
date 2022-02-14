
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int,int) ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int,int) ;
 int FUNC_14 () ;
 int VAR_9 ;

__attribute__((used)) static rtx
FUNC_15 (enum machine_mode VAR_10, rtx VAR_11, rtx VAR_12, rtx VAR_13,
       int VAR_14, bool VAR_15)
{
  enum machine_mode VAR_16;
  HOST_WIDE_INT VAR_17, VAR_18;
  int VAR_19, VAR_20, VAR_21;
  rtx VAR_22, VAR_23;

  if (FUNC_1 (VAR_10) <= VAR_6)
    {
      VAR_16 = FUNC_10 (VAR_10);
      if (VAR_16 == VAR_1)
 return VAR_4;
      VAR_19 = 0;
      VAR_20 = 1;
    }
  else
    {
      VAR_16 = VAR_9;

      if (VAR_2)
 VAR_19 = (FUNC_0 (VAR_10) - VAR_14) / VAR_0;
      else
 VAR_19 = VAR_14 / VAR_0;
      VAR_14 = VAR_14 % VAR_0;
      VAR_20 = (FUNC_0 (VAR_10) + VAR_0 - 1) / VAR_0;
    }

  if (VAR_14 < VAR_3)
    {
      VAR_17 = 0;
      VAR_18 = (HOST_WIDE_INT) 1 << VAR_14;
    }
  else
    {
      VAR_17 = (HOST_WIDE_INT) 1 << (VAR_14 - VAR_3);
      VAR_18 = 0;
    }

  if (VAR_13 == 0 || VAR_13 == VAR_11 || VAR_13 == VAR_12)
    VAR_13 = FUNC_7 (VAR_10);

  if (VAR_20 > 1)
    {
      FUNC_14 ();

      for (VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21)
 {
   rtx VAR_24 = FUNC_12 (VAR_13, VAR_21, 1, VAR_10);
   rtx VAR_25 = FUNC_13 (VAR_11, VAR_21, VAR_10);

   if (VAR_21 == VAR_19)
     {
       if (!VAR_15)
  VAR_25 = FUNC_5 (VAR_16, VAR_7, VAR_25,
       FUNC_9 (~VAR_18, ~VAR_17, VAR_16),
       VAR_4, 1, VAR_5);

       VAR_12 = FUNC_5 (VAR_16, VAR_7,
      FUNC_13 (VAR_12, VAR_21, VAR_10),
      FUNC_9 (VAR_18, VAR_17, VAR_16),
      VAR_4, 1, VAR_5);

       VAR_22 = FUNC_5 (VAR_16, VAR_8, VAR_25, VAR_12,
       VAR_24, 1, VAR_5);
       if (VAR_22 != VAR_24)
  FUNC_2 (VAR_24, VAR_22);
     }
   else
     FUNC_2 (VAR_24, VAR_25);
 }

      VAR_23 = FUNC_8 ();
      FUNC_4 ();

      FUNC_3 (VAR_23, VAR_13, VAR_11, VAR_12, VAR_4);
    }
  else
    {
      VAR_12 = FUNC_5 (VAR_16, VAR_7, FUNC_6 (VAR_16, VAR_12),
            FUNC_9 (VAR_18, VAR_17, VAR_16),
            VAR_4, 1, VAR_5);

      VAR_11 = FUNC_6 (VAR_16, VAR_11);
      if (!VAR_15)
 VAR_11 = FUNC_5 (VAR_16, VAR_7, VAR_11,
       FUNC_9 (~VAR_18, ~VAR_17, VAR_16),
       VAR_4, 1, VAR_5);

      VAR_22 = FUNC_5 (VAR_16, VAR_8, VAR_11, VAR_12,
      FUNC_6 (VAR_16, VAR_13), 1, VAR_5);
      VAR_13 = FUNC_11 (VAR_10, VAR_22, VAR_16);
    }

  return VAR_13;
}
