
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_uint32_t ;
typedef scalar_t__ isc_uint16_t ;
typedef scalar_t__ isc_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int*,char const*,int) ;

isc_result_t
FUNC_1(isc_uint16_t *VAR_2, const char *VAR_3, int VAR_4) {
 isc_uint32_t VAR_5;
 isc_result_t VAR_6;
 VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4);
 if (VAR_6 != VAR_1)
  return (VAR_6);
 if (VAR_5 > 0xFFFF)
  return (VAR_0);
 *VAR_2 = (isc_uint16_t) VAR_5;
 return (VAR_1);
}
