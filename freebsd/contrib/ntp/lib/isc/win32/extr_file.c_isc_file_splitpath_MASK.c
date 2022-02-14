
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;

isc_result_t
FUNC_5(isc_mem_t *VAR_3, char *VAR_4, char **VAR_5, char **VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10;

 VAR_9 = FUNC_4(VAR_4, '/');

 VAR_10 = FUNC_4(VAR_4, '\\');
 if ((VAR_9 != ((void*)0) && VAR_10 != ((void*)0) && VAR_10 > VAR_9) ||
     (VAR_9 == ((void*)0) && VAR_10 != ((void*)0)))
  VAR_9 = VAR_10;

 if (VAR_9 == VAR_4) {
  VAR_8 = ++VAR_9;
  VAR_7 = FUNC_2(VAR_3, "/");
 } else if (VAR_9 != ((void*)0)) {
  VAR_8 = ++VAR_9;
  VAR_7 = FUNC_0(VAR_3, VAR_9 - VAR_4);
  if (VAR_7 != ((void*)0))
   FUNC_3(VAR_7, VAR_4, VAR_9 - VAR_4);
 } else {
  VAR_8 = VAR_4;
  VAR_7 = FUNC_2(VAR_3, ".");
 }

 if (VAR_7 == ((void*)0))
  return (VAR_1);

 if (*VAR_8 == '\0') {
  FUNC_1(VAR_3, VAR_7);
  return (VAR_0);
 }

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;

 return (VAR_2);
}
