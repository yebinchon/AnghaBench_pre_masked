
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_time_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

int
FUNC_2(const isc_time_t *VAR_1, const isc_time_t *VAR_2) {
 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));
 FUNC_0(VAR_1->nanoseconds < VAR_0 && VAR_2->nanoseconds < VAR_0);

 if (VAR_1->seconds < VAR_2->seconds)
  return (-1);
 if (VAR_1->seconds > VAR_2->seconds)
  return (1);
 if (VAR_1->nanoseconds < VAR_2->nanoseconds)
  return (-1);
 if (VAR_1->nanoseconds > VAR_2->nanoseconds)
  return (1);
 return (0);
}
