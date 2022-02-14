
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; } ;
typedef scalar_t__ isc_result_t ;
typedef int isc_resourcevalue_t ;
typedef int isc_resource_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,struct rlimit*) ;
 scalar_t__ FUNC_2 (int ,int*) ;

isc_result_t
FUNC_3(isc_resource_t VAR_1, isc_resourcevalue_t *VAR_2) {
 int VAR_3;
 int VAR_4;
 struct rlimit VAR_5;
 isc_result_t VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_6 == VAR_0) {
  VAR_3 = FUNC_1(VAR_4, &VAR_5);
  FUNC_0(VAR_3 == 0);
  *VAR_2 = VAR_5.rlim_max;
 }

 return (VAR_6);
}
