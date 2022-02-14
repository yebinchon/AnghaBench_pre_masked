
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_0(char *VAR_1, size_t VAR_2,
       const char *VAR_3, const char *VAR_4)
{
 char *VAR_5 = VAR_1 + VAR_2-1;
 const char *VAR_6;
 char *VAR_7 = VAR_0;

 while (*VAR_7 && (VAR_1 < VAR_5)) {
  if (*VAR_7 != '%') {
   *VAR_1++ = *VAR_7++;
  } else {
   VAR_7++;
   switch (*VAR_7) {
   case 'h':
    VAR_6 = VAR_4;
    while (*VAR_6 && (*VAR_6 != '.') && (VAR_1 < VAR_5))
     *VAR_1++ = *VAR_6++;
    break;
   case 'd':
    VAR_6 = VAR_3;
    while (*VAR_6 && (VAR_1 < VAR_5))
     *VAR_1++ = *VAR_6++;
    break;
   }
   VAR_7++;
  }
 }
 *VAR_1 = 0;
}
