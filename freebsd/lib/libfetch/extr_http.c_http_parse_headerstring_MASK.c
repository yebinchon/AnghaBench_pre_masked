
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char *VAR_0, char *VAR_1)
{
 for (;;) {
  switch (*VAR_0) {
  case 0:
   *VAR_1 = 0;
   return (((void*)0));
  case '"':
   *VAR_1 = 0;
   return (++VAR_0);
  case '\\':
   if (*++VAR_0 == 0) {
    *VAR_1 = 0;
    return (((void*)0));
   }

  default:
   *VAR_1++ = *VAR_0++;
  }
 }
}
