
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

int
FUNC_0(const char *VAR_1, const char *VAR_2)
{
 register const unsigned char *VAR_3 = VAR_0,
   *VAR_4 = (const unsigned char *)VAR_1,
   *VAR_5 = (const unsigned char *)VAR_2;

 while (VAR_3[*VAR_4] == VAR_3[*VAR_5++])
  if (*VAR_4++ == '\0')
   return(0);
 return(VAR_3[*VAR_4] - VAR_3[*--VAR_5]);
}
