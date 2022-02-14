
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_14__ {int result; } ;
typedef TYPE_1__ isc_socketevent_t ;
struct TYPE_15__ {scalar_t__ ev_type; TYPE_3__* ev_sender; } ;
typedef TYPE_2__ isc_event_t ;
struct TYPE_16__ {int pending_recv; scalar_t__ references; int lock; int fd; int manager; int recv_list; } ;
typedef TYPE_3__ isc__socket_t ;






 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__**) ;
 int FUNC_10 (TYPE_3__*,int *,int ,int ,int ,int ,char*,int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(isc_task_t *VAR_7, isc_event_t *VAR_8) {
 isc_socketevent_t *VAR_9;
 isc__socket_t *VAR_10;

 FUNC_0(VAR_8->ev_type == VAR_4);

 VAR_10 = VAR_8->ev_sender;
 FUNC_0(FUNC_5(VAR_10));

 FUNC_3(&VAR_10->lock);
 FUNC_10(VAR_10, ((void*)0), VAR_0,
     VAR_6, VAR_1, VAR_2,
     "internal_recv: task %p got event %p", VAR_7, VAR_8);

 FUNC_0(VAR_10->pending_recv == 1);
 VAR_10->pending_recv = 0;

 FUNC_0(VAR_10->references > 0);
 VAR_10->references--;
 if (VAR_10->references == 0) {
  FUNC_4(&VAR_10->lock);
  FUNC_6(&VAR_10);
  return;
 }





 VAR_9 = FUNC_2(VAR_10->recv_list);
 while (VAR_9 != ((void*)0)) {
  switch (FUNC_7(VAR_10, VAR_9)) {
  case 129:
   goto poke;

  case 131:





   do {
    VAR_9->result = VAR_3;
    FUNC_9(VAR_10, &VAR_9);
    VAR_9 = FUNC_2(VAR_10->recv_list);
   } while (VAR_9 != ((void*)0));
   goto poke;

  case 128:
  case 130:
   FUNC_9(VAR_10, &VAR_9);
   break;
  }

  VAR_9 = FUNC_2(VAR_10->recv_list);
 }

 poke:
 if (!FUNC_1(VAR_10->recv_list))
  FUNC_8(VAR_10->manager, VAR_10->fd, VAR_5);

 FUNC_4(&VAR_10->lock);
}
