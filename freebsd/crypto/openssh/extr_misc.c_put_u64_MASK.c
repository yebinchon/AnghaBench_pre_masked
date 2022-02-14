
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_char ;



void
FUNC_0(void *VAR_0, u_int64_t VAR_1)
{
 u_char *VAR_2 = (u_char *)VAR_0;

 VAR_2[0] = (u_char)(VAR_1 >> 56) & 0xff;
 VAR_2[1] = (u_char)(VAR_1 >> 48) & 0xff;
 VAR_2[2] = (u_char)(VAR_1 >> 40) & 0xff;
 VAR_2[3] = (u_char)(VAR_1 >> 32) & 0xff;
 VAR_2[4] = (u_char)(VAR_1 >> 24) & 0xff;
 VAR_2[5] = (u_char)(VAR_1 >> 16) & 0xff;
 VAR_2[6] = (u_char)(VAR_1 >> 8) & 0xff;
 VAR_2[7] = (u_char)VAR_1 & 0xff;
}
