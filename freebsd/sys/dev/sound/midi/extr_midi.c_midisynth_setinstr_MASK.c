
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, uint8_t VAR_3, uint16_t VAR_4)
{
 u_char VAR_5[2];

 if (VAR_4 > 127 || VAR_3 > 15)
  return VAR_0;

 VAR_5[0] = 0xc0 | (VAR_3 & 0x0f);
 VAR_5[1] = VAR_4 + VAR_1;

 return FUNC_0(VAR_2, VAR_5, 2);
}
