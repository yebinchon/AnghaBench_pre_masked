
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0)
{
 char VAR_1[3];
 char *VAR_2;
 int VAR_3;

 VAR_1[2] = '\0';

 VAR_2 = VAR_0;
 for ( ; '\0' != *VAR_0; VAR_0++, VAR_2++) {
  if ('%' == *VAR_0) {
   if ('\0' == (VAR_1[0] = *(VAR_0 + 1)))
    return 0;
   if ('\0' == (VAR_1[1] = *(VAR_0 + 2)))
    return 0;
   if (1 != FUNC_0(VAR_1, "%x", &VAR_3))
    return 0;
   if ('\0' == VAR_3)
    return 0;

   *VAR_2 = (char)VAR_3;
   VAR_0 += 2;
  } else
   *VAR_2 = '+' == *VAR_0 ? ' ' : *VAR_0;
 }

 *VAR_2 = '\0';
 return 1;
}
