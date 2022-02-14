
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
struct TYPE_7__ {TYPE_1__* spurChans; } ;
struct TYPE_8__ {TYPE_2__ modalHeader; } ;
struct TYPE_9__ {TYPE_3__ ee_base; } ;
struct TYPE_6__ {int spurChan; } ;
typedef TYPE_4__ HAL_EEPROM_9287 ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct ath_hal *VAR_2, int VAR_3, HAL_BOOL VAR_4)
{
 HAL_EEPROM_9287 *VAR_5 = FUNC_0(VAR_2)->ah_eeprom;

 FUNC_1(VAR_4 == VAR_0);
 if (VAR_4 != VAR_0)
  return 0;

 FUNC_1(0 <= VAR_3 && VAR_3 < VAR_1);
 return VAR_5->ee_base.modalHeader.spurChans[VAR_3].spurChan;
}
