
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef scalar_t__ u_char ;



u_int64_t
FUNC_0(const void *VAR_0)
{
 const u_char *VAR_1 = (const u_char *)VAR_0;
 u_int64_t VAR_2;

 VAR_2 = (u_int64_t)VAR_1[0] << 56;
 VAR_2 |= (u_int64_t)VAR_1[1] << 48;
 VAR_2 |= (u_int64_t)VAR_1[2] << 40;
 VAR_2 |= (u_int64_t)VAR_1[3] << 32;
 VAR_2 |= (u_int64_t)VAR_1[4] << 24;
 VAR_2 |= (u_int64_t)VAR_1[5] << 16;
 VAR_2 |= (u_int64_t)VAR_1[6] << 8;
 VAR_2 |= (u_int64_t)VAR_1[7];

 return (VAR_2);
}
