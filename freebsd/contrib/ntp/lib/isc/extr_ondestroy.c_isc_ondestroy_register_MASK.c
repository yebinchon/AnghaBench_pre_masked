
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_task_t ;
typedef int isc_result_t ;
struct TYPE_7__ {int events; } ;
typedef TYPE_1__ isc_ondestroy_t ;
struct TYPE_8__ {int * ev_sender; } ;
typedef TYPE_2__ isc_event_t ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int **) ;

isc_result_t
FUNC_4(isc_ondestroy_t *VAR_2, isc_task_t *VAR_3,
         isc_event_t **VAR_4)
{
 isc_event_t *VAR_5;
 isc_task_t *VAR_6 = ((void*)0);

 FUNC_1(FUNC_2(VAR_2));
 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 VAR_5 = *VAR_4;

 FUNC_1(VAR_5 != ((void*)0));

 FUNC_3(VAR_3, &VAR_6);

 VAR_5->ev_sender = VAR_6;

 FUNC_0(VAR_2->events, VAR_5, VAR_1);

 return (VAR_0);
}
