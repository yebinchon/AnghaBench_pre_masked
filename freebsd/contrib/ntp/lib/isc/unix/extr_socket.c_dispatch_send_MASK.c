
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_8__ {int * ev_sender; } ;
typedef TYPE_1__ isc_socketevent_t ;
typedef int isc_event_t ;
struct TYPE_10__ {TYPE_2__* ev_arg; int ev_action; TYPE_2__* ev_sender; } ;
struct TYPE_9__ {int pending_send; scalar_t__ type; int references; TYPE_3__ writable_ev; int * fdwatchtask; int send_list; } ;
typedef TYPE_2__ isc__socket_t ;
typedef TYPE_3__ intev_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int *,int ,int ,char*,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_4(isc__socket_t *VAR_4) {
 intev_t *VAR_5;
 isc_socketevent_t *VAR_6;
 isc_task_t *VAR_7;

 FUNC_0(!VAR_4->pending_send);

 if (VAR_4->type != VAR_3) {
  VAR_6 = FUNC_1(VAR_4->send_list);
  if (VAR_6 == ((void*)0))
   return;
  FUNC_3(VAR_4, ((void*)0), VAR_0, ((void*)0), 0, 0,
      "dispatch_send:  event %p -> task %p",
      VAR_6, VAR_6->ev_sender);
  VAR_7 = VAR_6->ev_sender;
 } else {
  VAR_7 = VAR_4->fdwatchtask;
 }

 VAR_4->pending_send = 1;
 VAR_5 = &VAR_4->writable_ev;

 VAR_4->references++;
 VAR_5->ev_sender = VAR_4;
 if (VAR_4->type == VAR_3)
  VAR_5->ev_action = VAR_1;
 else
  VAR_5->ev_action = VAR_2;
 VAR_5->ev_arg = VAR_4;

 FUNC_2(VAR_7, (isc_event_t **)&VAR_5);
}
