
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_10__ {TYPE_4__* ah_eeprom; } ;
struct TYPE_8__ {TYPE_2__* modalHeader; } ;
struct TYPE_9__ {TYPE_3__ ee_base; } ;
struct TYPE_7__ {TYPE_1__* spurChans; } ;
struct TYPE_6__ {int spurChan; } ;
typedef TYPE_4__ HAL_EEPROM_v14 ;
typedef size_t HAL_BOOL ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct ath_hal *VAR_1, int VAR_2, HAL_BOOL VAR_3)
{
 HAL_EEPROM_v14 *VAR_4 = FUNC_0(VAR_1)->ah_eeprom;

 FUNC_1(0 <= VAR_2 && VAR_2 < VAR_0);
 return VAR_4->ee_base.modalHeader[VAR_3].spurChans[VAR_2].spurChan;
}
