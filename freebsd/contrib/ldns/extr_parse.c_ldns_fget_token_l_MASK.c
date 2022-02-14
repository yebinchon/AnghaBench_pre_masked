
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int*) ;

ssize_t
FUNC_2(FILE *VAR_2, char *VAR_3, const char *VAR_4, size_t VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;
 size_t VAR_13;
 const char *VAR_14;
 const char *VAR_15;


 if (!VAR_4) {

  VAR_15 = VAR_1;
 } else {
  VAR_15 = VAR_4;
 }

 VAR_9 = 0;
 VAR_13 = 0;
 VAR_10 = 0;
 VAR_11 = 0;
 VAR_8 = 0;
 VAR_12 = VAR_3;
 if (VAR_15[0] == '"') {
  VAR_11 = 1;
 }
 while ((VAR_7 = FUNC_0(VAR_2)) != VAR_0) {
  if (VAR_7 == '\r')
   VAR_7 = ' ';
  if (VAR_7 == '(' && VAR_8 != '\\' && !VAR_11) {

   if (VAR_10 == 0) {
    VAR_9++;
   }
   VAR_8 = VAR_7;
   continue;
  }

  if (VAR_7 == ')' && VAR_8 != '\\' && !VAR_11) {

   if (VAR_10 == 0) {
    VAR_9--;
   }
   VAR_8 = VAR_7;
   continue;
  }

  if (VAR_9 < 0) {

   *VAR_12 = '\0';
   return 0;
  }


  if (VAR_7 == ';' && VAR_11 == 0) {
   if (VAR_8 != '\\') {
    VAR_10 = 1;
   }
  }
  if (VAR_7 == '\"' && VAR_10 == 0 && VAR_8 != '\\') {
   VAR_11 = 1 - VAR_11;
  }

  if (VAR_7 == '\n' && VAR_10 != 0) {

   VAR_10 = 0;
   *VAR_12 = ' ';
   if (VAR_6) {
    *VAR_6 = *VAR_6 + 1;
   }
   if (VAR_9 == 0 && VAR_13 > 0) {
    goto tokenread;
   } else {
    VAR_8 = VAR_7;
    continue;
   }
  }

  if (VAR_10 == 1) {
   *VAR_12 = ' ';
   VAR_8 = VAR_7;
   continue;
  }

  if (VAR_7 == '\n' && VAR_9 != 0 && VAR_12 > VAR_3) {

   if (VAR_6) {
    *VAR_6 = *VAR_6 + 1;
   }
   *VAR_12++ = ' ';
   VAR_8 = VAR_7;
   continue;
  }


  for (VAR_14 = VAR_15; *VAR_14; VAR_14++) {
   if (VAR_7 == *VAR_14 && VAR_13 > 0 && VAR_8 != '\\' && VAR_9 == 0) {
    if (VAR_7 == '\n' && VAR_6) {
     *VAR_6 = *VAR_6 + 1;
    }
    goto tokenread;
   }
  }
  if (VAR_7 != '\0' && VAR_7 != '\n') {
   VAR_13++;
  }
  if (VAR_5 > 0 && (VAR_13 >= VAR_5 || (size_t)(VAR_12-VAR_3) >= VAR_5)) {
   *VAR_12 = '\0';
   return -1;
  }
  if (VAR_7 != '\0' && VAR_7 != '\n') {
   *VAR_12++ = VAR_7;
  }
  if (VAR_7 == '\\' && VAR_8 == '\\')
   VAR_8 = 0;
  else VAR_8 = VAR_7;
 }
 *VAR_12 = '\0';
 if (VAR_7 == VAR_0) {
  return (ssize_t)VAR_13;
 }

 if (VAR_13 == 0) {

  return -1;
 }
 if (VAR_9 != 0) {
  return -1;
 }
 return (ssize_t)VAR_13;

tokenread:
 if(*VAR_15 == '"')
  FUNC_1(VAR_2, VAR_15+1, VAR_6);
 else FUNC_1(VAR_2, VAR_15, VAR_6);
 *VAR_12 = '\0';
 if (VAR_9 != 0) {
  return -1;
 }

 return (ssize_t)VAR_13;
}
