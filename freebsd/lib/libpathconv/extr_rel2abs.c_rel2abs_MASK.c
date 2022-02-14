
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*,char const*,size_t) ;

char *
FUNC_5(const char *VAR_3, const char *VAR_4, char *VAR_5, const size_t VAR_6)
{
 const char *VAR_7, *VAR_8;



 const char *VAR_9 = VAR_5 + VAR_6 - 1;
 char *VAR_10;
 size_t VAR_11;

 if (*VAR_3 == '/') {
  if (FUNC_2(VAR_3) >= VAR_6)
   goto erange;
  FUNC_1(VAR_5, VAR_3);
  goto finish;
 } else if (*VAR_4 != '/' || !VAR_6) {
  VAR_2 = VAR_0;
  return (((void*)0));
 } else if (VAR_6 == 1)
  goto erange;

 VAR_11 = FUNC_2(VAR_4);

 if (!FUNC_0(VAR_3, ".") || !FUNC_0(VAR_3, "./")) {
  if (VAR_11 >= VAR_6)
   goto erange;
  FUNC_1(VAR_5, VAR_4);



  VAR_10 = VAR_5 + VAR_11 - 1;



  if (*VAR_10 == '/') {
   if (VAR_11 > 1)
    *VAR_10 = 0;
  } else
   VAR_10++;

  if (*++VAR_3 == '/') {



   *VAR_10++ = '/';
   if (VAR_10 > VAR_9)
    goto erange;
   *VAR_10 = 0;
  }
  goto finish;
 }
 VAR_8 = VAR_4 + VAR_11;
 if (*(VAR_8 - 1) == '/')
  --VAR_8;



 for (VAR_7 = VAR_3; *VAR_7 && *VAR_7 == '.'; ) {
  if (!FUNC_3(VAR_7, "../", 3)) {
   VAR_7 += 3;
   while (VAR_8 > VAR_4 && *--VAR_8 != '/')
    ;
  } else if (!FUNC_3(VAR_7, "./", 2)) {
   VAR_7 += 2;
  } else if (!FUNC_3(VAR_7, "..\0", 3)) {
   VAR_7 += 2;
   while (VAR_8 > VAR_4 && *--VAR_8 != '/')
    ;
  } else
   break;
 }



 VAR_11 = VAR_8 - VAR_4;
 if (VAR_11 >= VAR_6)
  goto erange;
 FUNC_4(VAR_5, VAR_4, VAR_11);
 VAR_10 = VAR_5 + VAR_11;
 if (*VAR_7 || *(VAR_7 - 1) == '/' || VAR_11 == 0)
  *VAR_10++ = '/';
 if (VAR_10 + FUNC_2(VAR_7) > VAR_9)
  goto erange;
 FUNC_1(VAR_10, VAR_7);
finish:
 return VAR_5;
erange:
 VAR_2 = VAR_1;
 return (((void*)0));
}
