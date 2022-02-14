
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int isc_mutex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

isc_result_t
FUNC_1(isc_mutex_t *VAR_1, unsigned int VAR_2) {
 isc_result_t VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(&VAR_1[VAR_4]);
  if (VAR_3 != VAR_0)
   return (VAR_3);
 }

 return (VAR_0);
}
