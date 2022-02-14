
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_2, intmax_t VAR_3, intmax_t VAR_4, intmax_t *VAR_5)
{
 intmax_t VAR_6, VAR_7;

 if (VAR_2[0] == '\0')
  goto invalid;
 VAR_7 = 0;
 for (; *VAR_2 != '\0'; VAR_2++) {
  if (*VAR_2 < '0' || *VAR_2 > '9')
   goto invalid;
  VAR_6 = *VAR_2 - '0';
  if (VAR_7 > VAR_7 * 10 + VAR_6)
   goto invalid;
  VAR_7 = VAR_7 * 10 + VAR_6;
  if (VAR_7 > VAR_4)
   goto invalid;
 }
 if (VAR_7 < VAR_3)
  goto invalid;
 *VAR_5 = VAR_7;
 return (0);
invalid:
 VAR_1 = VAR_0;
 return (-1);
}
