
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

__attribute__((used)) static void
FUNC_0(HAL_EEPROM *VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, uint16_t *VAR_5)
{
 static const uint16_t VAR_6[] =
  { 0, 5, 10, 20, 30, 50, 70, 85, 90, 95, 100 };
 static const uint16_t VAR_7[] =
  { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
 const uint16_t *VAR_8 = VAR_2->ee_version < VAR_0 ?
  VAR_6 : VAR_7;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++ )
  *VAR_5++ = (VAR_8[VAR_9] * VAR_4 + (100 - VAR_8[VAR_9]) * VAR_3) / 100;
}
