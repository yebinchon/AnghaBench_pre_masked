
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;

char *
FUNC_1(uint32_t VAR_0)
{
 uint8_t *VAR_1;
 static char VAR_2[8];
 const char VAR_3[] = "0123456789abcdef";

 VAR_0 = FUNC_0(VAR_0);
 VAR_1 = (uint8_t *)&VAR_0;
 VAR_2[0] = '@' + ((VAR_1[0] & 0x7c) >> 2);
 VAR_2[1] = '@' + (((VAR_1[0] & 0x3) << 3) + ((VAR_1[1] & 0xe0) >> 5));
 VAR_2[2] = '@' + (VAR_1[1] & 0x1f);
 VAR_2[3] = VAR_3[(VAR_1[2] >> 4)];
 VAR_2[4] = VAR_3[(VAR_1[2] & 0xf)];
 VAR_2[5] = VAR_3[(VAR_1[3] >> 4)];
 VAR_2[6] = VAR_3[(VAR_1[3] & 0xf)];
 VAR_2[7] = 0;
 return(VAR_2);
}
