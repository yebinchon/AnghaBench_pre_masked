
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char*) ;

isc_result_t
FUNC_5(char *VAR_3, size_t VAR_4, const char *VAR_5) {
 FUNC_1(VAR_4 > 0U);
 FUNC_1(FUNC_4(VAR_3) < VAR_4);

 if (FUNC_3(VAR_3, VAR_5, VAR_4) >= VAR_4) {
  FUNC_2(VAR_3, VAR_2, VAR_4);
  return (VAR_0);
 }

 FUNC_0(FUNC_4(VAR_3) < VAR_4);

 return (VAR_1);
}
