
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * connect_ev; } ;
typedef TYPE_1__ isc_task_t ;
typedef TYPE_1__ isc_socket_t ;
struct TYPE_9__ {TYPE_1__* ev_sender; } ;
typedef TYPE_3__ isc_socket_connev_t ;
typedef int isc_event_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,int **) ;

__attribute__((used)) static void
FUNC_3(isc_socket_t *VAR_0, isc_socket_connev_t **VAR_1) {
 isc_task_t *VAR_2;

 FUNC_1(VAR_1 != ((void*)0) && *VAR_1 != ((void*)0));

 VAR_2 = (*VAR_1)->ev_sender;
 (*VAR_1)->ev_sender = VAR_0;

 VAR_0->connect_ev = ((void*)0);

 FUNC_2(&VAR_2, (isc_event_t **)VAR_1);

 FUNC_0(VAR_0);
}
