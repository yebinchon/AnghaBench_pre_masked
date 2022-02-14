
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct vchiq_openack_payload {int version; } ;
struct TYPE_18__ {int id; TYPE_1__* remote; TYPE_4__* local; } ;
typedef TYPE_3__ VCHIQ_STATE_T ;
struct TYPE_19__ {int sync_trigger; } ;
typedef TYPE_4__ VCHIQ_SHARED_STATE_T ;
struct TYPE_17__ {int fourcc; } ;
struct TYPE_20__ {unsigned int remoteport; int sync; int srvstate; int remove_event; int peer_version; TYPE_2__ base; } ;
typedef TYPE_5__ VCHIQ_SERVICE_T ;
struct TYPE_21__ {int msgid; int size; scalar_t__ data; } ;
typedef TYPE_6__ VCHIQ_HEADER_T ;
struct TYPE_16__ {int slot_sync; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_1 ;

 unsigned int FUNC_3 (int) ;

 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_6 (TYPE_3__*,unsigned int) ;
 int FUNC_7 (TYPE_5__*,int ,TYPE_6__*,int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ,scalar_t__,int ) ;
 int FUNC_16 (scalar_t__,char*,unsigned int,...) ;
 int FUNC_17 (scalar_t__,char*,int ,unsigned int,int,unsigned int,unsigned int,int ) ;
 int FUNC_18 (scalar_t__,char*,int ,unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_19 (TYPE_5__*,int ) ;
 scalar_t__ VAR_5 ;

int
FUNC_20(void *VAR_6)
{
 VCHIQ_STATE_T *VAR_7 = (VCHIQ_STATE_T *) VAR_6;
 VCHIQ_SHARED_STATE_T *VAR_8 = VAR_7->local;
 VCHIQ_HEADER_T *VAR_9 = (VCHIQ_HEADER_T *)FUNC_0(VAR_7,
  VAR_7->remote->slot_sync);

 while (1) {
  VCHIQ_SERVICE_T *VAR_10;
  int VAR_11, VAR_12;
  int VAR_13;
  unsigned int VAR_14, VAR_15;

  FUNC_11(&VAR_8->sync_trigger);

  FUNC_12();

  VAR_11 = VAR_9->msgid;
  VAR_12 = VAR_9->size;
  VAR_13 = FUNC_5(VAR_11);
  VAR_14 = FUNC_3(VAR_11);
  VAR_15 = FUNC_4(VAR_11);

  VAR_10 = FUNC_6(VAR_7, VAR_14);

  if (!VAR_10) {
   FUNC_16(VAR_5,
    "%d: sf %s@%x (%d->%d) - "
    "invalid/closed service %d",
    VAR_7->id, FUNC_9(VAR_13),
    (unsigned int)VAR_9,
    VAR_15, VAR_14, VAR_14);
   FUNC_10(VAR_7, VAR_9);
   continue;
  }

  if (VAR_5 >= VAR_0) {
   int VAR_16;

   VAR_16 = VAR_10
    ? VAR_10->base.fourcc
    : FUNC_2('?', '?', '?', '?');
   FUNC_18(VAR_5,
    "Rcvd Msg %s from %c%c%c%c s:%d d:%d len:%d",
    FUNC_9(VAR_13),
    FUNC_1(VAR_16),
    VAR_15, VAR_14, VAR_12);
   if (VAR_12 > 0)
    FUNC_15("Rcvd", 0, VAR_9->data,
     FUNC_8(16, VAR_12));
  }

  switch (VAR_13) {
  case 128:
   if (VAR_12 >= sizeof(struct vchiq_openack_payload)) {
    const struct vchiq_openack_payload *VAR_17 =
     (struct vchiq_openack_payload *)
     VAR_9->data;
    VAR_10->peer_version = VAR_17->version;
   }
   FUNC_17(VAR_5,
    "%d: sf OPENACK@%x,%x (%d->%d) v:%d",
    VAR_7->id, (unsigned int)VAR_9, VAR_12,
    VAR_15, VAR_14, VAR_10->peer_version);
   if (VAR_10->srvstate == VAR_3) {
    VAR_10->remoteport = VAR_15;
    FUNC_19(VAR_10,
     VAR_4);
    VAR_10->sync = 1;
    FUNC_14(&VAR_10->remove_event);
   }
   FUNC_10(VAR_7, VAR_9);
   break;

  case 129:
   FUNC_18(VAR_5,
    "%d: sf DATA@%x,%x (%d->%d)",
    VAR_7->id, (unsigned int)VAR_9, VAR_12,
    VAR_15, VAR_14);

   if ((VAR_10->remoteport == VAR_15) &&
    (VAR_10->srvstate ==
    VAR_4)) {
    if (FUNC_7(VAR_10,
     VAR_1, VAR_9,
     ((void*)0)) == VAR_2)
     FUNC_16(VAR_5,
      "synchronous callback to "
      "service %d returns "
      "VCHIQ_RETRY",
      VAR_14);
   }
   break;

  default:
   FUNC_16(VAR_5,
    "%d: sf unexpected msgid %x@%x,%x",
    VAR_7->id, VAR_11, (unsigned int)VAR_9, VAR_12);
   FUNC_10(VAR_7, VAR_9);
   break;
  }

  FUNC_13(VAR_10);
 }

 return 0;
}
