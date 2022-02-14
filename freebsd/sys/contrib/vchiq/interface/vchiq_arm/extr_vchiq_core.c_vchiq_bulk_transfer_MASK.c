
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct bulk_waiter {scalar_t__ actual; int event; TYPE_4__* bulk; } ;
typedef int payload ;
typedef int VCHI_MEM_HANDLE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_18__ {int slot_mutex; int id; scalar_t__ is_master; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_22__ {scalar_t__ local_insert; scalar_t__ remove; int process; int remote_insert; TYPE_4__* bulks; } ;
struct TYPE_19__ {scalar_t__ srvstate; int bulk_mutex; int localport; int remoteport; int bulk_remove_event; TYPE_5__ bulk_rx; TYPE_5__ bulk_tx; TYPE_1__* state; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_20__ {int* member_0; int member_1; } ;
typedef TYPE_3__ VCHIQ_ELEMENT_T ;
struct TYPE_21__ {int mode; int size; scalar_t__ data; scalar_t__ actual; void* userdata; int dir; } ;
typedef TYPE_4__ VCHIQ_BULK_T ;
typedef TYPE_5__ VCHIQ_BULK_QUEUE_T ;
typedef int VCHIQ_BULK_MODE_T ;
typedef int VCHIQ_BULK_DIR_T ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int const,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int *,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int ,TYPE_3__*,int,int,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int VAR_16 ;
 int FUNC_14 (int ,char*,int ,int ,int ,char const,int,unsigned int,unsigned int) ;
 int FUNC_15 (int ,char*,int ,int ,char const,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int ,void*,int,int ) ;
 int FUNC_17 () ;

VCHIQ_STATUS_T
FUNC_18(VCHIQ_SERVICE_HANDLE_T VAR_17,
 VCHI_MEM_HANDLE_T VAR_18, void *VAR_19, int VAR_20, void *VAR_21,
 VCHIQ_BULK_MODE_T VAR_22, VCHIQ_BULK_DIR_T VAR_23)
{
 VCHIQ_SERVICE_T *VAR_24 = FUNC_5(VAR_17);
 VCHIQ_BULK_QUEUE_T *VAR_25;
 VCHIQ_BULK_T *VAR_26;
 VCHIQ_STATE_T *VAR_27;
 struct bulk_waiter *VAR_28 = ((void*)0);
 const char VAR_29 = (VAR_23 == VAR_4) ? 't' : 'r';
 const int VAR_30 = (VAR_23 == VAR_4) ?
  VAR_7 : VAR_6;
 VCHIQ_STATUS_T VAR_31 = VAR_5;

 if (!VAR_24 ||
   (VAR_24->srvstate != VAR_12) ||
   ((VAR_18 == VAR_14) && (VAR_19 == ((void*)0))) ||
   (FUNC_12(VAR_24) != VAR_13))
  goto error_exit;

 switch (VAR_22) {
 case 129:
 case 130:
  break;
 case 131:
  VAR_28 = (struct bulk_waiter *)VAR_21;
  FUNC_3(&VAR_28->event, 0);
  VAR_28->actual = 0;
  VAR_28->bulk = ((void*)0);
  break;
 case 128:
  VAR_28 = (struct bulk_waiter *)VAR_21;
  VAR_26 = VAR_28->bulk;
  goto waiting;
 default:
  goto error_exit;
 }

 VAR_27 = VAR_24->state;

 VAR_25 = (VAR_23 == VAR_4) ?
  &VAR_24->bulk_tx : &VAR_24->bulk_rx;

 if (FUNC_6(&VAR_24->bulk_mutex) != 0) {
  VAR_31 = VAR_11;
  goto error_exit;
 }

 if (VAR_25->local_insert == VAR_25->remove + VAR_8) {
  FUNC_2(VAR_24, VAR_15);
  do {
   FUNC_7(&VAR_24->bulk_mutex);
   if (FUNC_4(&VAR_24->bulk_remove_event)
    != 0) {
    VAR_31 = VAR_11;
    goto error_exit;
   }
   if (FUNC_6(&VAR_24->bulk_mutex)
    != 0) {
    VAR_31 = VAR_11;
    goto error_exit;
   }
  } while (VAR_25->local_insert == VAR_25->remove +
    VAR_8);
 }

 VAR_26 = &VAR_25->bulks[FUNC_0(VAR_25->local_insert)];

 VAR_26->mode = VAR_22;
 VAR_26->dir = VAR_23;
 VAR_26->userdata = VAR_21;
 VAR_26->size = VAR_20;
 VAR_26->actual = VAR_3;

 if (FUNC_16(VAR_26, VAR_18, VAR_19, VAR_20, VAR_23) !=
  VAR_13)
  goto unlock_error_exit;

 FUNC_17();

 FUNC_14(VAR_16,
  "%d: bt (%d->%d) %cx %x@%x %x",
  VAR_27->id,
  VAR_24->localport, VAR_24->remoteport, VAR_29,
  VAR_20, (unsigned int)VAR_26->data, (unsigned int)VAR_21);



 if (FUNC_6(&VAR_27->slot_mutex) != 0) {
  VAR_31 = VAR_11;
  goto cancel_bulk_error_exit;
 }

 if (VAR_24->srvstate != VAR_12)
  goto unlock_both_error_exit;

 if (VAR_27->is_master) {
  VAR_25->local_insert++;
  if (FUNC_10(VAR_24, VAR_25))
   FUNC_9(VAR_27, VAR_24,
    (VAR_23 == VAR_4) ?
    VAR_10 : VAR_9);
 } else {
  int VAR_32[2] = { (int)VAR_26->data, VAR_26->size };
  VCHIQ_ELEMENT_T VAR_33 = { VAR_32, sizeof(VAR_32) };

  VAR_31 = FUNC_8(VAR_27, ((void*)0),
   FUNC_1(VAR_30,
    VAR_24->localport, VAR_24->remoteport),
   &VAR_33, 1, sizeof(VAR_32),
   VAR_0 |
   VAR_1 |
   VAR_2);
  if (VAR_31 != VAR_13) {
   goto unlock_both_error_exit;
  }
  VAR_25->local_insert++;
 }

 FUNC_7(&VAR_27->slot_mutex);
 FUNC_7(&VAR_24->bulk_mutex);

 FUNC_15(VAR_16,
  "%d: bt:%d %cx li=%x ri=%x p=%x",
  VAR_27->id,
  VAR_24->localport, VAR_29,
  VAR_25->local_insert, VAR_25->remote_insert, VAR_25->process);

waiting:
 FUNC_11(VAR_24);

 VAR_31 = VAR_13;

 if (VAR_28) {
  VAR_28->bulk = VAR_26;
  if (FUNC_4(&VAR_28->event) != 0)
   VAR_31 = VAR_11;
  else if (VAR_28->actual == VAR_3)
   VAR_31 = VAR_5;
 }

 return VAR_31;

unlock_both_error_exit:
 FUNC_7(&VAR_27->slot_mutex);
cancel_bulk_error_exit:
 FUNC_13(VAR_26);
unlock_error_exit:
 FUNC_7(&VAR_24->bulk_mutex);

error_exit:
 if (VAR_24)
  FUNC_11(VAR_24);
 return VAR_31;
}
