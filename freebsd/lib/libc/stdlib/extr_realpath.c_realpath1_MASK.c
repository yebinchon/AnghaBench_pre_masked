
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symlink ;
struct stat {int st_mode; } ;
typedef size_t ssize_t ;
typedef int left ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 size_t FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*,char*,int) ;
 size_t FUNC_10 (char*,char const*,int) ;
 size_t FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static char *
FUNC_13(const char *VAR_7, char *VAR_8)
{
 struct stat VAR_9;
 char *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 unsigned VAR_15;
 ssize_t VAR_16;
 char VAR_17[VAR_5], VAR_18[VAR_5], VAR_19[VAR_5];

 VAR_15 = 0;
 if (VAR_7[0] == '/') {
  VAR_8[0] = '/';
  VAR_8[1] = '\0';
  if (VAR_7[1] == '\0')
   return (VAR_8);
  VAR_13 = 1;
  VAR_12 = FUNC_10(VAR_17, VAR_7 + 1, sizeof(VAR_17));
 } else {
  if (FUNC_2(VAR_8, VAR_5) == ((void*)0)) {
   VAR_8[0] = '.';
   VAR_8[1] = '\0';
   return (((void*)0));
  }
  VAR_13 = FUNC_11(VAR_8);
  VAR_12 = FUNC_10(VAR_17, VAR_7, sizeof(VAR_17));
 }
 if (VAR_12 >= sizeof(VAR_17) || VAR_13 >= VAR_5) {
  VAR_6 = VAR_1;
  return (((void*)0));
 }




 while (VAR_12 != 0) {




  VAR_10 = FUNC_7(VAR_17, '/');

  VAR_14 = VAR_10 != ((void*)0) ? (size_t)(VAR_10 - VAR_17) : VAR_12;
  FUNC_4(VAR_18, VAR_17, VAR_14);
  VAR_18[VAR_14] = '\0';

  if (VAR_10 != ((void*)0)) {
   VAR_12 -= VAR_14 + 1;
   FUNC_5(VAR_17, VAR_10 + 1, VAR_12 + 1);
  } else {
   VAR_17[0] = '\0';
   VAR_12 = 0;
  }

  if (VAR_8[VAR_13 - 1] != '/') {
   if (VAR_13 + 1 >= VAR_5) {
    VAR_6 = VAR_1;
    return (((void*)0));
   }
   VAR_8[VAR_13++] = '/';
   VAR_8[VAR_13] = '\0';
  }
  if (VAR_18[0] == '\0') {

   continue;
  } else if (FUNC_8(VAR_18, ".") == 0) {
   continue;
  } else if (FUNC_8(VAR_18, "..") == 0) {




   if (VAR_13 > 1) {
    VAR_8[VAR_13 - 1] = '\0';
    VAR_11 = FUNC_12(VAR_8, '/') + 1;
    *VAR_11 = '\0';
    VAR_13 = VAR_11 - VAR_8;
   }
   continue;
  }




  VAR_13 = FUNC_9(VAR_8, VAR_18, VAR_5);
  if (VAR_13 >= VAR_5) {
   VAR_6 = VAR_1;
   return (((void*)0));
  }
  if (FUNC_3(VAR_8, &VAR_9) != 0)
   return (((void*)0));
  if (FUNC_1(VAR_9.st_mode)) {
   if (VAR_15++ > VAR_4) {
    VAR_6 = VAR_0;
    return (((void*)0));
   }
   VAR_16 = FUNC_6(VAR_8, VAR_19, sizeof(VAR_19));
   if (VAR_16 <= 0 || VAR_16 >= (ssize_t)sizeof(VAR_19)) {
    if (VAR_16 < 0)
     ;
    else if (VAR_16 == 0)
     VAR_6 = VAR_2;
    else
     VAR_6 = VAR_1;
    return (((void*)0));
   }
   VAR_19[VAR_16] = '\0';
   if (VAR_19[0] == '/') {
    VAR_8[1] = 0;
    VAR_13 = 1;
   } else {

    VAR_11 = FUNC_12(VAR_8, '/') + 1;
    *VAR_11 = '\0';
    VAR_13 = VAR_11 - VAR_8;
   }






   if (VAR_10 != ((void*)0)) {
    if (VAR_19[VAR_16 - 1] != '/') {
     if (VAR_16 + 1 >= (ssize_t)sizeof(VAR_19)) {
      VAR_6 = VAR_1;
      return (((void*)0));
     }
     VAR_19[VAR_16] = '/';
     VAR_19[VAR_16 + 1] = 0;
    }
    VAR_12 = FUNC_9(VAR_19, VAR_17,
        sizeof(VAR_19));
    if (VAR_12 >= sizeof(VAR_19)) {
     VAR_6 = VAR_1;
     return (((void*)0));
    }
   }
   VAR_12 = FUNC_10(VAR_17, VAR_19, sizeof(VAR_17));
  } else if (!FUNC_0(VAR_9.st_mode) && VAR_10 != ((void*)0)) {
   VAR_6 = VAR_3;
   return (((void*)0));
  }
 }





 if (VAR_13 > 1 && VAR_8[VAR_13 - 1] == '/')
  VAR_8[VAR_13 - 1] = '\0';
 return (VAR_8);
}
