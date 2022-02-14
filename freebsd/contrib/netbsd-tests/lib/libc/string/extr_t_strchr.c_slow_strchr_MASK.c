
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, int VAR_1)
{
 unsigned char VAR_2 = 1;

 VAR_1 &= 0xff;

 for (; VAR_2 != 0; VAR_0++) {
  VAR_2 = *VAR_0;
  if (VAR_2 == VAR_1)
   return VAR_0;
 }
 return 0;
}
