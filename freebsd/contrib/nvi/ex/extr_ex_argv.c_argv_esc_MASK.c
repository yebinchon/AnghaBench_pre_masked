
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (int *,int*,size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,size_t,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

CHAR_T *
FUNC_6(SCR *VAR_1, EXCMD *VAR_2, CHAR_T *VAR_3, size_t VAR_4)
{
 size_t VAR_5, VAR_6;
 CHAR_T *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_1(VAR_1, VAR_7, VAR_5, VAR_4 + 1);
 for (VAR_8 = VAR_7; VAR_4 > 0; ++VAR_3, --VAR_4) {
  VAR_9 = *VAR_3;
  VAR_6 = VAR_8 - VAR_7;
  if (VAR_5 / sizeof(CHAR_T) - VAR_6 < 3) {
   FUNC_0(VAR_1, VAR_7, VAR_5, VAR_6 + 3);
   VAR_8 = VAR_7 + VAR_6;
  }
  if (FUNC_3(VAR_9) || VAR_9 == '\n' ||
      FUNC_2(VAR_1, VAR_2, VAR_9))
   *VAR_8++ = VAR_0;
  else switch (VAR_9) {
  case '~':
   if (VAR_8 != VAR_7)
    *VAR_8++ = '\\';
   break;
  case '+':
   if (VAR_8 == VAR_7)
    *VAR_8++ = '\\';
   break;
  case '!': case '%': case '#':
   *VAR_8++ = '\\';
   *VAR_8++ = '\\';
   break;
  case ',': case '-': case '.': case '/':
  case ':': case '=': case '@': case '_':
   break;
  default:
   if (FUNC_5(VAR_9) && !FUNC_4(VAR_9))
    *VAR_8++ = '\\';
  }
  *VAR_8++ = VAR_9;
 }
 *VAR_8 = '\0';

 return VAR_7;

alloc_err:
 return ((void*)0);
}
