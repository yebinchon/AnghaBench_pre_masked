
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

isc_result_t
FUNC_6(const char *VAR_2, char *VAR_3, size_t VAR_4) {
 const char *VAR_5;
 char *VAR_6;
 size_t VAR_7;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));




 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == ((void*)0)) {
  return (VAR_0);
 }




 VAR_6 = FUNC_2(VAR_5, '.');
 if (VAR_6 == ((void*)0)) {
  if (VAR_4 <= FUNC_4(VAR_5))
   return (VAR_0);

  FUNC_3(VAR_3, VAR_5);
  return (VAR_1);
 }




 VAR_7 = VAR_6 - VAR_5;
 if (VAR_7 >= VAR_4)
  return (VAR_0);

 FUNC_5(VAR_3, VAR_5, VAR_7);
 VAR_3[VAR_7] = '\0';
 return (VAR_1);
}
