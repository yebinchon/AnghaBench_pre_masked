
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 while (*VAR_0) {
  unsigned char VAR_1 = *VAR_0++;

  if (VAR_1 < 0x20 || VAR_1 > 0x7e || VAR_1 == 0x3b)
   return 0;
 }

 return 1;
}
