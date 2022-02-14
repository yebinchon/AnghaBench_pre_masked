
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_18 (scalar_t__,int,int) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_21 (scalar_t__,int) ;
 int FUNC_22 (scalar_t__,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_23 (scalar_t__,int) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (scalar_t__,int ) ;

void
FUNC_26 (enum machine_mode VAR_18, rtx VAR_19[])
{
  int VAR_20 = (VAR_17 || VAR_16);
  rtx VAR_21, VAR_22;
  enum tls_model VAR_23;

  VAR_21 = VAR_19[0];
  VAR_22 = VAR_19[1];

  if (FUNC_1 (VAR_22) == VAR_10)
    {
      VAR_23 = FUNC_4 (VAR_22);
      if (VAR_23)
 {
   VAR_22 = FUNC_18 (VAR_22, VAR_23, 1);
   VAR_22 = FUNC_11 (VAR_22, VAR_21);
   if (VAR_22 == VAR_21)
     return;
 }
    }
  else if (FUNC_1 (VAR_22) == VAR_0
    && FUNC_1 (FUNC_5 (VAR_22, 0)) == VAR_7
    && FUNC_1 (FUNC_5 (FUNC_5 (VAR_22, 0), 0)) == VAR_10)
    {
      VAR_23 = FUNC_4 (FUNC_5 (FUNC_5 (VAR_22, 0), 0));
      if (VAR_23)
 {
   rtx VAR_24 = FUNC_5 (FUNC_5 (VAR_22, 0), 1);
   VAR_22 = FUNC_18 (FUNC_5 (FUNC_5 (VAR_22, 0), 0), VAR_23, 1);
   VAR_22 = FUNC_11 (VAR_22, ((void*)0));
   VAR_22 = FUNC_9 (VAR_8, VAR_7, VAR_22, VAR_24,
         VAR_21, 1, VAR_6);
   if (VAR_22 == VAR_21)
     return;
 }
    }

  if (VAR_14 && VAR_18 == VAR_8 && FUNC_23 (VAR_22, VAR_8))
    {
      if (VAR_12 && !VAR_11)
 {
 }
      else
 {
   if (FUNC_1 (VAR_21) == VAR_5)
     VAR_22 = FUNC_12 (VAR_8, VAR_22);
   else
     VAR_22 = FUNC_17 (VAR_22, VAR_22, VAR_8);
 }
    }
  else
    {
      if (FUNC_1 (VAR_21) == VAR_5
   && (FUNC_3 (FUNC_2 (VAR_18)) != FUNC_2 (VAR_18)
       || !FUNC_21 (VAR_21, VAR_18))
   && FUNC_1 (VAR_22) == VAR_5)
 VAR_22 = FUNC_12 (VAR_18, VAR_22);

      if (FUNC_21 (VAR_21, VAR_18)
   && ! FUNC_15 (VAR_22, VAR_18))
 VAR_22 = FUNC_6 (VAR_18, VAR_22);



      if (VAR_11 && VAR_18 == VAR_2
   && FUNC_16 (VAR_22, VAR_18)
   && !FUNC_25 (VAR_22, VAR_13)
   && !FUNC_22 (VAR_21, VAR_18)
   && VAR_15 && !VAR_16 && !VAR_17)
 VAR_22 = FUNC_6 (VAR_18, VAR_22);

      if (FUNC_0 (VAR_18))
 {




   if (VAR_20)
     ;
   else if (FUNC_1 (VAR_22) == VAR_1)
     {
       VAR_22 = FUNC_24 (FUNC_10 (VAR_18, VAR_22));
       if (!FUNC_22 (VAR_21, VAR_18))
  {
    rtx VAR_25 = FUNC_13 (VAR_18);
    FUNC_7 (FUNC_14 (VAR_13, VAR_25, VAR_22));
    FUNC_8 (VAR_21, VAR_25);
    return;
  }
     }
 }
    }

  FUNC_7 (FUNC_14 (VAR_13, VAR_21, VAR_22));
}
