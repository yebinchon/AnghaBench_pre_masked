
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;
typedef int u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, u64 *VAR_1, u64 VAR_2)
{
    uint128_t VAR_3 = *VAR_0;
    VAR_3 -= VAR_2;
    *VAR_1 = (VAR_3 >> 64) & 1;
    *VAR_0 = (u64)VAR_3;
}
