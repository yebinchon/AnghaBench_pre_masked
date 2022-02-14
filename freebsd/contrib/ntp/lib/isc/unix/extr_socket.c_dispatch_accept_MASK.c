
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ev_sender; } ;
typedef TYPE_1__ isc_socket_newconnev_t ;
typedef int isc_event_t ;
struct TYPE_8__ {TYPE_2__* ev_arg; int ev_action; TYPE_2__* ev_sender; } ;
struct TYPE_7__ {int pending_accept; int references; TYPE_3__ readable_ev; int accept_list; } ;
typedef TYPE_2__ isc__socket_t ;
typedef TYPE_3__ intev_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int **) ;

__attribute__((used)) static void
FUNC_3(isc__socket_t *VAR_1) {
 intev_t *VAR_2;
 isc_socket_newconnev_t *VAR_3;

 FUNC_0(!VAR_1->pending_accept);





 VAR_3 = FUNC_1(VAR_1->accept_list);
 if (VAR_3 == ((void*)0))
  return;

 VAR_1->pending_accept = 1;
 VAR_2 = &VAR_1->readable_ev;

 VAR_1->references++;
 VAR_2->ev_sender = VAR_1;
 VAR_2->ev_action = VAR_0;
 VAR_2->ev_arg = VAR_1;

 FUNC_2(VAR_3->ev_sender, (isc_event_t **)&VAR_2);
}
