
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 for (;;) {

  if (!*VAR_1)
   return !*VAR_0;

  if (*VAR_1 == '*') {

   VAR_1++;


   if (!*VAR_1)
    return 1;


   if (*VAR_1 != '?' && *VAR_1 != '*') {





    for (; *VAR_0; VAR_0++)
     if (*VAR_0 == *VAR_1 &&
         FUNC_0(VAR_0 + 1, VAR_1 + 1))
      return 1;

    return 0;
   }




   for (; *VAR_0; VAR_0++)
    if (FUNC_0(VAR_0, VAR_1))
     return 1;

   return 0;
  }




  if (!*VAR_0)
   return 0;


  if (*VAR_1 != '?' && *VAR_1 != *VAR_0)
   return 0;


  VAR_0++;
  VAR_1++;
 }

}
