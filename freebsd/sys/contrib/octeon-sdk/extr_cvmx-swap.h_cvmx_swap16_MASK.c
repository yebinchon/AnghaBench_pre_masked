
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ x ;
typedef int uint16_t ;



__attribute__((used)) static inline uint16_t FUNC_0(uint16_t VAR_0)
{
    return ((uint16_t)((((uint16_t)(VAR_0) & (uint16_t)0x00ffU) << 8) |
                       (((uint16_t)(VAR_0) & (uint16_t)0xff00U) >> 8) ));
}
