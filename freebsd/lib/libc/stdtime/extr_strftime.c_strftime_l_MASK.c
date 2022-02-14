
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,struct tm const*,char*,char*,int*,int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 () ;

size_t
FUNC_6(char * __restrict VAR_5, size_t VAR_6, const char * __restrict VAR_7,
    const struct tm * __restrict VAR_8, locale_t VAR_9)
{
 char * VAR_10;
 int VAR_11;
 FUNC_0(VAR_9);

 FUNC_5();
 VAR_11 = VAR_0;
 VAR_10 = FUNC_1(((VAR_7 == ((void*)0)) ? "%c" : VAR_7), VAR_8, VAR_5, VAR_5 + VAR_6, &VAR_11, VAR_9);

 if (VAR_11 != VAR_0 && FUNC_4(VAR_3) != ((void*)0)) {
  (void) FUNC_2(VAR_4, VAR_9, "\n");
  if (VAR_7 == ((void*)0))
   (void) FUNC_3("NULL strftime format ", VAR_4);
  else (void) FUNC_2(VAR_4, VAR_9, "strftime format \"%s\" ",
    VAR_7);
  (void) FUNC_3("yields only two digits of years in ", VAR_4);
  if (VAR_11 == VAR_1)
   (void) FUNC_3("some locales", VAR_4);
  else if (VAR_11 == VAR_2)
   (void) FUNC_3("the current locale", VAR_4);
  else (void) FUNC_3("all locales", VAR_4);
  (void) FUNC_3("\n", VAR_4);
 }

 if (VAR_10 == VAR_5 + VAR_6)
  return (0);
 *VAR_10 = '\0';
 return VAR_10 - VAR_5;
}
