
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int locale_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t,int ) ;
 char FUNC_3 (unsigned char,int ) ;

char *
FUNC_4(const char *VAR_0, const char *VAR_1, locale_t VAR_2)
{
 char VAR_3, VAR_4;
 size_t VAR_5;
 FUNC_0(VAR_2);

 if ((VAR_3 = *VAR_1++) != 0) {
  VAR_3 = FUNC_3((unsigned char)VAR_3, VAR_2);
  VAR_5 = FUNC_1(VAR_1);
  do {
   do {
    if ((VAR_4 = *VAR_0++) == 0)
     return (((void*)0));
   } while ((char)FUNC_3((unsigned char)VAR_4, VAR_2) != VAR_3);
  } while (FUNC_2(VAR_0, VAR_1, VAR_5, VAR_2) != 0);
  VAR_0--;
 }
 return ((char *)VAR_0);
}
