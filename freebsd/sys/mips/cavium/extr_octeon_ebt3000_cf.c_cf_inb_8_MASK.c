
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile uint8_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint8_t FUNC_0(int VAR_3)
{



 if (VAR_2 == VAR_0) {
  volatile uint8_t *VAR_4 = (volatile uint8_t *)VAR_1;
  return VAR_4[VAR_3];
 }




 volatile uint16_t *VAR_5 = (volatile uint16_t *)VAR_1;
 return VAR_5[VAR_3] & 0xff;
}
