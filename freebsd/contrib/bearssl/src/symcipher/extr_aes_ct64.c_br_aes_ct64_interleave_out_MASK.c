
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



void
FUNC_0(uint32_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_1 & (uint64_t)0x00FF00FF00FF00FF;
 VAR_4 = VAR_2 & (uint64_t)0x00FF00FF00FF00FF;
 VAR_5 = (VAR_1 >> 8) & (uint64_t)0x00FF00FF00FF00FF;
 VAR_6 = (VAR_2 >> 8) & (uint64_t)0x00FF00FF00FF00FF;
 VAR_3 |= (VAR_3 >> 8);
 VAR_4 |= (VAR_4 >> 8);
 VAR_5 |= (VAR_5 >> 8);
 VAR_6 |= (VAR_6 >> 8);
 VAR_3 &= (uint64_t)0x0000FFFF0000FFFF;
 VAR_4 &= (uint64_t)0x0000FFFF0000FFFF;
 VAR_5 &= (uint64_t)0x0000FFFF0000FFFF;
 VAR_6 &= (uint64_t)0x0000FFFF0000FFFF;
 VAR_0[0] = (uint32_t)VAR_3 | (uint32_t)(VAR_3 >> 16);
 VAR_0[1] = (uint32_t)VAR_4 | (uint32_t)(VAR_4 >> 16);
 VAR_0[2] = (uint32_t)VAR_5 | (uint32_t)(VAR_5 >> 16);
 VAR_0[3] = (uint32_t)VAR_6 | (uint32_t)(VAR_6 >> 16);
}
