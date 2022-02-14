
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3, int VAR_4)
{
 unsigned char *VAR_5 = VAR_0;
 unsigned char *VAR_6 = VAR_1;
 unsigned char *VAR_7 = VAR_5 + VAR_2;
 unsigned char *VAR_8 = VAR_6 + VAR_3;

 while (VAR_5 < VAR_7 && VAR_6 < VAR_8) {
  int VAR_9 = 1 + *VAR_5++;
  if (VAR_9 <= VAR_4) {
   while (VAR_9-- != 0)
    *VAR_6++ = *VAR_5++;
  } else {
   VAR_9 -= VAR_4;
   while (VAR_9-- != 0)
    *VAR_6++ = 0;
  }
 }
 return (VAR_6 == VAR_8 ? 0 : -1);
}
