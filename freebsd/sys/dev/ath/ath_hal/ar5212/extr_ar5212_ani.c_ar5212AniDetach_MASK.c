
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {scalar_t__ ah_hasHwPhyCounters; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hal*) ;

void
FUNC_3(struct ath_hal *VAR_1)
{
 struct ath_hal_5212 *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0, "Detaching Ani\n");
 if (VAR_2->ah_hasHwPhyCounters)
  FUNC_2(VAR_1);
}
