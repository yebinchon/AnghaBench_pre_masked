
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_timertype_t ;
struct TYPE_7__ {TYPE_1__* methods; } ;
typedef TYPE_2__ isc_timermgr_t ;
typedef int isc_timer_t ;
typedef int isc_time_t ;
typedef int isc_taskaction_t ;
typedef int isc_task_t ;
typedef int isc_result_t ;
typedef int isc_interval_t ;
struct TYPE_6__ {int (* timercreate ) (TYPE_2__*,int ,int *,int *,int *,int ,void const*,int **) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int *,int *,int ,void const*,int **) ;

isc_result_t
FUNC_3(isc_timermgr_t *VAR_0, isc_timertype_t VAR_1,
   isc_time_t *VAR_2, isc_interval_t *VAR_3,
   isc_task_t *VAR_4, isc_taskaction_t VAR_5, const void *VAR_6,
   isc_timer_t **VAR_7)
{
 FUNC_1(FUNC_0(VAR_0));

 return (VAR_0->methods->timercreate(VAR_0, VAR_1, VAR_2,
           VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7));
}
