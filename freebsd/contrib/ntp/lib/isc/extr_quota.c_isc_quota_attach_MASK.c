
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int isc_quota_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

isc_result_t
FUNC_2(isc_quota_t *VAR_2, isc_quota_t **VAR_3)
{
 isc_result_t VAR_4;
 FUNC_0(VAR_3 != ((void*)0) && *VAR_3 == ((void*)0));
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
  *VAR_3 = VAR_2;
 return (VAR_4);
}
