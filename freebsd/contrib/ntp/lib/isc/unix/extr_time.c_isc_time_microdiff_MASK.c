
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_uint64_t ;
struct TYPE_4__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

isc_uint64_t
FUNC_2(const isc_time_t *VAR_2, const isc_time_t *VAR_3) {
 isc_uint64_t VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));
 FUNC_0(VAR_2->nanoseconds < VAR_0 && VAR_3->nanoseconds < VAR_0);

 VAR_4 = (isc_uint64_t)VAR_2->seconds * VAR_0 + VAR_2->nanoseconds;
 VAR_5 = (isc_uint64_t)VAR_3->seconds * VAR_0 + VAR_3->nanoseconds;

 if (VAR_4 <= VAR_5)
  return (0);

 VAR_6 = VAR_4 - VAR_5;




 VAR_6 /= VAR_1;

 return (VAR_6);
}
