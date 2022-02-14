
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_17__ {int sync_mutex; TYPE_2__* remote; int id; TYPE_4__* local; } ;
typedef TYPE_3__ VCHIQ_STATE_T ;
struct TYPE_18__ {int slot_sync; int sync_release; } ;
typedef TYPE_4__ VCHIQ_SHARED_STATE_T ;
struct TYPE_15__ {int fourcc; } ;
struct TYPE_19__ {TYPE_1__ base; } ;
typedef TYPE_5__ VCHIQ_SERVICE_T ;
struct TYPE_20__ {int msgid; int size; scalar_t__ data; } ;
typedef TYPE_6__ VCHIQ_HEADER_T ;
struct TYPE_21__ {int size; int data; } ;
typedef TYPE_7__ VCHIQ_ELEMENT_T ;
struct TYPE_16__ {int sync_trigger; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int ,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (scalar_t__,int ,size_t) ;
 int VAR_10 ;
 int FUNC_19 (char*,int ,scalar_t__,int ) ;
 int FUNC_20 (int ,char*,int ,int) ;
 int FUNC_21 (scalar_t__,char*,int ,int ,unsigned int,int,int ,int ) ;
 int FUNC_22 (scalar_t__,char*,int ,scalar_t__,int ,int ,int ,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_23 () ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_24(VCHIQ_STATE_T *VAR_12, VCHIQ_SERVICE_T *VAR_13,
 int VAR_14, const VCHIQ_ELEMENT_T *VAR_15,
 int VAR_16, int VAR_17, int VAR_18)
{
 VCHIQ_SHARED_STATE_T *VAR_19;
 VCHIQ_HEADER_T *VAR_20;

 VAR_19 = VAR_12->local;

 if ((FUNC_5(VAR_14) != VAR_4) &&
  (FUNC_10(&VAR_12->sync_mutex) != 0))
  return VAR_5;

 FUNC_16(&VAR_19->sync_release);

 FUNC_17();

 VAR_20 = (VCHIQ_HEADER_T *)FUNC_0(VAR_12,
  VAR_19->slot_sync);

 {
  int VAR_21 = VAR_20->msgid;
  if (VAR_21 != VAR_2)
   FUNC_20(VAR_10,
    "%d: qms - msgid %x, not PADDING",
    VAR_12->id, VAR_21);
 }

 if (VAR_13) {
  int VAR_22, VAR_23;

  FUNC_21(VAR_11,
   "%d: qms %s@%x,%x (%d->%d)", VAR_12->id,
   FUNC_14(FUNC_5(VAR_14)),
   (unsigned int)VAR_20, VAR_17,
   FUNC_4(VAR_14),
   FUNC_3(VAR_14));

  for (VAR_22 = 0, VAR_23 = 0; VAR_22 < (unsigned int)VAR_16;
   VAR_23 += VAR_15[VAR_22++].size)
   if (VAR_15[VAR_22].size) {
    if (FUNC_18
     (VAR_20->data + VAR_23, VAR_15[VAR_22].data,
     (size_t) VAR_15[VAR_22].size) !=
     VAR_6) {
     FUNC_11(&VAR_12->sync_mutex);
     FUNC_7(VAR_13,
      VAR_9);
     return VAR_0;
    }
   }

  if (VAR_11 >= VAR_1)
   FUNC_19("Sent Sync",
    0, VAR_20->data,
    FUNC_13(16, VAR_23));

  FUNC_7(VAR_13, VAR_8);
  FUNC_6(VAR_13, VAR_7, VAR_17);
 } else {
  FUNC_21(VAR_11,
   "%d: qms %s@%x,%x (%d->%d)", VAR_12->id,
   FUNC_14(FUNC_5(VAR_14)),
   (unsigned int)VAR_20, VAR_17,
   FUNC_4(VAR_14),
   FUNC_3(VAR_14));
  if (VAR_17 != 0) {
   FUNC_9(!((VAR_16 == 1) && (VAR_17 == VAR_15[0].size)));
   FUNC_12(VAR_20->data, VAR_15[0].data,
    VAR_15[0].size);
  }
  FUNC_8(VAR_12, VAR_8);
 }

 VAR_20->size = VAR_17;
 VAR_20->msgid = VAR_14;

 if (VAR_11 >= VAR_1) {
  int VAR_24;

  VAR_24 = VAR_13
   ? VAR_13->base.fourcc
   : FUNC_2('?', '?', '?', '?');

  FUNC_22(VAR_11,
   "Sent Sync Msg %s(%u) to %c%c%c%c s:%u d:%d len:%d",
   FUNC_14(FUNC_5(VAR_14)),
   FUNC_5(VAR_14),
   FUNC_1(VAR_24),
   FUNC_4(VAR_14),
   FUNC_3(VAR_14),
   VAR_17);
 }


 FUNC_23();

 FUNC_15(&VAR_12->remote->sync_trigger);

 if (FUNC_5(VAR_14) != VAR_3)
  FUNC_11(&VAR_12->sync_mutex);

 return VAR_6;
}
