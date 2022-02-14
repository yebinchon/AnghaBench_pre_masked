
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rlimit {int rlim_cur; int rlim_max; } ;
typedef scalar_t__ isc_result_t ;
typedef scalar_t__ isc_resourcevalue_t ;
typedef scalar_t__ isc_resource_t ;
typedef scalar_t__ isc_boolean_t ;
typedef int ISC_PLATFORM_RLIMITTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,struct rlimit*) ;
 scalar_t__ FUNC_2 (char*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (int,struct rlimit*) ;

isc_result_t
FUNC_6(isc_resource_t VAR_7, isc_resourcevalue_t VAR_8) {
 struct rlimit VAR_9;
 ISC_PLATFORM_RLIMITTYPE VAR_10;
 int VAR_11;
 int VAR_12;
 isc_result_t VAR_13;

 VAR_13 = FUNC_4(VAR_7, &VAR_12);
 if (VAR_13 != VAR_1)
  return (VAR_13);

 if (VAR_8 == VAR_0)
  VAR_10 = VAR_4;

 else {







  isc_resourcevalue_t VAR_14;
  isc_boolean_t VAR_15 =
   FUNC_0(((double)(ISC_PLATFORM_RLIMITTYPE)-1) < 0);

  if (VAR_15)
   VAR_14 = ~((ISC_PLATFORM_RLIMITTYPE)1 <<
         (sizeof(ISC_PLATFORM_RLIMITTYPE) * 8 - 1));
  else
   VAR_14 = (ISC_PLATFORM_RLIMITTYPE)-1;

  if (VAR_8 > VAR_14)
   VAR_8 = VAR_14;

  VAR_10 = VAR_8;
 }

 VAR_9.rlim_cur = VAR_9.rlim_max = VAR_10;
 VAR_11 = FUNC_5(VAR_12, &VAR_9);

 if (VAR_11 == 0)
  return (VAR_1);
 if (VAR_7 == VAR_6 && VAR_10 == VAR_4) {
  VAR_9.rlim_cur = VAR_9.rlim_max = (1024*1024);
  VAR_11 = FUNC_5(VAR_12, &VAR_9);
  if (VAR_11 == 0)
   return (VAR_1);
 }
 if (VAR_7 == VAR_6 && VAR_10 == VAR_4) {
  if (FUNC_1(VAR_12, &VAR_9) == 0) {
   VAR_9.rlim_cur = VAR_9.rlim_max;
   VAR_11 = FUNC_5(VAR_12, &VAR_9);
   if (VAR_11 == 0)
    return (VAR_1);
  }
 }
 return (FUNC_3(VAR_5));
}
