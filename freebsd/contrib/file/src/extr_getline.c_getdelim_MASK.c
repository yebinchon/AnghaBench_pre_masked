
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;

ssize_t
FUNC_4(char **VAR_1, size_t *VAR_2, int VAR_3, FILE *VAR_4)
{
 char *VAR_5, *VAR_6;


 if (*VAR_1 == ((void*)0) || *VAR_2 == 0) {
  *VAR_2 = VAR_0;
  if ((*VAR_1 = FUNC_2(*VAR_2)) == ((void*)0))
   return -1;
 }

 for (VAR_5 = *VAR_1, VAR_6 = *VAR_1 + *VAR_2;;) {
  int VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 == -1) {
   if (FUNC_0(VAR_4)) {
    ssize_t VAR_8 = (ssize_t)(VAR_5 - *VAR_1);
    if (VAR_8 != 0) {
     *VAR_5 = '\0';
     return VAR_8;
    }
   }
   return -1;
  }
  *VAR_5++ = VAR_7;
  if (VAR_7 == VAR_3) {
   *VAR_5 = '\0';
   return VAR_5 - *VAR_1;
  }
  if (VAR_5 + 2 >= VAR_6) {
   char *VAR_9;
   size_t VAR_10 = *VAR_2 * 2;
   ssize_t VAR_11 = VAR_5 - *VAR_1;
   if ((VAR_9 = FUNC_3(*VAR_1, VAR_10)) == ((void*)0))
    return -1;
   *VAR_1 = VAR_9;
   *VAR_2 = VAR_10;
   VAR_6 = VAR_9 + VAR_10;
   VAR_5 = VAR_9 + VAR_11;
  }
 }
}
