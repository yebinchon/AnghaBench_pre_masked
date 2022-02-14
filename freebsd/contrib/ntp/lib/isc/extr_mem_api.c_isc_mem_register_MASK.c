
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int * isc_memcreatefunc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * VAR_4 ;
 int VAR_5 ;

isc_result_t
FUNC_4(isc_memcreatefunc_t VAR_6) {
 isc_result_t VAR_7 = VAR_1;

 FUNC_1(FUNC_3(&VAR_5, VAR_3) == VAR_1);

 FUNC_0(&VAR_2);
 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_6;
 else
  VAR_7 = VAR_0;
 FUNC_2(&VAR_2);

 return (VAR_7);
}
