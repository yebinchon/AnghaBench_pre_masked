
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int va_list ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,size_t,char**,int) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int*,char*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char**,char const*,int ) ;
 char* FUNC_8 (char*,char,int,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(char **VAR_4, size_t VAR_5, int *VAR_6, const char *VAR_7, va_list VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 size_t VAR_14;
 wchar_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_9 = ((void*)0);
 if ((VAR_17 = FUNC_7(&VAR_9, VAR_7, VAR_8)) <= 0)
  goto fail;

 VAR_14 = FUNC_6(VAR_9) + 1;
 if ((VAR_11 = FUNC_3(VAR_14)) == ((void*)0)) {
  FUNC_1(VAR_9);
  VAR_17 = -1;
  goto fail;
 }

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_10 = VAR_9;
 VAR_12 = VAR_11;
 VAR_17 = 0;
 VAR_21 = 1;
 VAR_19 = 0;
 VAR_20 = VAR_6 == ((void*)0) ? VAR_0 : *VAR_6;
 while (*VAR_10 != '\0') {
  if ((VAR_16 = FUNC_4(&VAR_15, VAR_10, VAR_1)) == -1) {
   (void)FUNC_4(((void*)0), ((void*)0), VAR_1);
   if (FUNC_0()) {
    VAR_17 = -1;
    break;
   }
   VAR_16 = 1;
   VAR_18 = -1;
  } else if (VAR_6 == ((void*)0) &&
      (VAR_15 == L'\n' || VAR_15 == L'\r' || VAR_15 == L'\t')) {





   VAR_18 = 0;
  } else if ((VAR_18 = FUNC_9(VAR_15)) == -1 &&
      FUNC_0()) {
   VAR_17 = -1;
   break;
  }



  if (VAR_18 >= 0) {
   if (VAR_21 && (VAR_12 - VAR_11 >= (int)VAR_5 - VAR_16 ||
       VAR_19 > VAR_20 - VAR_18))
    VAR_21 = 0;
   if (VAR_21) {
    if (FUNC_2(&VAR_11, &VAR_14, VAR_5,
        &VAR_12, VAR_16) == -1) {
     VAR_17 = -1;
     break;
    }
    VAR_19 += VAR_18;
    FUNC_5(VAR_12, VAR_10, VAR_16);
    VAR_12 += VAR_16;
   }
   VAR_10 += VAR_16;
   if (VAR_17 >= 0)
    VAR_17 += VAR_16;
   continue;
  }



  while (VAR_16 > 0) {
   if (VAR_21 && (VAR_12 - VAR_11 >= (int)VAR_5 - 4 ||
       VAR_19 > VAR_20 - 4))
    VAR_21 = 0;
   if (VAR_21) {
    if (FUNC_2(&VAR_11, &VAR_14, VAR_5,
        &VAR_12, 4) == -1) {
     VAR_17 = -1;
     break;
    }
    VAR_13 = FUNC_8(VAR_12, *VAR_10, VAR_3 | VAR_2, 0);
    VAR_18 = VAR_13 - VAR_12;
    VAR_19 += VAR_18;
    VAR_12 = VAR_13;
   } else
    VAR_18 = 4;
   VAR_16--;
   VAR_10++;
   if (VAR_17 >= 0)
    VAR_17 += VAR_18;
  }
  if (VAR_16 > 0)
   break;
 }
 FUNC_1(VAR_9);
 *VAR_12 = '\0';
 *VAR_4 = VAR_11;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_19;
 if (VAR_17 < (int)VAR_5 && !VAR_21)
  VAR_17 = -1;
 return VAR_17;

fail:
 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;
 if (VAR_17 == 0) {
  *VAR_4 = VAR_9;
  return 0;
 } else {
  *VAR_4 = ((void*)0);
  return -1;
 }
}
