
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,unsigned char*,int) ;

void
FUNC_1(unsigned char **VAR_0, unsigned int *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5 = *VAR_0;
 char *VAR_6 = *VAR_0;

 *(u8 *)VAR_5++ = 0x30;
 *(u8 *)VAR_5++ = VAR_3 + 7;


 *(u8 *)VAR_5++ = 0x02;
 *(u8 *)VAR_5++ = 0x02;
 *(u8 *)VAR_5++ = 0x01;
 *(u8 *)VAR_5++ = 0x01;


 *(u8 *)VAR_5++ = 0x03;
 *(u8 *)VAR_5++ = VAR_3 + 1;
 *(u8 *)VAR_5++ = VAR_4;
 FUNC_0(VAR_5, VAR_2, VAR_3);
 VAR_5 += VAR_3;
 *VAR_1 = VAR_5 - VAR_6;
}
