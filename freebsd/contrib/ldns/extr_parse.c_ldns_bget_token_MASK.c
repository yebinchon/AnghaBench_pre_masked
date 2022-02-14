
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int ldns_buffer ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;

ssize_t
FUNC_2(ldns_buffer *VAR_2, char *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11;
 size_t VAR_12;
 const char *VAR_13;
 const char *VAR_14;


 if (!VAR_4) {

  VAR_14 = VAR_1;
 } else {
  VAR_14 = VAR_4;
 }

 VAR_8 = 0;
 VAR_12 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_11 = VAR_3;
 VAR_7 = 0;
 if (VAR_14[0] == '"') {
  VAR_10 = 1;
 }

 while ((VAR_6 = FUNC_0(VAR_2)) != VAR_0) {
  if (VAR_6 == '\r')
   VAR_6 = ' ';
  if (VAR_6 == '(' && VAR_7 != '\\' && !VAR_10) {

   if (VAR_9 == 0) {
    VAR_8++;
   }
   VAR_7 = VAR_6;
   continue;
  }

  if (VAR_6 == ')' && VAR_7 != '\\' && !VAR_10) {

   if (VAR_9 == 0) {
    VAR_8--;
   }
   VAR_7 = VAR_6;
   continue;
  }

  if (VAR_8 < 0) {

   *VAR_11 = '\0';
   return 0;
  }


  if (VAR_6 == ';' && VAR_10 == 0) {
   if (VAR_7 != '\\') {
    VAR_9 = 1;
   }
  }
  if (VAR_6 == '"' && VAR_9 == 0 && VAR_7 != '\\') {
   VAR_10 = 1 - VAR_10;
  }

  if (VAR_6 == '\n' && VAR_9 != 0) {

   VAR_9 = 0;
   *VAR_11 = ' ';
   VAR_7 = VAR_6;
   continue;
  }

  if (VAR_9 == 1) {
   *VAR_11 = ' ';
   VAR_7 = VAR_6;
   continue;
  }

  if (VAR_6 == '\n' && VAR_8 != 0) {

   *VAR_11++ = ' ';
   VAR_7 = VAR_6;
   continue;
  }


  for (VAR_13 = VAR_14; *VAR_13; VAR_13++) {
                        if (VAR_6 == *VAR_13 && VAR_7 != '\\' && VAR_8 == 0) {
    goto tokenread;
                        }
  }

  VAR_12++;
  if (VAR_5 > 0 && (VAR_12 >= VAR_5 || (size_t)(VAR_11-VAR_3) >= VAR_5)) {
   *VAR_11 = '\0';
   return -1;
  }
  *VAR_11++ = VAR_6;

  if (VAR_6 == '\\' && VAR_7 == '\\') {
   VAR_7 = 0;
  } else {
   VAR_7 = VAR_6;
  }
 }
 *VAR_11 = '\0';
 if (VAR_12 == 0) {

  return -1;
 }
 if (VAR_8 != 0) {
  return -1;
 }
 return (ssize_t)VAR_12;

tokenread:
 if(*VAR_14 == '"')
  FUNC_1(VAR_2, VAR_14+1);
 else FUNC_1(VAR_2, VAR_14);
 *VAR_11 = '\0';

 if (VAR_8 != 0) {
  return -1;
 }
 return (ssize_t)VAR_12;
}
