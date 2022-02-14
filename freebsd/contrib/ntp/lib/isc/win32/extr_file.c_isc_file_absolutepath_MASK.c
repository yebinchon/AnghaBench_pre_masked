
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef size_t DWORD ;


 size_t FUNC_0 (char const*,size_t,char*,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

isc_result_t
FUNC_2(const char *VAR_3, char *VAR_4, size_t VAR_5) {
 char *VAR_6;
 DWORD VAR_7;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_4, &VAR_6);


 if (VAR_7 == 0)
  return (VAR_1);

 if (VAR_7 >= VAR_5)
  return (VAR_0);
 return (VAR_2);
}
