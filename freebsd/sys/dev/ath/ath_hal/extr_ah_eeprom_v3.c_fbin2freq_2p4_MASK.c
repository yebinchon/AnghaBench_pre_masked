
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ ee_version; } ;
typedef TYPE_1__ HAL_EEPROM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint16_t
FUNC_0(HAL_EEPROM *VAR_2, uint16_t VAR_3)
{
 if (VAR_3 == VAR_1)
  return VAR_3;
 return VAR_2->ee_version <= VAR_0 ?
  2400 + VAR_3 :
  2300 + VAR_3;
}
