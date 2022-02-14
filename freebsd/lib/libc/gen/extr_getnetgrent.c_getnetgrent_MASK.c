
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,char*,int ,char**,char**,char**,char*,size_t,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;

int
FUNC_4(char **VAR_8, char **VAR_9, char **VAR_10)
{
 static char *VAR_11;
 static size_t VAR_12;
 int VAR_13, VAR_14;

 if (VAR_11 == ((void*)0)) {
  VAR_12 = VAR_1;
  VAR_11 = FUNC_2(VAR_12);
  if (VAR_11 == ((void*)0))
   return (0);
 }

 do {
  VAR_13 = 0;
  VAR_14 = FUNC_0(((void*)0), VAR_7, VAR_3,
      "getnetgrent_r", VAR_5, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12, &VAR_13);
  if (VAR_14 != VAR_4 && VAR_13 == VAR_0) {
   VAR_12 *= 2;
   if (VAR_12 > VAR_2) {
    FUNC_1(VAR_11);
    VAR_11 = ((void*)0);
    VAR_6 = VAR_0;
    return (0);
   }
   VAR_11 = FUNC_3(VAR_11,
       VAR_12);
   if (VAR_11 == ((void*)0))
    return (0);
  }
 } while (VAR_14 != VAR_4 && VAR_13 == VAR_0);

 if (VAR_14 == VAR_4) {
  return (1);
 } else {
  VAR_6 = VAR_13;
  return (0);
 }
}
