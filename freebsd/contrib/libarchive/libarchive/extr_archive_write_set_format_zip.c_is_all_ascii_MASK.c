
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
 const unsigned char *VAR_1 = (const unsigned char *)VAR_0;

 while (*VAR_1) {
  if (*VAR_1++ > 127)
   return (0);
 }
 return (1);
}
