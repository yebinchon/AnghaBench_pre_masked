
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

char *
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;







 for (VAR_3 = VAR_1; *VAR_0 != 0; VAR_0 += 1) {
  if (*VAR_0 != *VAR_3)
   continue;
  VAR_2 = VAR_0;
  for (;;) {
   if (*VAR_3 == 0)
    return FUNC_0(VAR_0);
   if (*VAR_2++ != *VAR_3++)
    break;
  }
  VAR_3 = VAR_1;
 }
 return ((void*)0);
}
