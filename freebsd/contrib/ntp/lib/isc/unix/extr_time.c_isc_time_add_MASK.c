
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;
typedef int isc_result_t ;
struct TYPE_7__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_2__ isc_interval_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;

isc_result_t
FUNC_2(const isc_time_t *VAR_5, const isc_interval_t *VAR_6, isc_time_t *VAR_7)
{
 FUNC_1(VAR_5 != ((void*)0) && VAR_6 != ((void*)0) && VAR_7 != ((void*)0));
 FUNC_0(VAR_5->nanoseconds < VAR_3 && VAR_6->nanoseconds < VAR_3);







 if ((VAR_5->seconds > VAR_0 || VAR_6->seconds > VAR_0) &&
     ((long long)VAR_5->seconds + VAR_6->seconds > VAR_4))
  return (VAR_1);

 VAR_7->seconds = VAR_5->seconds + VAR_6->seconds;
 VAR_7->nanoseconds = VAR_5->nanoseconds + VAR_6->nanoseconds;
 if (VAR_7->nanoseconds >= VAR_3) {
  VAR_7->seconds++;
  VAR_7->nanoseconds -= VAR_3;
 }

 return (VAR_2);
}
