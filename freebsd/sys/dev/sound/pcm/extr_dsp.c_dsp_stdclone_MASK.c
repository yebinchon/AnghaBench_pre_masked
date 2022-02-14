
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6, int *VAR_7, int *VAR_8)
{
 size_t VAR_9;

 VAR_9 = FUNC_2(VAR_4);

 if (FUNC_0(VAR_3, VAR_4, VAR_9) != 0)
  return (VAR_0);

 VAR_3 += VAR_9;

 if (FUNC_1(*VAR_3) == 0)
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_5);

 if (*VAR_3 == '0' && !(VAR_3[1] == '\0' || FUNC_0(VAR_3 + 1, VAR_5, VAR_9) == 0))
  return (VAR_0);

 for (*VAR_7 = 0; FUNC_1(*VAR_3) != 0; VAR_3++) {
  *VAR_7 *= 10;
  *VAR_7 += *VAR_3 - '0';
  if (*VAR_7 > VAR_2)
   return (VAR_0);
 }

 if (*VAR_3 == '\0')
  return ((VAR_6 == 0) ? 0 : VAR_0);

 if (FUNC_0(VAR_3, VAR_5, VAR_9) != 0 || FUNC_1(VAR_3[VAR_9]) == 0)
  return (VAR_0);

 VAR_3 += VAR_9;

 if (*VAR_3 == '0' && VAR_3[1] != '\0')
  return (VAR_0);

 for (*VAR_8 = 0; FUNC_1(*VAR_3) != 0; VAR_3++) {
  *VAR_8 *= 10;
  *VAR_8 += *VAR_3 - '0';
  if (*VAR_8 > VAR_1)
   return (VAR_0);
 }

 if (*VAR_3 != '\0')
  return (VAR_0);

 return (0);
}
