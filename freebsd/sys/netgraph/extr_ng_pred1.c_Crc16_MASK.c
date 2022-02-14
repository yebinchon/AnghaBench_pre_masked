
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;


 int* VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(uint16_t VAR_1, u_char *VAR_2, int VAR_3)
{
 while (VAR_3--)
  VAR_1 = (VAR_1 >> 8) ^ VAR_0[(VAR_1 ^ *VAR_2++) & 0xff];
 return (VAR_1);
}
