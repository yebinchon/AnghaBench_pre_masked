
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;



void
FUNC_0(void *VAR_0, u_int32_t VAR_1)
{
 u_char *VAR_2 = (u_char *)VAR_0;

 VAR_2[0] = (u_char)(VAR_1 >> 24) & 0xff;
 VAR_2[1] = (u_char)(VAR_1 >> 16) & 0xff;
 VAR_2[2] = (u_char)(VAR_1 >> 8) & 0xff;
 VAR_2[3] = (u_char)VAR_1 & 0xff;
}
