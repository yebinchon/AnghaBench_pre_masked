
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_12__ {int result; int attributes; int * ev_sender; } ;
typedef TYPE_1__ isc_socketevent_t ;
typedef int isc_result_t ;
typedef scalar_t__ isc_boolean_t ;
struct TYPE_13__ {scalar_t__ type; int lock; int recv_list; int fd; int manager; int pending_recv; } ;
typedef TYPE_2__ isc__socket_t ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_8 (TYPE_2__*,int *,int ,int *,int ,int ,char*,TYPE_1__*,int *) ;

__attribute__((used)) static isc_result_t
FUNC_9(isc__socket_t *VAR_11, isc_socketevent_t *VAR_12, isc_task_t *VAR_13,
     unsigned int VAR_14)
{
 int VAR_15;
 isc_boolean_t VAR_16 = VAR_1;
 isc_task_t *VAR_17 = ((void*)0);
 isc_result_t VAR_18 = VAR_4;

 VAR_12->ev_sender = VAR_13;

 if (VAR_11->type == VAR_10) {
  VAR_15 = FUNC_4(VAR_11, VAR_12);
 } else {
  FUNC_2(&VAR_11->lock);
  VAR_16 = VAR_7;

  if (FUNC_0(VAR_11->recv_list))
   VAR_15 = FUNC_4(VAR_11, VAR_12);
  else
   VAR_15 = 129;
 }

 switch (VAR_15) {
 case 129:






  FUNC_5(VAR_13, &VAR_17);
  VAR_12->attributes |= VAR_5;

  if (!VAR_16) {
   FUNC_2(&VAR_11->lock);
   VAR_16 = VAR_7;
  }





  if (FUNC_0(VAR_11->recv_list) && !VAR_11->pending_recv)
   FUNC_6(VAR_11->manager, VAR_11->fd, VAR_8);
  FUNC_1(VAR_11->recv_list, VAR_12, VAR_9);

  FUNC_8(VAR_11, ((void*)0), VAR_0, ((void*)0), 0, 0,
      "socket_recv: event %p -> task %p",
      VAR_12, VAR_17);

  if ((VAR_14 & VAR_6) != 0)
   VAR_18 = VAR_3;
  break;

 case 131:
  VAR_12->result = VAR_2;


 case 130:
 case 128:
  if ((VAR_14 & VAR_6) == 0)
   FUNC_7(VAR_11, &VAR_12);
  break;
 }

 if (VAR_16)
  FUNC_3(&VAR_11->lock);

 return (VAR_18);
}
