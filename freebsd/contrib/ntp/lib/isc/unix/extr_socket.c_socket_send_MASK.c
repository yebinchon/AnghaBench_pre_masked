
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct in6_pktinfo {scalar_t__ ipi6_ifindex; } ;
typedef int isc_task_t ;
struct TYPE_14__ {int attributes; struct in6_pktinfo pktinfo; int address; int * ev_sender; } ;
typedef TYPE_1__ isc_socketevent_t ;
typedef int isc_sockaddr_t ;
typedef int isc_result_t ;
typedef scalar_t__ isc_boolean_t ;
struct TYPE_15__ {scalar_t__ type; int lock; int send_list; int fd; int manager; int pending_send; } ;
typedef TYPE_2__ isc__socket_t ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int *,int ,int *,int ,int ,char*,TYPE_1__*,...) ;

__attribute__((used)) static isc_result_t
FUNC_12(isc__socket_t *VAR_16, isc_socketevent_t *VAR_17, isc_task_t *VAR_18,
     isc_sockaddr_t *VAR_19, struct in6_pktinfo *VAR_20,
     unsigned int VAR_21)
{
 int VAR_22;
 isc_boolean_t VAR_23 = VAR_1;
 isc_task_t *VAR_24 = ((void*)0);
 isc_result_t VAR_25 = VAR_5;

 VAR_17->ev_sender = VAR_18;

 FUNC_10(VAR_19, VAR_16, VAR_17);
 if (VAR_20 != ((void*)0)) {
  VAR_17->attributes |= VAR_7;
  VAR_17->pktinfo = *VAR_20;

  if (!FUNC_6(&VAR_17->address) &&
      !FUNC_5(&VAR_17->address)) {
   FUNC_11(VAR_16, ((void*)0), VAR_12, &VAR_14,
       VAR_2, VAR_3,
       "pktinfo structure provided, ifindex %u "
       "(set to 0)", VAR_20->ipi6_ifindex);





   VAR_17->pktinfo.ipi6_ifindex = 0;
  }
 }

 if (VAR_16->type == VAR_15)
  VAR_22 = FUNC_4(VAR_16, VAR_17);
 else {
  FUNC_2(&VAR_16->lock);
  VAR_23 = VAR_10;

  if (FUNC_0(VAR_16->send_list))
   VAR_22 = FUNC_4(VAR_16, VAR_17);
  else
   VAR_22 = 129;
 }

 switch (VAR_22) {
 case 129:




  if ((VAR_21 & VAR_9) == 0) {
   FUNC_7(VAR_18, &VAR_24);
   VAR_17->attributes |= VAR_6;

   if (!VAR_23) {
    FUNC_2(&VAR_16->lock);
    VAR_23 = VAR_10;
   }






   if (FUNC_0(VAR_16->send_list) &&
       !VAR_16->pending_send)
    FUNC_8(VAR_16->manager, VAR_16->fd,
         VAR_11);
   FUNC_1(VAR_16->send_list, VAR_17, VAR_13);

   FUNC_11(VAR_16, ((void*)0), VAR_0, ((void*)0), 0, 0,
       "socket_send: event %p -> task %p",
       VAR_17, VAR_24);

   if ((VAR_21 & VAR_8) != 0)
    VAR_25 = VAR_4;
   break;
  }

 case 130:
 case 128:
  if ((VAR_21 & VAR_8) == 0)
   FUNC_9(VAR_16, &VAR_17);
  break;
 }

 if (VAR_23)
  FUNC_3(&VAR_16->lock);

 return (VAR_25);
}
