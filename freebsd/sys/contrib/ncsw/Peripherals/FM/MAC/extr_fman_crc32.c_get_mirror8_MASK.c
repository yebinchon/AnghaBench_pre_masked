
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline uint8_t FUNC_0(uint8_t VAR_0)
{
 uint8_t VAR_1[16] = {
  0x00, 0x08, 0x04, 0x0c, 0x02, 0x0a, 0x06, 0x0e,
  0x01, 0x09, 0x05, 0x0d, 0x03, 0x0b, 0x07, 0x0f
 };
 return (uint8_t)(((VAR_1[VAR_0 & 0x0f] << 4) | (VAR_1[VAR_0 >> 4])));
}
