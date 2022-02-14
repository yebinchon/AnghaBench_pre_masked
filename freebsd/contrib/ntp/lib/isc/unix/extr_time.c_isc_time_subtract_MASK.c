
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;
typedef int isc_result_t ;
struct TYPE_7__ {scalar_t__ nanoseconds; unsigned int seconds; } ;
typedef TYPE_2__ isc_interval_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;

isc_result_t
FUNC_2(const isc_time_t *VAR_3, const isc_interval_t *VAR_4,
    isc_time_t *VAR_5)
{
 FUNC_1(VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_5 != ((void*)0));
 FUNC_0(VAR_3->nanoseconds < VAR_2 && VAR_4->nanoseconds < VAR_2);

 if ((unsigned int)VAR_3->seconds < VAR_4->seconds ||
     ((unsigned int)VAR_3->seconds == VAR_4->seconds &&
      VAR_3->nanoseconds < VAR_4->nanoseconds))
     return (VAR_0);

 VAR_5->seconds = VAR_3->seconds - VAR_4->seconds;
 if (VAR_3->nanoseconds >= VAR_4->nanoseconds)
  VAR_5->nanoseconds = VAR_3->nanoseconds - VAR_4->nanoseconds;
 else {
  VAR_5->nanoseconds = VAR_2 - VAR_4->nanoseconds +
   VAR_3->nanoseconds;
  VAR_5->seconds--;
 }

 return (VAR_1);
}
