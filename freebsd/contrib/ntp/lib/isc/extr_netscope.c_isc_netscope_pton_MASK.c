
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int isc_uint64_t ;
typedef int isc_uint32_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char**,int) ;

isc_result_t
FUNC_3(int VAR_3, char *VAR_4, void *VAR_5, isc_uint32_t *VAR_6) {
 char *VAR_7;



 struct in6_addr *VAR_8;
 isc_uint32_t VAR_9;
 isc_uint64_t VAR_10;


 if (VAR_3 != VAR_0)
  return (VAR_1);

 VAR_8 = (struct in6_addr *)VAR_5;
  VAR_10 = FUNC_2(VAR_4, &VAR_7, 10);
  if (VAR_7 == VAR_4)
   return (VAR_1);


  VAR_9 = (isc_uint32_t)(VAR_10 & 0xffffffffUL);
  if (VAR_9 != VAR_10)
   return (VAR_1);




 *VAR_6 = VAR_9;
 return (VAR_2);
}
