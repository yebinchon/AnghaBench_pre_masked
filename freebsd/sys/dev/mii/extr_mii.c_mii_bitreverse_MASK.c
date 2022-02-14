
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char
FUNC_0(unsigned char VAR_0)
{
 static unsigned const char VAR_1[16] = {
  0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15
 };

 return ((VAR_1[VAR_0 & 15] << 4) | VAR_1[VAR_0 >> 4]);
}
