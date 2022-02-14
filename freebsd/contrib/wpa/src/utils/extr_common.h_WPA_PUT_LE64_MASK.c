
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static inline void FUNC_0(u8 *VAR_0, u64 VAR_1)
{
 VAR_0[7] = VAR_1 >> 56;
 VAR_0[6] = VAR_1 >> 48;
 VAR_0[5] = VAR_1 >> 40;
 VAR_0[4] = VAR_1 >> 32;
 VAR_0[3] = VAR_1 >> 24;
 VAR_0[2] = VAR_1 >> 16;
 VAR_0[1] = VAR_1 >> 8;
 VAR_0[0] = VAR_1 & 0xff;
}
