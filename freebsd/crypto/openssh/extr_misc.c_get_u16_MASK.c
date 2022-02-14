
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef scalar_t__ u_char ;



u_int16_t
FUNC_0(const void *VAR_0)
{
 const u_char *VAR_1 = (const u_char *)VAR_0;
 u_int16_t VAR_2;

 VAR_2 = (u_int16_t)VAR_1[0] << 8;
 VAR_2 |= (u_int16_t)VAR_1[1];

 return (VAR_2);
}
