
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_txTrigLev; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ath_hal *VAR_13)
{
 struct ath_hal_5212 *VAR_14 = FUNC_0(VAR_13);




 FUNC_3(VAR_13, VAR_1, VAR_2);




 FUNC_4(VAR_13, VAR_10,
  (FUNC_2(VAR_13, VAR_10) & ~VAR_12) | VAR_11);
 FUNC_4(VAR_13, VAR_6,
  (FUNC_2(VAR_13, VAR_6) & ~VAR_8) | VAR_7);


 FUNC_4(VAR_13, VAR_10,
  (FUNC_2(VAR_13, VAR_10) &~ VAR_3) |
      FUNC_5(VAR_14->ah_txTrigLev, VAR_3));




 FUNC_4(VAR_13, VAR_9, 0x200);





 if (FUNC_1(VAR_13))





  FUNC_4(VAR_13, VAR_4, VAR_0);
 else
  FUNC_4(VAR_13, VAR_4, VAR_5);
}
