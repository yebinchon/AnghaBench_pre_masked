
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__,int ,int ,int ,int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int ,int ,int ,int) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;

rtx
FUNC_19 (rtx VAR_11, rtx VAR_12)
{
  enum machine_mode VAR_13 = FUNC_2 (VAR_11);

  if (!VAR_10 && !VAR_9 && !FUNC_15 (VAR_11, VAR_12))
    VAR_12 = FUNC_9 (VAR_13, VAR_12);

  if ((VAR_13 == VAR_5 || VAR_13 == VAR_8) && FUNC_17 (VAR_12, VAR_6))
    {
      HOST_WIDE_INT VAR_14 = 0;
      enum tls_model VAR_15;
      rtx VAR_16 = VAR_12;

      if (FUNC_1 (VAR_12) == VAR_0
   && FUNC_1 (FUNC_4 (VAR_12, 0)) == VAR_4
   && FUNC_1 (FUNC_4 (FUNC_4 (VAR_12, 0), 1)) == VAR_1)
 {
   VAR_14 = FUNC_3 (FUNC_4 (FUNC_4 (VAR_12, 0), 1));
   VAR_16 = FUNC_4 (FUNC_4 (VAR_12, 0), 0);
 }

      VAR_15 = FUNC_18 (VAR_16);
      if (VAR_15)
 return FUNC_14 (VAR_15, VAR_11, VAR_16, VAR_12, VAR_14);

      if (FUNC_6 (VAR_16, VAR_13))
 VAR_14 = 0;
      else if (FUNC_5 (VAR_16, VAR_13))
 {
   HOST_WIDE_INT VAR_17, VAR_18;

   VAR_17 = ((VAR_14 & 0x3fff) ^ 0x2000) - 0x2000;
   VAR_18 = VAR_14 - VAR_17;

   if (VAR_17 != 0)
     {
       VAR_12 = FUNC_16 (VAR_16, VAR_18);
       VAR_14 = VAR_17;
     }
   else
     VAR_14 = 0;
 }
      else
 VAR_12 = VAR_16;

      if (VAR_9)
 {

   FUNC_10 (VAR_14 == 0);
   if (FUNC_13 (VAR_11, VAR_12))
     return VAR_2;
 }

      if (VAR_14)
 {
   rtx VAR_19 = VAR_7 ? VAR_11 : FUNC_11 (VAR_13);

   FUNC_7 (FUNC_12 (VAR_6, VAR_19, VAR_12));

   VAR_12 = FUNC_8 (VAR_13, VAR_4, VAR_19,
         FUNC_0 (VAR_14), VAR_11, 1, VAR_3);
   if (VAR_11 == VAR_12)
     return VAR_2;
 }
    }

  return VAR_12;
}
