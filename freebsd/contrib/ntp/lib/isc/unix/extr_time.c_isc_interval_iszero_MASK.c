
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nanoseconds; scalar_t__ seconds; } ;
typedef TYPE_1__ isc_interval_t ;
typedef int isc_boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

isc_boolean_t
FUNC_2(const isc_interval_t *VAR_3) {
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->nanoseconds < VAR_2);

 if (VAR_3->seconds == 0 && VAR_3->nanoseconds == 0)
  return (VAR_1);

 return (VAR_0);
}
