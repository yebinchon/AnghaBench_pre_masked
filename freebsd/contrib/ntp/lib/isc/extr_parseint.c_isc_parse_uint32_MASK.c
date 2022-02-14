
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long isc_uint32_t ;
typedef int isc_result_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned char) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

isc_result_t
FUNC_2(isc_uint32_t *VAR_6, const char *VAR_7, int VAR_8) {
 unsigned long VAR_9;
 char *VAR_10;
 if (! FUNC_0((unsigned char)(VAR_7[0])))
  return (VAR_1);
 VAR_5 = 0;
 VAR_9 = FUNC_1(VAR_7, &VAR_10, VAR_8);
 if (*VAR_10 != '\0')
  return (VAR_1);
 if (VAR_9 == VAR_4 && VAR_5 == VAR_0)
  return (VAR_2);
 *VAR_6 = VAR_9;
 return (VAR_3);
}
