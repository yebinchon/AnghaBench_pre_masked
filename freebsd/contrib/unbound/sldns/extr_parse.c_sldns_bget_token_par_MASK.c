
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sldns_buffer ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,int) ;

ssize_t
FUNC_3(sldns_buffer *VAR_2, char *VAR_3, const char *VAR_4,
 size_t VAR_5, int* VAR_6, const char* VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;
 size_t VAR_14;
 const char *VAR_15;
 const char *VAR_16;


 if (!VAR_4) {

  VAR_16 = VAR_1;
 } else {
  VAR_16 = VAR_4;
 }

 VAR_10 = (VAR_6?*VAR_6:0);
 VAR_14 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = VAR_3;
 VAR_9 = 0;
 if (VAR_16[0] == '"') {
  VAR_12 = 1;
 }

 while ((VAR_8 = FUNC_0(VAR_2)) != VAR_0) {
  if (VAR_8 == '\r')
   VAR_8 = ' ';
  if (VAR_8 == '(' && VAR_9 != '\\' && !VAR_12) {

   if (VAR_11 == 0) {
    if(VAR_6) (*VAR_6)++;
    VAR_10++;
   }
   VAR_9 = VAR_8;
   continue;
  }

  if (VAR_8 == ')' && VAR_9 != '\\' && !VAR_12) {

   if (VAR_11 == 0) {
    if(VAR_6) (*VAR_6)--;
    VAR_10--;
   }
   VAR_9 = VAR_8;
   continue;
  }

  if (VAR_10 < 0) {

   *VAR_13 = '\0';
   return 0;
  }


  if (VAR_8 == ';' && VAR_12 == 0) {
   if (VAR_9 != '\\') {
    VAR_11 = 1;
   }
  }
  if (VAR_8 == '"' && VAR_11 == 0 && VAR_9 != '\\') {
   VAR_12 = 1 - VAR_12;
  }

  if (VAR_8 == '\n' && VAR_11 != 0) {

   VAR_11 = 0;
   *VAR_13 = ' ';
   VAR_9 = VAR_8;
   continue;
  }

  if (VAR_11 == 1) {
   *VAR_13 = ' ';
   VAR_9 = VAR_8;
   continue;
  }

  if (VAR_8 == '\n' && VAR_10 != 0) {


   if(!(VAR_7 && (FUNC_2(VAR_7, VAR_8)||FUNC_2(VAR_7, ' '))))
    *VAR_13++ = ' ';
   VAR_9 = VAR_8;
   continue;
  }


  if(VAR_7 && VAR_14==0 && !VAR_11 && !VAR_12 && VAR_9 != '\\') {
   if(FUNC_2(VAR_7, VAR_8)) {
    VAR_9 = VAR_8;
    continue;
   }
  }


  for (VAR_15 = VAR_16; *VAR_15; VAR_15++) {

                        if (VAR_8 == *VAR_15 && VAR_9 != '\\' && (VAR_10 == 0 || VAR_6)) {
    goto tokenread;
                        }
  }

  VAR_14++;
  if (VAR_5 > 0 && (VAR_14 >= VAR_5 || (size_t)(VAR_13-VAR_3) >= VAR_5)) {
   *VAR_13 = '\0';
   return -1;
  }
  *VAR_13++ = VAR_8;

  if (VAR_8 == '\\' && VAR_9 == '\\') {
   VAR_9 = 0;
  } else {
   VAR_9 = VAR_8;
  }
 }
 *VAR_13 = '\0';
 if (VAR_14 == 0) {

  return -1;
 }
 if (!VAR_6 && VAR_10 != 0) {
  return -1;
 }
 return (ssize_t)VAR_14;

tokenread:
 if(*VAR_16 == '"')


  FUNC_1(VAR_2, VAR_16+1);
 else FUNC_1(VAR_2, VAR_16);
 *VAR_13 = '\0';

 if (!VAR_6 && VAR_10 != 0) {
  return -1;
 }
 return (ssize_t)VAR_14;
}
