
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5211 {int ah_rfgainState; int ah_tx6PowerInHalfDbm; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5211* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_4)
{
 struct ath_hal_5211 *VAR_5 = FUNC_0(VAR_4);


 FUNC_1(VAR_4, VAR_0,
    FUNC_2(VAR_5->ah_tx6PowerInHalfDbm, VAR_2)
  | VAR_1);

 VAR_5->ah_rfgainState = VAR_3;
}
