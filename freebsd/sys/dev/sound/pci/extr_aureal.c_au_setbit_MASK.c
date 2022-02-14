
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;



__attribute__((used)) static void
FUNC_0(u_int32_t *VAR_0, char VAR_1, u_int32_t VAR_2)
{
 VAR_0 += VAR_1 >> 5;
 VAR_1 &= 0x1f;
 *VAR_0 &= ~ (1 << VAR_1);
 *VAR_0 |= (VAR_2 << VAR_1);
}
