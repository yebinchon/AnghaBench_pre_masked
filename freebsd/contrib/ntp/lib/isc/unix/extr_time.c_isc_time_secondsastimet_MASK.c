
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int isc_uint32_t ;
struct TYPE_3__ {scalar_t__ nanoseconds; unsigned int seconds; } ;
typedef TYPE_1__ isc_time_t ;
typedef int isc_result_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

isc_result_t
FUNC_2(const isc_time_t *VAR_3, time_t *VAR_4) {
 time_t VAR_5;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->nanoseconds < VAR_2);
 VAR_5 = (time_t)VAR_3->seconds;

 FUNC_0(sizeof(unsigned int) == sizeof(isc_uint32_t));
 FUNC_0(sizeof(time_t) >= sizeof(isc_uint32_t));

 if (VAR_3->seconds > (~0U>>1) && VAR_5 <= (time_t)(~0U>>1))
  return (VAR_0);

 *VAR_4 = VAR_5;

 return (VAR_1);
}
