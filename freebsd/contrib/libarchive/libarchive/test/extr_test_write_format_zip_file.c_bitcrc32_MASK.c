
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0, void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_1;
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return (0);

 for (; VAR_2 > 0; --VAR_2) {
  VAR_0 ^= *VAR_3++;
  for (VAR_4 = 8; VAR_4 > 0; --VAR_4) {
   if (VAR_0 & 1) VAR_0 = (VAR_0 >> 1);
   else VAR_0 = (VAR_0 >> 1) ^ 0xedb88320;
   VAR_0 ^= 0x80000000;
  }
 }
 return (VAR_0);
}
