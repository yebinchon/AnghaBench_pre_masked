
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char) ;

isc_result_t
FUNC_6(const char *VAR_2, const char *VAR_3, char *VAR_4,
   size_t VAR_5) {
 char *VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));

 VAR_6 = FUNC_5(VAR_3, '\\');
 if (VAR_6 != ((void*)0))
  VAR_3 = VAR_6 + 1;

 VAR_6 = FUNC_5(VAR_2, '\\');

 if (VAR_6 != ((void*)0)) {
  if ((VAR_6 - VAR_2 + 1 + FUNC_3(VAR_3) + 1) > VAR_5)
   return (VAR_0);

  FUNC_4(VAR_4, VAR_2, VAR_6 - VAR_2 + 1);
  VAR_4[VAR_6 - VAR_2 + 1] = '\0';
  FUNC_1(VAR_4, VAR_3);
 } else {
  if ((FUNC_3(VAR_3) + 1) > VAR_5)
   return (VAR_0);

  FUNC_2(VAR_4, VAR_3);
 }

 return (VAR_1);
}
