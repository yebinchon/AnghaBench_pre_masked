
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int (* ah_setTxPower ) (struct ath_hal*,int ,int *) ;} ;
struct TYPE_2__ {int ah_curchan; int ah_powerLimit; } ;
typedef int HAL_BOOL ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hal*,int ,int *) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_1, uint32_t VAR_2)
{
 uint16_t VAR_3[2];

 FUNC_1(VAR_1)->ah_powerLimit = FUNC_0(VAR_2, VAR_0);
 return VAR_1->ah_setTxPower(VAR_1, FUNC_1(VAR_1)->ah_curchan,
   VAR_3);
}
