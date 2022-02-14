
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(const char *VAR_3, namecheck_err_t *VAR_4)
{
 const char *VAR_5, *VAR_6;
 if (VAR_3 == ((void*)0) || *VAR_3 != '/') {
  if (VAR_4)
   *VAR_4 = VAR_0;
  return (-1);
 }


 VAR_5 = &VAR_3[1];
 do {
  VAR_6 = VAR_5;
  while (*VAR_6 != '/' && *VAR_6 != '\0')
   VAR_6++;

  if (VAR_6 - VAR_5 >= VAR_2) {
   if (VAR_4)
    *VAR_4 = VAR_1;
   return (-1);
  }
  VAR_5 = VAR_6 + 1;

 } while (*VAR_6 != '\0');

 return (0);
}
