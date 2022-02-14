
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 char VAR_2;

 for (;;) {





  if (*VAR_1 == 0)
   return(!*VAR_0);
  if (*VAR_0 == 0 && *VAR_1 != '*')
   return(0);






  if (*VAR_1 == '*') {
   VAR_1 += 1;
   if (*VAR_1 == 0)
    return(1);
   while (*VAR_0 != 0) {
    if (FUNC_0(VAR_0, VAR_1))
     return(1);
    ++VAR_0;
   }
   return(0);
  }




  if (*VAR_1 == '?')
   goto thisCharOK;





  if (*VAR_1 == '[') {
   int VAR_3;

   ++VAR_1;
   if (*VAR_1 == '^') {
    ++VAR_1;
    VAR_3 = 1;
   } else
    VAR_3 = 0;
   for (;;) {
    if ((*VAR_1 == ']') || (*VAR_1 == 0)) {
     if (VAR_3)
      break;
     return(0);
    }
    if (*VAR_1 == *VAR_0)
     break;
    if (VAR_1[1] == '-') {
     VAR_2 = VAR_1[2];
     if (VAR_2 == 0)
      return(VAR_3);
     if ((*VAR_1 <= *VAR_0) &&
         (VAR_2 >= *VAR_0))
      break;
     if ((*VAR_1 >= *VAR_0) &&
         (VAR_2 <= *VAR_0))
      break;
     VAR_1 += 2;
    }
    ++VAR_1;
   }
   if (VAR_3 && (*VAR_1 != ']') && (*VAR_1 != 0))
    return 0;
   while ((*VAR_1 != ']') && (*VAR_1 != 0))
    ++VAR_1;
   goto thisCharOK;
  }




  if (*VAR_1 == '\\') {
   ++VAR_1;
   if (*VAR_1 == 0)
    return(0);
  }




  if (*VAR_1 != *VAR_0)
   return(0);
thisCharOK: ++VAR_1;
  ++VAR_0;
 }
}
