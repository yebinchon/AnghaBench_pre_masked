
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int send_list; } ;
typedef TYPE_1__ isc_task_t ;
struct TYPE_12__ {int attributes; TYPE_1__* ev_sender; } ;
typedef TYPE_2__ isc_socketevent_t ;
typedef TYPE_1__ isc_socket_t ;
typedef int isc_event_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int **) ;
 int FUNC_5 (TYPE_1__**,int **) ;

__attribute__((used)) static void
FUNC_6(isc_socket_t *VAR_2, isc_socketevent_t **VAR_3) {
 isc_task_t *VAR_4;

 FUNC_1(VAR_3 != ((void*)0) && *VAR_3 != ((void*)0));

 VAR_4 = (*VAR_3)->ev_sender;
 (*VAR_3)->ev_sender = VAR_2;

 if (FUNC_2(*VAR_3, VAR_1))
  FUNC_3(VAR_2->send_list, *VAR_3, VAR_1);

 if (((*VAR_3)->attributes & VAR_0)
     == VAR_0)
  FUNC_5(&VAR_4, (isc_event_t **)VAR_3);
 else
  FUNC_4(VAR_4, (isc_event_t **)VAR_3);

 FUNC_0(VAR_2);
}
