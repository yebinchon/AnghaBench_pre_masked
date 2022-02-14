
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_private {int ah_opmode; int ah_curchan; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int) ;
 int FUNC_5 (struct ath_hal*) ;

void
FUNC_6(struct ath_hal *VAR_4, HAL_BOOL VAR_5)
{
 struct ath_hal_private *VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_3,
  FUNC_2(VAR_4, VAR_3) &~ VAR_2);
 FUNC_5(VAR_4);

 FUNC_4(VAR_4, VAR_6->ah_curchan, VAR_6->ah_opmode, !VAR_5);
}
