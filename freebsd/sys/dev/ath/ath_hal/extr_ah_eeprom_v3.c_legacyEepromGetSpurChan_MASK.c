
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_3__ {int ** ee_spurChans; } ;
typedef TYPE_1__ HAL_EEPROM ;
typedef size_t HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct ath_hal *VAR_1, int VAR_2, HAL_BOOL VAR_3)
{
 HAL_EEPROM *VAR_4 = FUNC_0(VAR_1)->ah_eeprom;

 FUNC_1(0 <= VAR_2 && VAR_2 < VAR_0);
 return VAR_4->ee_spurChans[VAR_2][VAR_3];
}
