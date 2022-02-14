
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_8__ {int events; } ;
typedef TYPE_1__ isc_ondestroy_t ;
struct TYPE_9__ {int * ev_sender; } ;
typedef TYPE_2__ isc_event_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int **,TYPE_2__**) ;

void
FUNC_5(isc_ondestroy_t *VAR_1, void *VAR_2) {
 isc_event_t *VAR_3;
 isc_task_t *VAR_4;

 FUNC_2(FUNC_3(VAR_1));

 VAR_3 = FUNC_0(VAR_1->events);
 while (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_1->events, VAR_3, VAR_0);

  VAR_4 = VAR_3->ev_sender;
  VAR_3->ev_sender = VAR_2;

  FUNC_4(&VAR_4, &VAR_3);

  VAR_3 = FUNC_0(VAR_1->events);
 }
}
