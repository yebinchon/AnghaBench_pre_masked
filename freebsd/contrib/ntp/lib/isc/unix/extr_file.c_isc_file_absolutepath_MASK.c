
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

isc_result_t
FUNC_3(const char *VAR_2, char *VAR_3, size_t VAR_4) {
 isc_result_t VAR_5;
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 != VAR_1)
  return (VAR_5);
 if (FUNC_2(VAR_3) + FUNC_2(VAR_2) + 1 > VAR_4)
  return (VAR_0);
 FUNC_1(VAR_3, VAR_2, VAR_4);
 return (VAR_1);
}
