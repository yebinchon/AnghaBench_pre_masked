
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,char*) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1, size_t VAR_2, const char *VAR_3)
{
 char VAR_4;
 const char *VAR_5 = VAR_3;
 char *VAR_6 = VAR_1;
 size_t VAR_7;
 size_t VAR_8;
 int VAR_9 = VAR_0;





 for (VAR_8 = VAR_2; (VAR_4 = *VAR_5); ++VAR_5) {
  if (VAR_4 == '%' && VAR_5[1] == 'm') {
   ++VAR_5;
   VAR_7 = FUNC_0(VAR_6, VAR_8, "%s",
       FUNC_1(VAR_9));
   if (VAR_7 >= VAR_8)
    VAR_7 = VAR_8 - 1;
   VAR_6 += VAR_7;
   VAR_8 -= VAR_7;
  } else {
   if (VAR_8 > 1) {
    *VAR_6++ = VAR_4;
    VAR_8--;
   }
  }
 }
 *VAR_6 = '\0';
}
