
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;

isc_result_t
FUNC_3(const char *VAR_2, const char *VAR_3) {
 int VAR_4;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 == 0)
  return (VAR_0);
 else
  return (FUNC_1(VAR_1));
}
