
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;

isc_result_t
FUNC_4(const char *VAR_2, char *VAR_3, size_t VAR_4) {
 const char *VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_3(VAR_5) + 1;

 if (VAR_6 > VAR_4)
  return (VAR_0);
 FUNC_2(VAR_3, VAR_5, VAR_6);

 return (VAR_1);
}
