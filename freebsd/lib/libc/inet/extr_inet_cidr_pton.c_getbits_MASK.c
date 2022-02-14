
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int VAR_2) {
 int VAR_3 = 0;
 char *VAR_4, VAR_5;

 if (*VAR_1 == '\0')
  return (-2);
 do {
  VAR_5 = *VAR_1++;
  VAR_4 = FUNC_0(VAR_0, VAR_5);
  if (VAR_4 == ((void*)0))
   return (-2);
  VAR_3 *= 10;
  VAR_3 += VAR_4 - VAR_0;
  if (VAR_3 == 0 && *VAR_1 != '\0')
   return (-2);
  if (VAR_3 > (VAR_2 ? 128 : 32))
   return (-2);
 } while (*VAR_1 != '\0');

 return (VAR_3);
}
