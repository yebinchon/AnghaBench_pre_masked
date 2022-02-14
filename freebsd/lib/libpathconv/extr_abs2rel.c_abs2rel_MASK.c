
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_3, const char *VAR_4, char *VAR_5, const size_t VAR_6)
{
 const char *VAR_7, *VAR_8, *VAR_9;



 const char *VAR_10 = VAR_5 + VAR_6 - 1;
 char *VAR_11;

 if (*VAR_3 != '/') {
  if (FUNC_1(VAR_3) >= VAR_6)
   goto erange;
  FUNC_0(VAR_5, VAR_3);
  goto finish;
 } else if (*VAR_4 != '/' || !VAR_6) {
  VAR_2 = VAR_0;
  return (((void*)0));
 } else if (VAR_6 == 1)
  goto erange;



 VAR_9 = VAR_3;
 for (VAR_7 = VAR_3, VAR_8 = VAR_4; *VAR_7 && *VAR_8 && *VAR_7 == *VAR_8; VAR_7++, VAR_8++)
  if (*VAR_7 == '/')
   VAR_9 = VAR_7;
 if ((*VAR_7 == 0 || (*VAR_7 == '/' && *(VAR_7 + 1) == 0)) &&
     (*VAR_8 == 0 || (*VAR_8 == '/' && *(VAR_8 + 1) == 0))) {
  VAR_11 = VAR_5;
  *VAR_11++ = '.';
  if (*VAR_7 == '/' || *(VAR_7 - 1) == '/')
   *VAR_11++ = '/';
  if (VAR_11 > VAR_10)
   goto erange;
  *VAR_11 = 0;
  goto finish;
 }
 if ((*VAR_7 == 0 && *VAR_8 == '/') || (*VAR_7 == '/' && *VAR_8 == 0))
  VAR_9 = VAR_7;



 VAR_11 = VAR_5;
 for (VAR_8 = VAR_4 + (VAR_9 - VAR_3); *VAR_8; VAR_8++)
  if (*VAR_8 == '/' && *(VAR_8 + 1) != 0) {
   if (VAR_11 + 3 > VAR_10)
    goto erange;
   *VAR_11++ = '.';
   *VAR_11++ = '.';
   *VAR_11++ = '/';
  }
 if (VAR_11 > VAR_10)
  goto erange;
 *VAR_11 = 0;



 if (*VAR_9) {
  if (VAR_11 + FUNC_1(VAR_9 + 1) > VAR_10)
   goto erange;
  FUNC_0(VAR_11, VAR_9 + 1);
 } else
  *--VAR_11 = 0;
finish:
 return VAR_5;
erange:
 VAR_2 = VAR_1;
 return (((void*)0));
}
