
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int VAR_2 ;




 scalar_t__ VAR_3 ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 () ;

rtx
FUNC_13 (enum rtx_code VAR_9, enum machine_mode VAR_10)
{
  rtx VAR_11 = VAR_7, VAR_12 = VAR_8;
  rtx VAR_13;



  if (FUNC_1 (VAR_11) == VAR_0)
    {
      FUNC_6 ((VAR_9 == 130 || VAR_9 == 135) && VAR_12 == VAR_6);
      VAR_13 = VAR_11;
    }



  else if (FUNC_1 (VAR_11) == VAR_3)
    {
      enum qfcmp_magic {
 QCMP_INV = 1,
 QCMP_UNORD = 2,
 QCMP_EQ = 4,
 QCMP_LT = 8,
 QCMP_GT = 16
      } VAR_14;
      enum rtx_code VAR_15;
      rtx VAR_16, VAR_17;

      FUNC_6 (VAR_5 && FUNC_1 (VAR_12) == VAR_3);
      switch (VAR_9)
 {


 case 135: VAR_14 = QCMP_EQ; VAR_15 = 130; break;
 case 130: VAR_14 = QCMP_EQ; VAR_15 = 135; break;

 case 128: VAR_14 = QCMP_UNORD; VAR_15 = 130; break;
 case 129: VAR_14 = QCMP_UNORD; VAR_15 = 135; break;


 case 131: VAR_14 = QCMP_LT |QCMP_INV; VAR_15 = 130; break;
 case 132: VAR_14 = QCMP_LT|QCMP_EQ|QCMP_INV; VAR_15 = 130; break;
 case 133: VAR_14 = QCMP_GT |QCMP_INV; VAR_15 = 130; break;
 case 134: VAR_14 = QCMP_GT|QCMP_EQ|QCMP_INV; VAR_15 = 130; break;



 default: FUNC_7 ();
 }

      FUNC_12 ();

      VAR_16 = FUNC_4 (VAR_5, 0, VAR_2, VAR_1, 3,
         VAR_11, VAR_3, VAR_12, VAR_3,
         FUNC_0 (VAR_14), VAR_1);
      VAR_13 = FUNC_8 (VAR_0);
      FUNC_2 (FUNC_9 (VAR_4, VAR_13,
         FUNC_10 (VAR_15, VAR_0,
           VAR_16, VAR_6)));

      VAR_17 = FUNC_11 ();
      FUNC_5 ();

      FUNC_3 (VAR_17, VAR_13, VAR_13,
     FUNC_10 (VAR_9, VAR_0, VAR_11, VAR_12));
      VAR_9 = 130;
    }
  else
    {
      VAR_13 = FUNC_8 (VAR_0);
      FUNC_2 (FUNC_9 (VAR_4, VAR_13,
         FUNC_10 (VAR_9, VAR_0, VAR_11, VAR_12)));
      VAR_9 = 130;
    }

  return FUNC_10 (VAR_9, VAR_10, VAR_13, VAR_6);
}
