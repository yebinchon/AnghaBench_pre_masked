
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_timermgr_t ;
typedef int isc_time_t ;
typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ nscheduled; int due; } ;
typedef TYPE_1__ isc__timermgr_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

isc_result_t
FUNC_0(isc_timermgr_t *VAR_3, isc_time_t *VAR_4) {
 isc__timermgr_t *VAR_5 = (isc__timermgr_t *)VAR_3;





 if (VAR_5 == ((void*)0) || VAR_5->nscheduled == 0)
  return (VAR_0);
 *VAR_4 = VAR_5->due;
 return (VAR_1);
}
