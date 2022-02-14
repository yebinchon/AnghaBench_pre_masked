
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0[][256], uint32_t VAR_1)
{

 return (VAR_0[0][VAR_1 & 0xff] ^ VAR_0[1][(VAR_1 >> 8) & 0xff] ^
     VAR_0[2][(VAR_1 >> 16) & 0xff] ^ VAR_0[3][VAR_1 >> 24]);
}
