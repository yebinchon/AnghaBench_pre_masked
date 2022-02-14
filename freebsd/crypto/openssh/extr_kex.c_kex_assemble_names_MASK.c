
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char**,char*) ;

int
FUNC_6(char **VAR_3, const char *VAR_4, const char *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13 = VAR_1;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0) || **VAR_3 == '\0') {
  if ((*VAR_3 = FUNC_4(VAR_4)) == ((void*)0))
   return VAR_0;
  return 0;
 }

 VAR_9 = *VAR_3;
 *VAR_3 = ((void*)0);
 if (*VAR_9 == '+') {

  if ((VAR_7 = FUNC_1(VAR_4, VAR_9 + 1)) == ((void*)0)) {
   VAR_13 = VAR_0;
   goto fail;
  }
  FUNC_0(VAR_9);
  VAR_9 = VAR_7;
 } else if (*VAR_9 == '-') {

  if ((*VAR_3 = FUNC_2(VAR_4, VAR_9 + 1)) == ((void*)0)) {
   VAR_13 = VAR_0;
   goto fail;
  }
  FUNC_0(VAR_9);

  return 0;
 } else {

 }






 VAR_10 = ((void*)0);
 if ((VAR_8 = VAR_12 = FUNC_4(VAR_9)) == ((void*)0)) {
  VAR_13 = VAR_0;
  goto fail;
 }

 while ((VAR_6 = FUNC_5(&VAR_8, ",")) != ((void*)0)) {
  if (*VAR_6 == '!') {

   VAR_13 = VAR_2;
   goto fail;
  }
  FUNC_0(VAR_11);
  if ((VAR_11 = FUNC_3(VAR_5, VAR_6)) == ((void*)0)) {
   VAR_13 = VAR_0;
   goto fail;
  }
  if ((VAR_7 = FUNC_1(VAR_10, VAR_11)) == ((void*)0)) {
   VAR_13 = VAR_0;
   goto fail;
  }
  FUNC_0(VAR_10);
  VAR_10 = VAR_7;
 }
 if (VAR_10 == ((void*)0) || *VAR_10 == '\0') {


  VAR_13 = VAR_2;
  goto fail;
 }


 *VAR_3 = VAR_10;
 VAR_10 = ((void*)0);
 VAR_13 = 0;

 fail:
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 return VAR_13;
}
