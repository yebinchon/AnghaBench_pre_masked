
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; scalar_t__ clock; scalar_t__ chip; size_t hz; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(uint16_t VAR_2, uint16_t VAR_3, uint8_t VAR_4,
    uint16_t VAR_5, uint32_t VAR_6)
{
 uint8_t VAR_7;




 for (VAR_7 = 0; VAR_7 != VAR_0; VAR_7++) {
  if ((VAR_1[VAR_7].hdisplay == VAR_2) &&
      (VAR_1[VAR_7].vdisplay == VAR_3) &&
      (VAR_1[VAR_7].clock == VAR_6) &&
      (VAR_1[VAR_7].chip <= VAR_5)) {
   return (VAR_7);
  }
 }




 for (VAR_7 = 0; VAR_7 != VAR_0; VAR_7++) {
  if ((VAR_1[VAR_7].hdisplay == VAR_2) &&
      (VAR_1[VAR_7].vdisplay == VAR_3) &&
      (VAR_1[VAR_7].hz == VAR_4) &&
      (VAR_1[VAR_7].chip <= VAR_5)) {
   return (VAR_7);
  }
 }
 return (VAR_7);
}
