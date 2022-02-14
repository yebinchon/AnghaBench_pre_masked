
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int threadname ;
typedef int VCHIQ_STATUS_T ;
struct TYPE_15__ {int id; int is_master; int slot_queue_available; int default_slot_quota; int previous_data_index; int data_quota; int * sync_thread; int * recycle_thread; int * slot_handler_thread; int sync_release_event; int sync_trigger_event; int recycle_event; int trigger_event; scalar_t__ data_use_count; int default_message_quota; int slot_available_event; TYPE_4__* service_quotas; int data_quota_event; int slot_remove_event; int bulk_transfer_mutex; int sync_mutex; int recycle_mutex; int slot_mutex; int mutex; int connect; int * slot_data; TYPE_3__* remote; TYPE_3__* local; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_14__ {int * event; } ;
struct TYPE_17__ {int initialised; int slot_first; int slot_last; int* slot_queue; int slot_queue_recycle; int * debug; TYPE_10__ sync_release; int slot_sync; TYPE_10__ sync_trigger; TYPE_10__ recycle; scalar_t__ tx_pos; TYPE_10__ trigger; } ;
struct TYPE_16__ {scalar_t__ magic; scalar_t__ version; scalar_t__ version_min; int slot_zero_size; TYPE_3__ master; TYPE_3__ slave; int max_slots_per_side; int max_slots; int slot_size; } ;
typedef TYPE_2__ VCHIQ_SLOT_ZERO_T ;
typedef int VCHIQ_SLOT_T ;
typedef TYPE_3__ VCHIQ_SHARED_STATE_T ;
struct TYPE_18__ {int quota_event; } ;
typedef TYPE_4__ VCHIQ_SERVICE_QUOTA_T ;
struct TYPE_19__ {int msgid; } ;
typedef TYPE_5__ VCHIQ_HEADER_T ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (unsigned short,unsigned short) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (int *,int) ;
 int VAR_13 ;
 int FUNC_9 (char*,int,char*,int) ;
 int VAR_14 ;
 int FUNC_10 (int *) ;
 int VAR_15 ;
 int FUNC_11 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_1__** VAR_16 ;
 void* FUNC_16 (int *,void*,char*) ;
 int FUNC_17 (int *) ;

VCHIQ_STATUS_T
FUNC_18(VCHIQ_STATE_T *VAR_17, VCHIQ_SLOT_ZERO_T *VAR_18,
   int VAR_19)
{
 VCHIQ_SHARED_STATE_T *VAR_20;
 VCHIQ_SHARED_STATE_T *VAR_21;
 VCHIQ_STATUS_T VAR_22;
 char VAR_23[10];
 static int VAR_24;
 int VAR_25;



 if (VAR_18->magic != VAR_3) {
  FUNC_14();
  FUNC_12("Invalid VCHIQ magic value found.");
  FUNC_12("slot_zero=%x: magic=%x (expected %x)",
   (unsigned int)VAR_18, VAR_18->magic, VAR_3);
  FUNC_13();
  return VAR_2;
 }

 FUNC_11(VAR_15,
  "local ver %d (min %d), remote ver %d.",
  VAR_10, VAR_11,
  VAR_18->version);

 if (VAR_18->version < VAR_11) {
  FUNC_14();
  FUNC_12("Incompatible VCHIQ versions found.");
  FUNC_12("slot_zero=%x: VideoCore version=%d "
   "(minimum %d)",
   (unsigned int)VAR_18, VAR_18->version,
   VAR_11);
  FUNC_12("Restart with a newer VideoCore image.");
  FUNC_13();
  return VAR_2;
 }

 if (VAR_10 < VAR_18->version_min) {
  FUNC_14();
  FUNC_12("Incompatible VCHIQ versions found.");
  FUNC_12("slot_zero=%x: version=%d (VideoCore "
   "minimum %d)",
   (unsigned int)VAR_18, VAR_10,
   VAR_18->version_min);
  FUNC_12("Restart with a newer kernel.");
  FUNC_13();
  return VAR_2;
 }

 if ((VAR_18->slot_zero_size != sizeof(VCHIQ_SLOT_ZERO_T)) ||
   (VAR_18->slot_size != VAR_9) ||
   (VAR_18->max_slots != VAR_5) ||
   (VAR_18->max_slots_per_side != VAR_6)) {
  FUNC_14();
  if (VAR_18->slot_zero_size != sizeof(VCHIQ_SLOT_ZERO_T))
   FUNC_12("slot_zero=%x: slot_zero_size=%x "
    "(expected %zx)",
    (unsigned int)VAR_18,
    VAR_18->slot_zero_size,
    sizeof(VCHIQ_SLOT_ZERO_T));
  if (VAR_18->slot_size != VAR_9)
   FUNC_12("slot_zero=%x: slot_size=%d "
    "(expected %d",
    (unsigned int)VAR_18, VAR_18->slot_size,
    VAR_9);
  if (VAR_18->max_slots != VAR_5)
   FUNC_12("slot_zero=%x: max_slots=%d "
    "(expected %d)",
    (unsigned int)VAR_18, VAR_18->max_slots,
    VAR_5);
  if (VAR_18->max_slots_per_side != VAR_6)
   FUNC_12("slot_zero=%x: max_slots_per_side=%d "
    "(expected %d)",
    (unsigned int)VAR_18,
    VAR_18->max_slots_per_side,
    VAR_6);
  FUNC_13();
  return VAR_2;
 }

 if (VAR_10 < VAR_18->version)
  VAR_18->version = VAR_10;

 if (VAR_19) {
  VAR_20 = &VAR_18->master;
  VAR_21 = &VAR_18->slave;
 } else {
  VAR_20 = &VAR_18->slave;
  VAR_21 = &VAR_18->master;
 }

 if (VAR_20->initialised) {
  FUNC_14();
  if (VAR_21->initialised)
   FUNC_12("local state has already been "
    "initialised");
  else
   FUNC_12("master/slave mismatch - two %ss",
    VAR_19 ? "master" : "slave");
  FUNC_13();
  return VAR_2;
 }

 FUNC_4(VAR_17, 0, sizeof(VCHIQ_STATE_T));

 VAR_17->id = VAR_24++;
 VAR_17->is_master = VAR_19;





 VAR_17->local = VAR_20;
 VAR_17->remote = VAR_21;
 VAR_17->slot_data = (VCHIQ_SLOT_T *)VAR_18;





 FUNC_2(&VAR_17->connect, 0);
 FUNC_3(&VAR_17->mutex);
 FUNC_2(&VAR_17->trigger_event, 0);
 FUNC_2(&VAR_17->recycle_event, 0);
 FUNC_2(&VAR_17->sync_trigger_event, 0);
 FUNC_2(&VAR_17->sync_release_event, 0);

 FUNC_3(&VAR_17->slot_mutex);
 FUNC_3(&VAR_17->recycle_mutex);
 FUNC_3(&VAR_17->sync_mutex);
 FUNC_3(&VAR_17->bulk_transfer_mutex);

 FUNC_2(&VAR_17->slot_available_event, 0);
 FUNC_2(&VAR_17->slot_remove_event, 0);
 FUNC_2(&VAR_17->data_quota_event, 0);

 VAR_17->slot_queue_available = 0;

 for (VAR_25 = 0; VAR_25 < VAR_4; VAR_25++) {
  VCHIQ_SERVICE_QUOTA_T *VAR_26 =
   &VAR_17->service_quotas[VAR_25];
  FUNC_2(&VAR_26->quota_event, 0);
 }

 for (VAR_25 = VAR_20->slot_first; VAR_25 <= VAR_20->slot_last; VAR_25++) {
  VAR_20->slot_queue[VAR_17->slot_queue_available++] = VAR_25;
  FUNC_10(&VAR_17->slot_available_event);
 }

 VAR_17->default_slot_quota = VAR_17->slot_queue_available/2;
 VAR_17->default_message_quota =
  FUNC_5((unsigned short)(VAR_17->default_slot_quota * 256),
  (unsigned short)~0);

 VAR_17->previous_data_index = -1;
 VAR_17->data_use_count = 0;
 VAR_17->data_quota = VAR_17->slot_queue_available - 1;

 VAR_20->trigger.event = &VAR_17->trigger_event;
 FUNC_6(&VAR_20->trigger);
 VAR_20->tx_pos = 0;

 VAR_20->recycle.event = &VAR_17->recycle_event;
 FUNC_6(&VAR_20->recycle);
 VAR_20->slot_queue_recycle = VAR_17->slot_queue_available;

 VAR_20->sync_trigger.event = &VAR_17->sync_trigger_event;
 FUNC_6(&VAR_20->sync_trigger);

 VAR_20->sync_release.event = &VAR_17->sync_release_event;
 FUNC_6(&VAR_20->sync_release);


 ((VCHIQ_HEADER_T *)FUNC_1(VAR_17, VAR_20->slot_sync))->msgid
  = VAR_8;
 FUNC_7(&VAR_20->sync_release);

 VAR_20->debug[VAR_0] = VAR_1;

 VAR_22 = FUNC_15(VAR_17);




 FUNC_9(VAR_23, sizeof(VAR_23), "VCHIQ-%d", VAR_17->id);
 VAR_17->slot_handler_thread = FUNC_16(&VAR_13,
  (void *)VAR_17,
  VAR_23);

 if (VAR_17->slot_handler_thread == ((void*)0)) {
  FUNC_14();
  FUNC_12("couldn't create thread %s", VAR_23);
  FUNC_13();
  return VAR_2;
 }
 FUNC_8(VAR_17->slot_handler_thread, -19);
 FUNC_17(VAR_17->slot_handler_thread);

 FUNC_9(VAR_23, sizeof(VAR_23), "VCHIQr-%d", VAR_17->id);
 VAR_17->recycle_thread = FUNC_16(&VAR_12,
  (void *)VAR_17,
  VAR_23);
 if (VAR_17->recycle_thread == ((void*)0)) {
  FUNC_14();
  FUNC_12("couldn't create thread %s", VAR_23);
  FUNC_13();
  return VAR_2;
 }
 FUNC_8(VAR_17->recycle_thread, -19);
 FUNC_17(VAR_17->recycle_thread);

 FUNC_9(VAR_23, sizeof(VAR_23), "VCHIQs-%d", VAR_17->id);
 VAR_17->sync_thread = FUNC_16(&VAR_14,
  (void *)VAR_17,
  VAR_23);
 if (VAR_17->sync_thread == ((void*)0)) {
  FUNC_14();
  FUNC_12("couldn't create thread %s", VAR_23);
  FUNC_13();
  return VAR_2;
 }
 FUNC_8(VAR_17->sync_thread, -20);
 FUNC_17(VAR_17->sync_thread);

 FUNC_0(VAR_17->id >= VAR_7);
 VAR_16[VAR_17->id] = VAR_17;


 VAR_20->initialised = 1;

 return VAR_22;
}
