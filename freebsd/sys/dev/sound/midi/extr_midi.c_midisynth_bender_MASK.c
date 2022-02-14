
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (void*,int*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, uint8_t VAR_2, uint16_t VAR_3)
{
 u_char VAR_4[3];


 if (VAR_3 > 16383 || VAR_2 > 15)
  return VAR_0;

 VAR_4[0] = 0xe0 | (VAR_2 & 0x0f);
 VAR_4[1] = (u_char)VAR_3 & 0x7f;
 VAR_4[2] = (u_char)(VAR_3 >> 7) & 0x7f;

 return FUNC_0(VAR_1, VAR_4, 3);
}
