
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;

int
FUNC_2(const char *VAR_9, namecheck_err_t *VAR_10, char *VAR_11)
{
 const char *VAR_12;




 if (FUNC_0(VAR_9) >= VAR_8) {
  if (VAR_10)
   *VAR_10 = VAR_6;
  return (-1);
 }


 if (VAR_9[0] == '/') {
  if (VAR_10)
   *VAR_10 = VAR_4;
  return (-1);
 }

 if (VAR_9[0] == '\0') {
  if (VAR_10)
   *VAR_10 = VAR_2;
  return (-1);
 }

 const char *VAR_13 = VAR_9;
 boolean_t VAR_14 = VAR_0;
 for (;;) {

  VAR_12 = VAR_13;
  while (*VAR_12 != '/' && *VAR_12 != '@' && *VAR_12 != '#' &&
      *VAR_12 != '\0')
   VAR_12++;

  if (*VAR_12 == '\0' && VAR_12[-1] == '/') {

   if (VAR_10)
    *VAR_10 = VAR_7;
   return (-1);
  }


  for (const char *VAR_15 = VAR_13; VAR_15 != VAR_12; VAR_15++) {
   if (!FUNC_1(*VAR_15) && *VAR_15 != '%') {
    if (VAR_10) {
     *VAR_10 = VAR_3;
     *VAR_11 = *VAR_15;
    }
    return (-1);
   }
  }


  if (*VAR_12 == '@' || *VAR_12 == '#') {

   if (VAR_14 != 0) {
    if (VAR_10)
     *VAR_10 = VAR_5;
    return (-1);
   }

   VAR_14 = VAR_1;
  }


  if (VAR_13 == VAR_12) {
   if (VAR_10)
    *VAR_10 = VAR_2;
   return (-1);
  }


  if (*VAR_12 == '\0')
   return (0);





  if (*VAR_12 == '/' && VAR_14 != 0) {
   if (VAR_10)
    *VAR_10 = VAR_7;
   return (-1);
  }


  VAR_13 = VAR_12 + 1;
 }
}
