
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ev_sender; } ;
typedef TYPE_1__ isc_socket_connev_t ;
typedef int isc_event_t ;
struct TYPE_7__ {TYPE_2__* ev_arg; int ev_action; TYPE_2__* ev_sender; } ;
struct TYPE_6__ {int references; int connecting; TYPE_1__* connect_ev; TYPE_3__ writable_ev; } ;
typedef TYPE_2__ isc__socket_t ;
typedef TYPE_3__ intev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int **) ;

__attribute__((used)) static void
FUNC_2(isc__socket_t *VAR_1) {
 intev_t *VAR_2;
 isc_socket_connev_t *VAR_3;

 VAR_2 = &VAR_1->writable_ev;

 VAR_3 = VAR_1->connect_ev;
 FUNC_0(VAR_3 != ((void*)0));

 FUNC_0(VAR_1->connecting);

 VAR_1->references++;
 VAR_2->ev_sender = VAR_1;
 VAR_2->ev_action = VAR_0;
 VAR_2->ev_arg = VAR_1;

 FUNC_1(VAR_3->ev_sender, (isc_event_t **)&VAR_2);
}
