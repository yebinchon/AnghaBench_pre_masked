
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,size_t,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,char) ;

CHAR_T *
FUNC_2(SCR *VAR_0, EXCMD *VAR_1, CHAR_T *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 CHAR_T *VAR_5, *VAR_6;

 FUNC_0(VAR_0, VAR_5, VAR_4, VAR_3 + 1);

 for (VAR_6 = VAR_5; VAR_3 > 0; ++VAR_2, --VAR_3) {
  if (FUNC_1(VAR_0, VAR_1, *VAR_2)) {
   if (--VAR_3 < 1)
    break;
   ++VAR_2;
  } else if (*VAR_2 == '\\') {
   if (--VAR_3 < 1)
    break;
   ++VAR_2;


   if (*VAR_2 == '\\' && VAR_3 > 1)
    switch (VAR_2[1]) {
    case '!': case '%': case '#':
     ++VAR_2;
     --VAR_3;
    }
  }
  *VAR_6++ = *VAR_2;
 }
 *VAR_6 = '\0';

 return VAR_5;

alloc_err:
 return ((void*)0);
}
