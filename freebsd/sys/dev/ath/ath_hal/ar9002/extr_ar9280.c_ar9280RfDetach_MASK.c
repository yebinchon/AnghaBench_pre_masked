
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {scalar_t__ ah_rfHal; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_1)
{
 struct ath_hal_5212 *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->ah_rfHal != VAR_0);
 FUNC_2(VAR_2->ah_rfHal);
 VAR_2->ah_rfHal = VAR_0;
}
