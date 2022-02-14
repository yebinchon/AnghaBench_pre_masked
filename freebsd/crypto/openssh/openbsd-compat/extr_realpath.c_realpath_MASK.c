
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symlink ;
struct stat {int st_mode; } ;
typedef int ptrdiff_t ;
typedef int next_token ;
typedef int left ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*,char*,int) ;
 size_t FUNC_11 (char*,char const*,int) ;
 size_t FUNC_12 (char*) ;
 char* FUNC_13 (char*,char) ;

char *
FUNC_14(const char *VAR_6, char *VAR_7)
{
 struct stat VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;
 unsigned VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char VAR_18[VAR_3], VAR_19[VAR_3], VAR_20[VAR_3];

 if (VAR_6[0] == '\0') {
  VAR_5 = VAR_2;
  return (((void*)0));
 }

 VAR_15 = VAR_5;

 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_4(VAR_3);
  if (VAR_7 == ((void*)0))
   return (((void*)0));
  VAR_17 = 1;
 } else
  VAR_17 = 0;

 VAR_14 = 0;
 if (VAR_6[0] == '/') {
  VAR_7[0] = '/';
  VAR_7[1] = '\0';
  if (VAR_6[1] == '\0')
   return (VAR_7);
  VAR_13 = 1;
  VAR_12 = FUNC_11(VAR_18, VAR_6 + 1, sizeof(VAR_18));
 } else {
  if (FUNC_2(VAR_7, VAR_3) == ((void*)0)) {
   if (VAR_17)
    FUNC_1(VAR_7);
   else
    FUNC_11(VAR_7, ".", VAR_3);
   return (((void*)0));
  }
  VAR_13 = FUNC_12(VAR_7);
  VAR_12 = FUNC_11(VAR_18, VAR_6, sizeof(VAR_18));
 }
 if (VAR_12 >= sizeof(VAR_18) || VAR_13 >= VAR_3) {
  VAR_5 = VAR_1;
  goto err;
 }




 while (VAR_12 != 0) {




  VAR_9 = FUNC_8(VAR_18, '/');
  VAR_11 = VAR_9 ? VAR_9 : VAR_18 + VAR_12;
  if (VAR_11 - VAR_18 >= (ptrdiff_t)sizeof(VAR_19)) {
   VAR_5 = VAR_1;
   goto err;
  }
  FUNC_5(VAR_19, VAR_18, VAR_11 - VAR_18);
  VAR_19[VAR_11 - VAR_18] = '\0';
  VAR_12 -= VAR_11 - VAR_18;
  if (VAR_9 != ((void*)0))
   FUNC_6(VAR_18, VAR_11 + 1, VAR_12 + 1);
  if (VAR_7[VAR_13 - 1] != '/') {
   if (VAR_13 + 1 >= VAR_3) {
    VAR_5 = VAR_1;
    goto err;
   }
   VAR_7[VAR_13++] = '/';
   VAR_7[VAR_13] = '\0';
  }
  if (VAR_19[0] == '\0')
   continue;
  else if (FUNC_9(VAR_19, ".") == 0)
   continue;
  else if (FUNC_9(VAR_19, "..") == 0) {




   if (VAR_13 > 1) {
    VAR_7[VAR_13 - 1] = '\0';
    VAR_10 = FUNC_13(VAR_7, '/') + 1;
    *VAR_10 = '\0';
    VAR_13 = VAR_10 - VAR_7;
   }
   continue;
  }






  VAR_13 = FUNC_10(VAR_7, VAR_19, VAR_3);
  if (VAR_13 >= VAR_3) {
   VAR_5 = VAR_1;
   goto err;
  }
  if (FUNC_3(VAR_7, &VAR_8) != 0) {
   if (VAR_5 == VAR_2 && VAR_9 == ((void*)0)) {
    VAR_5 = VAR_15;
    return (VAR_7);
   }
   goto err;
  }
  if (FUNC_0(VAR_8.st_mode)) {
   if (VAR_14++ > VAR_4) {
    VAR_5 = VAR_0;
    goto err;
   }
   VAR_16 = FUNC_7(VAR_7, VAR_20, sizeof(VAR_20) - 1);
   if (VAR_16 < 0)
    goto err;
   VAR_20[VAR_16] = '\0';
   if (VAR_20[0] == '/') {
    VAR_7[1] = 0;
    VAR_13 = 1;
   } else if (VAR_13 > 1) {

    VAR_7[VAR_13 - 1] = '\0';
    VAR_10 = FUNC_13(VAR_7, '/') + 1;
    *VAR_10 = '\0';
    VAR_13 = VAR_10 - VAR_7;
   }






   if (VAR_9 != ((void*)0)) {
    if (VAR_20[VAR_16 - 1] != '/') {
     if (VAR_16 + 1 >=
         (ptrdiff_t)sizeof(VAR_20)) {
      VAR_5 = VAR_1;
      goto err;
     }
     VAR_20[VAR_16] = '/';
     VAR_20[VAR_16 + 1] = 0;
    }
    VAR_12 = FUNC_10(VAR_20, VAR_18, sizeof(VAR_20));
    if (VAR_12 >= sizeof(VAR_20)) {
     VAR_5 = VAR_1;
     goto err;
    }
   }
   VAR_12 = FUNC_11(VAR_18, VAR_20, sizeof(VAR_18));
  }
 }





 if (VAR_13 > 1 && VAR_7[VAR_13 - 1] == '/')
  VAR_7[VAR_13 - 1] = '\0';
 return (VAR_7);

err:
 if (VAR_17)
  FUNC_1(VAR_7);
 return (((void*)0));
}
