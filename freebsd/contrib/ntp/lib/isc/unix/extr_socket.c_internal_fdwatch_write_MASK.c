
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_task_t ;
typedef int isc_socket_t ;
struct TYPE_8__ {scalar_t__ ev_type; scalar_t__ ev_sender; } ;
typedef TYPE_1__ isc_event_t ;
struct TYPE_9__ {int pending_send; int (* fdwatchcb ) (int *,int *,int ,int ) ;scalar_t__ references; int lock; int fd; int manager; int fdwatcharg; } ;
typedef TYPE_2__ isc__socket_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int ,int ,char*,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_8(isc_task_t *VAR_7, isc_event_t *VAR_8) {
 isc__socket_t *VAR_9;
 int VAR_10;

 FUNC_0(VAR_8->ev_type == VAR_3);




 VAR_9 = (isc__socket_t *)VAR_8->ev_sender;
 FUNC_0(FUNC_3(VAR_9));

 FUNC_1(&VAR_9->lock);
 FUNC_6(VAR_9, ((void*)0), VAR_0,
     VAR_6, VAR_1, VAR_2,
     "internal_fdwatch_write: task %p got event %p", VAR_7, VAR_8);

 FUNC_0(VAR_9->pending_send == 1);

 FUNC_2(&VAR_9->lock);
 VAR_10 = (VAR_9->fdwatchcb)(VAR_7, (isc_socket_t *)VAR_9,
          VAR_9->fdwatcharg, VAR_4);
 FUNC_1(&VAR_9->lock);

 VAR_9->pending_send = 0;

 FUNC_0(VAR_9->references > 0);
 VAR_9->references--;
 if (VAR_9->references == 0) {
  FUNC_2(&VAR_9->lock);
  FUNC_4(&VAR_9);
  return;
 }

 if (VAR_10)
  FUNC_5(VAR_9->manager, VAR_9->fd, VAR_5);

 FUNC_2(&VAR_9->lock);
}
