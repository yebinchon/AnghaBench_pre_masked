
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t FUNC_1(uint32_t VAR_0)
{
 return ((uint32_t)FUNC_0((uint8_t)(VAR_0))<<24) |
  ((uint32_t)FUNC_0((uint8_t)(VAR_0>>8))<<16) |
  ((uint32_t)FUNC_0((uint8_t)(VAR_0>>16))<<8) |
  ((uint32_t)FUNC_0((uint8_t)(VAR_0>>24)));
}
