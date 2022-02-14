
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;

int
FUNC_19 (rtx VAR_11, rtx VAR_12, rtx VAR_13, rtx VAR_14)
{
  rtx VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;




  if (VAR_5 && VAR_13 == VAR_7 && VAR_9 > 1
      && !VAR_4
      && !VAR_10
      && (FUNC_0 (VAR_14) != VAR_0 || FUNC_1 (VAR_14) < 4))
    return 0;

  VAR_15 = FUNC_5 (VAR_1, FUNC_2 (VAR_12, 0));
  VAR_16 = FUNC_11 (VAR_1);

  if (VAR_5 && VAR_13 == VAR_7 && VAR_9 > 1
      && !VAR_10)
    {
      FUNC_4 (VAR_11, VAR_15);

      FUNC_17 (VAR_11, VAR_12, VAR_14);




      if (VAR_3)
 FUNC_3 (FUNC_15 (VAR_11, VAR_11, VAR_15));
      else
 FUNC_3 (FUNC_16 (VAR_11, VAR_11, VAR_15));
    }
  else
    {
      rtx VAR_20;
      VAR_17 = FUNC_11 (VAR_1);
      VAR_18 = FUNC_11 (VAR_1);
      VAR_19 = FUNC_5 (VAR_1, VAR_8);

      FUNC_4 (VAR_18, VAR_15);
      VAR_13 = FUNC_5 (VAR_2, VAR_13);

      FUNC_3 (FUNC_8 ());
      VAR_12 = FUNC_18 (VAR_12, VAR_18);


      VAR_20 = FUNC_13 (VAR_1, FUNC_12 (4, VAR_12, VAR_13, VAR_14,
       VAR_19), VAR_6);
      FUNC_3 (FUNC_14 (VAR_16, VAR_18, VAR_20));
      if (VAR_3)
 {
   FUNC_3 (FUNC_9 (VAR_17, VAR_16));
   FUNC_3 (FUNC_6 (VAR_11, VAR_17, VAR_8));
 }
      else
 {
   FUNC_3 (FUNC_10 (VAR_17, VAR_16));
   FUNC_3 (FUNC_7 (VAR_11, VAR_17, VAR_8));
 }
    }
  return 1;
}
