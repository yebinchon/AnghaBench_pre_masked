
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int isc_task_t ;
typedef int isc_socketevent_t ;
struct TYPE_10__ {scalar_t__ ev_type; scalar_t__ ev_sender; } ;
typedef TYPE_1__ isc_event_t ;
struct TYPE_11__ {int pending_send; scalar_t__ references; int lock; int fd; int manager; int send_list; } ;
typedef TYPE_2__ isc__socket_t ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int **) ;
 int FUNC_10 (TYPE_2__*,int *,int ,int ,int ,int ,char*,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(isc_task_t *VAR_6, isc_event_t *VAR_7) {
 isc_socketevent_t *VAR_8;
 isc__socket_t *VAR_9;

 FUNC_0(VAR_7->ev_type == VAR_3);




 VAR_9 = (isc__socket_t *)VAR_7->ev_sender;
 FUNC_0(FUNC_5(VAR_9));

 FUNC_3(&VAR_9->lock);
 FUNC_10(VAR_9, ((void*)0), VAR_0,
     VAR_5, VAR_1, VAR_2,
     "internal_send: task %p got event %p", VAR_6, VAR_7);

 FUNC_0(VAR_9->pending_send == 1);
 VAR_9->pending_send = 0;

 FUNC_0(VAR_9->references > 0);
 VAR_9->references--;
 if (VAR_9->references == 0) {
  FUNC_4(&VAR_9->lock);
  FUNC_6(&VAR_9);
  return;
 }





 VAR_8 = FUNC_2(VAR_9->send_list);
 while (VAR_8 != ((void*)0)) {
  switch (FUNC_7(VAR_9, VAR_8)) {
  case 129:
   goto poke;

  case 130:
  case 128:
   FUNC_9(VAR_9, &VAR_8);
   break;
  }

  VAR_8 = FUNC_2(VAR_9->send_list);
 }

 poke:
 if (!FUNC_1(VAR_9->send_list))
  FUNC_8(VAR_9->manager, VAR_9->fd, VAR_4);

 FUNC_4(&VAR_9->lock);
}
