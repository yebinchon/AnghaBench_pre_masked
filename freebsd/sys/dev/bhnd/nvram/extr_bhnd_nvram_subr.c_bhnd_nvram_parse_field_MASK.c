
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

size_t
FUNC_1(const char **VAR_0, size_t VAR_1, char VAR_2)
{
 const char *VAR_3, *VAR_4;


 for (VAR_4 = *VAR_0; (size_t)(VAR_4-*VAR_0) < VAR_1 && FUNC_0(*VAR_4); VAR_4++)
  continue;

 *VAR_0 = VAR_4;


 for (VAR_3 = *VAR_0; (size_t)(VAR_3 - *VAR_0) < VAR_1; VAR_3++) {
  if (*VAR_3 == VAR_2 || *VAR_3 == '\0')
   break;
 }

 return (VAR_3 - *VAR_0);
}
