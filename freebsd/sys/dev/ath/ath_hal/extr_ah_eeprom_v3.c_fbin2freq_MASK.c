
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ ee_version; } ;
typedef TYPE_1__ HAL_EEPROM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint16_t
FUNC_0(HAL_EEPROM *VAR_2, uint16_t VAR_3)
{
 if (VAR_3 == VAR_1)
  return VAR_3;
 return VAR_2->ee_version <= VAR_0 ?
  (VAR_3 > 62 ? 5100 + 10*62 + 5*(VAR_3-62) : 5100 + 10*VAR_3) :
  4800 + 5*VAR_3;
}
