
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0(int VAR_1)
{
 volatile uint16_t *VAR_2 = (volatile uint16_t *)VAR_0;
 uint16_t VAR_3 = VAR_2[VAR_1 / 2];
 if (VAR_1 & 1)
  return (VAR_3 >> 8) & 0xff;
 return VAR_3 & 0xff;
}
