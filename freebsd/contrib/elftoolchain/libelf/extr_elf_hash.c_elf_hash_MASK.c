
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(const char *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 const unsigned char *VAR_3;

 VAR_3 = (const unsigned char *) VAR_0;
 VAR_1 = VAR_2 = 0;

 for (; *VAR_3 != '\0'; VAR_1 = VAR_1 & ~VAR_2) {
  VAR_1 = (VAR_1 << 4) + *VAR_3++;
  VAR_2 = VAR_1 & 0xF0000000UL;
  if (VAR_2)
   VAR_1 ^= VAR_2 >> 24;
 }

 return (VAR_1);
}
