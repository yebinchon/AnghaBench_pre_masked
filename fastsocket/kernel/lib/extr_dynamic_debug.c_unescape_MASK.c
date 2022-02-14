
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 char *VAR_2 = VAR_0;

 while (*VAR_1) {
  if (*VAR_1 == '\\') {
   if (VAR_1[1] == '\\') {
    *VAR_2++ = '\\';
    VAR_1 += 2;
    continue;
   } else if (VAR_1[1] == 't') {
    *VAR_2++ = '\t';
    VAR_1 += 2;
    continue;
   } else if (VAR_1[1] == 'n') {
    *VAR_2++ = '\n';
    VAR_1 += 2;
    continue;
   } else if (FUNC_0(VAR_1[1]) &&
            FUNC_0(VAR_1[2]) &&
            FUNC_0(VAR_1[3])) {
    *VAR_2++ = ((VAR_1[1] - '0')<<6) |
              ((VAR_1[2] - '0')<<3) |
              (VAR_1[3] - '0');
    VAR_1 += 4;
    continue;
   }
  }
  *VAR_2++ = *VAR_1++;
 }
 *VAR_2 = '\0';

 return VAR_0;
}
