
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int slot_queue_available; int data_use_count; int data_quota; int slot_available_event; int data_quota_event; int id; TYPE_3__* service_quotas; TYPE_2__* local; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_8__ {int slot_queue_recycle; int* slot_queue; } ;
typedef TYPE_2__ VCHIQ_SHARED_STATE_T ;
struct TYPE_9__ {int message_use_count; int message_quota; int slot_use_count; int quota_event; } ;
typedef TYPE_3__ VCHIQ_SERVICE_QUOTA_T ;
struct TYPE_10__ {int msgid; unsigned int size; } ;
typedef TYPE_4__ VCHIQ_HEADER_T ;
typedef int BITSET_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 () ;
 int VAR_4 ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int FUNC_14 (int ,char*,unsigned int,unsigned int,int,int,unsigned int,...) ;
 int FUNC_15 (int ,char*,int ,int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_16(VCHIQ_STATE_T *VAR_6)
{
 VCHIQ_SHARED_STATE_T *VAR_7 = VAR_6->local;
 BITSET_T VAR_8[FUNC_2(VAR_0)];
 int VAR_9;



 VAR_9 = VAR_6->slot_queue_available;




 FUNC_9();

 while (VAR_9 != VAR_7->slot_queue_recycle) {
  unsigned int VAR_10;
  int VAR_11 = VAR_7->slot_queue[VAR_9++ &
   VAR_2];
  char *VAR_12 = (char *)FUNC_4(VAR_6, VAR_11);
  int VAR_13 = 0;

  FUNC_10();

  FUNC_15(VAR_5, "%d: pfq %d=%x %x %x",
   VAR_6->id, VAR_11, (unsigned int)VAR_12,
   VAR_7->slot_queue_recycle, VAR_9);



  FUNC_3(VAR_8);

  VAR_10 = 0;

  while (VAR_10 < VAR_3) {
   VCHIQ_HEADER_T *VAR_14 =
    (VCHIQ_HEADER_T *)(VAR_12 + VAR_10);
   int VAR_15 = VAR_14->msgid;
   if (FUNC_6(VAR_15) == VAR_1) {
    int VAR_16 = FUNC_5(VAR_15);
    VCHIQ_SERVICE_QUOTA_T *VAR_17 =
     &VAR_6->service_quotas[VAR_16];
    int VAR_18;
    FUNC_11(&VAR_4);
    VAR_18 = VAR_17->message_use_count;
    if (VAR_18 > 0)
     VAR_17->message_use_count =
      VAR_18 - 1;
    FUNC_12(&VAR_4);

    if (VAR_18 == VAR_17->message_quota)



     FUNC_13(&VAR_17->quota_event);
    else if (VAR_18 == 0) {
     FUNC_14(VAR_5,
      "service %d "
      "message_use_count=%d "
      "(header %x, msgid %x, "
      "header->msgid %x, "
      "header->size %x)",
      VAR_16,
      VAR_17->
       message_use_count,
      (unsigned int)VAR_14, VAR_15,
      VAR_14->msgid,
      VAR_14->size);
     FUNC_7(1, "invalid message use count\n");
    }
    if (!FUNC_0(VAR_8, VAR_16)) {

     FUNC_1(VAR_8, VAR_16);

     FUNC_11(&VAR_4);
     VAR_18 = VAR_17->slot_use_count;
     if (VAR_18 > 0)
      VAR_17->slot_use_count =
       VAR_18 - 1;
     FUNC_12(&VAR_4);

     if (VAR_18 > 0) {



      FUNC_13(&VAR_17->quota_event);
      FUNC_15(
       VAR_5,
       "%d: pfq:%d %x@%x - "
       "slot_use->%d",
       VAR_6->id, VAR_16,
       VAR_14->size,
       (unsigned int)VAR_14,
       VAR_18 - 1);
     } else {
      FUNC_14(
       VAR_5,
        "service %d "
        "slot_use_count"
        "=%d (header %x"
        ", msgid %x, "
        "header->msgid"
        " %x, header->"
        "size %x)",
       VAR_16, VAR_18,
       (unsigned int)VAR_14,
       VAR_15,
       VAR_14->msgid,
       VAR_14->size);
      FUNC_7(1, "bad slot use count\n");
     }
    }

    VAR_13 = 1;
   }

   VAR_10 += FUNC_8(VAR_14->size);
   if (VAR_10 > VAR_3) {
    FUNC_14(VAR_5,
     "pfq - pos %x: header %x, msgid %x, "
     "header->msgid %x, header->size %x",
     VAR_10, (unsigned int)VAR_14, VAR_15,
     VAR_14->msgid, VAR_14->size);
    FUNC_7(1, "invalid slot position\n");
   }
  }

  if (VAR_13) {
   int VAR_19;
   FUNC_11(&VAR_4);
   VAR_19 = VAR_6->data_use_count;
   if (VAR_19 > 0)
    VAR_6->data_use_count =
     VAR_19 - 1;
   FUNC_12(&VAR_4);
   if (VAR_19 == VAR_6->data_quota)
    FUNC_13(&VAR_6->data_quota_event);
  }

  FUNC_9();

  VAR_6->slot_queue_available = VAR_9;
  FUNC_13(&VAR_6->slot_available_event);
 }
}
