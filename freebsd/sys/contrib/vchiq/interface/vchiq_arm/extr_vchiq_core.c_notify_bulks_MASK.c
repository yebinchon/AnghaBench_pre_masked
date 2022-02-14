
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct bulk_waiter {scalar_t__ actual; int event; } ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_17__ {scalar_t__ process; scalar_t__ remote_notify; scalar_t__ remove; TYPE_3__* bulks; } ;
struct TYPE_14__ {TYPE_4__ bulk_tx; TYPE_5__* state; int bulk_remove_event; scalar_t__ instance; int remoteport; int localport; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_REASON_T ;
struct TYPE_15__ {scalar_t__* member_0; int member_1; } ;
typedef TYPE_2__ VCHIQ_ELEMENT_T ;
struct TYPE_16__ {scalar_t__ dir; scalar_t__ actual; scalar_t__ mode; struct bulk_waiter* userdata; scalar_t__ data; scalar_t__ remote_data; } ;
typedef TYPE_3__ VCHIQ_BULK_T ;
typedef TYPE_4__ VCHIQ_BULK_QUEUE_T ;
struct TYPE_18__ {scalar_t__ is_master; int id; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *,struct bulk_waiter*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *,int,TYPE_2__*,int,int,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_20 ;
 int FUNC_10 (int ,char*,int ,int ,char,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_11(VCHIQ_SERVICE_T *VAR_21, VCHIQ_BULK_QUEUE_T *VAR_22,
 int VAR_23)
{
 VCHIQ_STATUS_T VAR_24 = VAR_13;

 FUNC_10(VAR_20,
  "%d: nb:%d %cx - p=%x rn=%x r=%x",
  VAR_21->state->id, VAR_21->localport,
  (VAR_22 == &VAR_21->bulk_tx) ? 't' : 'r',
  VAR_22->process, VAR_22->remote_notify, VAR_22->remove);

 if (VAR_21->state->is_master) {
  while (VAR_22->remote_notify != VAR_22->process) {
   VCHIQ_BULK_T *VAR_25 =
    &VAR_22->bulks[FUNC_0(VAR_22->remote_notify)];
   int VAR_26 = (VAR_25->dir == VAR_5) ?
    VAR_8 : VAR_9;
   int VAR_27 = FUNC_1(VAR_26, VAR_21->localport,
    VAR_21->remoteport);
   VCHIQ_ELEMENT_T VAR_28 = { &VAR_25->actual, 4 };

   if (VAR_25->remote_data) {
    VAR_24 = FUNC_5(VAR_21->state, ((void*)0),
     VAR_27, &VAR_28, 1, 4, 0);
    if (VAR_24 != VAR_13)
     break;
   }
   VAR_22->remote_notify++;
  }
 } else {
  VAR_22->remote_notify = VAR_22->process;
 }

 if (VAR_24 == VAR_13) {
  while (VAR_22->remove != VAR_22->remote_notify) {
   VCHIQ_BULK_T *VAR_29 =
    &VAR_22->bulks[FUNC_0(VAR_22->remove)];



   if (VAR_29->data && VAR_21->instance) {
    if (VAR_29->actual != VAR_0) {
     if (VAR_29->dir == VAR_5) {
      FUNC_3(VAR_21,
       VAR_18);
      FUNC_2(VAR_21,
       VAR_17,
       VAR_29->actual);
     } else {
      FUNC_3(VAR_21,
       VAR_16);
      FUNC_2(VAR_21,
       VAR_15,
       VAR_29->actual);
     }
    } else {
     FUNC_3(VAR_21,
      VAR_14);
    }
    if (VAR_29->mode == VAR_1) {
     struct bulk_waiter *VAR_30;
     FUNC_7(&VAR_19);
     VAR_30 = VAR_29->userdata;
     if (VAR_30) {
      VAR_30->actual = VAR_29->actual;
      FUNC_9(&VAR_30->event);
     }
     FUNC_8(&VAR_19);
    } else if (VAR_29->mode ==
     VAR_2) {
     VCHIQ_REASON_T VAR_31 = (VAR_29->dir ==
      VAR_5) ?
      ((VAR_29->actual ==
      VAR_0) ?
      VAR_6 :
      VAR_7) :
      ((VAR_29->actual ==
      VAR_0) ?
      VAR_3 :
      VAR_4);
     VAR_24 = FUNC_4(VAR_21,
      VAR_31, ((void*)0), VAR_29->userdata);
     if (VAR_24 == VAR_12)
      break;
    }
   }

   VAR_22->remove++;
   FUNC_9(&VAR_21->bulk_remove_event);
  }
  if (!VAR_23)
   VAR_24 = VAR_13;
 }

 if (VAR_24 == VAR_12)
  FUNC_6(VAR_21->state, VAR_21,
   (VAR_22 == &VAR_21->bulk_tx) ?
   VAR_11 : VAR_10);

 return VAR_24;
}
