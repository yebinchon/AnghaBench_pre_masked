
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; scalar_t__ tv_usec; } ;
typedef int isc_time_t ;
typedef int isc_result_t ;
typedef scalar_t__ isc_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,struct timeval*) ;

isc_result_t
FUNC_5(const char *VAR_4, isc_time_t *VAR_5) {
 struct timeval VAR_6[2];

 FUNC_0(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));
 VAR_6[0].tv_sec = VAR_6[1].tv_sec = (long)FUNC_3(VAR_5);




 if ((VAR_6[0].tv_sec &
      (1ULL << (sizeof(VAR_6[0].tv_sec) * VAR_0 - 1))) != 0)
  return (VAR_1);







 VAR_6[0].tv_usec = VAR_6[1].tv_usec =
  (isc_int32_t)(FUNC_2(VAR_5) / 1000);

 if (FUNC_4(VAR_4, VAR_6) < 0)
  return (FUNC_1(VAR_3));

 return (VAR_2);
}
