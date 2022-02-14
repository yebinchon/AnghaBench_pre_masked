
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(char *VAR_3, u_int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4 <= 0x00001FFF)
  VAR_6 = VAR_4 / 8;
 else if (VAR_4 >= 0xC0000000 && VAR_4 <= 0xC0001FFF)
  VAR_6 = 1024 + (VAR_4 - 0xC0000000) / 8;
 else
  return (VAR_0);

 VAR_7 = VAR_4 & 0x7;

 if (VAR_5 & VAR_1)
  VAR_3[VAR_6] &= ~(1 << VAR_7);
 else
  VAR_3[VAR_6] |= 1 << VAR_7;

 VAR_6 += 2048;
 if (VAR_5 & VAR_2)
  VAR_3[VAR_6] &= ~(1 << VAR_7);
 else
  VAR_3[VAR_6] |= 1 << VAR_7;

 return (0);
}
