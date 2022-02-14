
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{

 VAR_0 &= ~(((1 << VAR_3) - 1) << VAR_2);
 VAR_0 |= (VAR_1 & ((1 << VAR_3) - 1)) << VAR_2;
 return (VAR_0);
}
