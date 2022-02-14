
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int accept_list; } ;
typedef TYPE_1__ isc_task_t ;
typedef TYPE_1__ isc_socket_t ;
struct TYPE_11__ {TYPE_1__* ev_sender; } ;
typedef TYPE_3__ isc_socket_newconnev_t ;
typedef int isc_event_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__**,int **) ;

__attribute__((used)) static void
FUNC_5(isc_socket_t *VAR_1, isc_socket_newconnev_t **VAR_2) {
 isc_task_t *VAR_3;

 FUNC_1(VAR_2 != ((void*)0) && *VAR_2 != ((void*)0));

 VAR_3 = (*VAR_2)->ev_sender;
 (*VAR_2)->ev_sender = VAR_1;

 if (FUNC_2(*VAR_2, VAR_0))
  FUNC_3(VAR_1->accept_list, *VAR_2, VAR_0);

 FUNC_4(&VAR_3, (isc_event_t **)VAR_2);

 FUNC_0(VAR_1);
}
