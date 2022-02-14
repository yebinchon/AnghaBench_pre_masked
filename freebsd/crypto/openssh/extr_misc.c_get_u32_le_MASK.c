
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_char ;



u_int32_t
FUNC_0(const void *VAR_0)
{
 const u_char *VAR_1 = (const u_char *)VAR_0;
 u_int32_t VAR_2;

 VAR_2 = (u_int32_t)VAR_1[0];
 VAR_2 |= (u_int32_t)VAR_1[1] << 8;
 VAR_2 |= (u_int32_t)VAR_1[2] << 16;
 VAR_2 |= (u_int32_t)VAR_1[3] << 24;

 return (VAR_2);
}
