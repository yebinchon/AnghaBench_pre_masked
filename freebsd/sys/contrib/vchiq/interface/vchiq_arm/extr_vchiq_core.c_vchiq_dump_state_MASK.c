
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int buf ;
struct TYPE_7__ {int ctrl_tx_count; int ctrl_rx_count; int error_count; int slot_stalls; int data_stalls; } ;
struct TYPE_8__ {int id; size_t conn_state; int local_tx_pos; int rx_pos; int slot_queue_available; int data_quota; int data_use_count; int unused_service; TYPE_5__* remote; TYPE_5__* local; TYPE_1__ stats; scalar_t__ rx_data; scalar_t__ tx_data; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
typedef int VCHIQ_SERVICE_T ;
struct TYPE_9__ {int tx_pos; int slot_queue_recycle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int * FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,char*,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (void*,TYPE_2__*,TYPE_5__*,char*) ;

void
FUNC_8(void *VAR_6, VCHIQ_STATE_T *VAR_7)
{
 char VAR_8[80];
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8), "State %d: %s", VAR_7->id,
  VAR_5[VAR_7->conn_state]);
 FUNC_3(VAR_6, VAR_8, VAR_9 + 1);

 VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8),
  "  tx_pos=%x(@%x), rx_pos=%x(@%x)",
  VAR_7->local->tx_pos,
  (uint32_t)VAR_7->tx_data +
   (VAR_7->local_tx_pos & VAR_1),
  VAR_7->rx_pos,
  (uint32_t)VAR_7->rx_data +
   (VAR_7->rx_pos & VAR_1));
 FUNC_3(VAR_6, VAR_8, VAR_9 + 1);

 VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8),
  "  Version: %d (min %d)",
  VAR_3, VAR_4);
 FUNC_3(VAR_6, VAR_8, VAR_9 + 1);

 if (VAR_0) {
  VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8),
   "  Stats: ctrl_tx_count=%d, ctrl_rx_count=%d, "
   "error_count=%d",
   VAR_7->stats.ctrl_tx_count, VAR_7->stats.ctrl_rx_count,
   VAR_7->stats.error_count);
  FUNC_3(VAR_6, VAR_8, VAR_9 + 1);
 }

 VAR_9 = FUNC_1(VAR_8, sizeof(VAR_8),
  "  Slots: %d available (%d data), %d recyclable, %d stalls "
  "(%d data)",
  ((VAR_7->slot_queue_available * VAR_2) -
   VAR_7->local_tx_pos) / VAR_2,
  VAR_7->data_quota - VAR_7->data_use_count,
  VAR_7->local->slot_queue_recycle - VAR_7->slot_queue_available,
  VAR_7->stats.slot_stalls, VAR_7->stats.data_stalls);
 FUNC_3(VAR_6, VAR_8, VAR_9 + 1);

 FUNC_5(VAR_6);

 FUNC_7(VAR_6, VAR_7, VAR_7->local, "Local");
 FUNC_7(VAR_6, VAR_7, VAR_7->remote, "Remote");

 FUNC_4(VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_7->unused_service; VAR_10++) {
  VCHIQ_SERVICE_T *VAR_11 = FUNC_0(VAR_7, VAR_10);

  if (VAR_11) {
   FUNC_6(VAR_6, VAR_11);
   FUNC_2(VAR_11);
  }
 }
}
