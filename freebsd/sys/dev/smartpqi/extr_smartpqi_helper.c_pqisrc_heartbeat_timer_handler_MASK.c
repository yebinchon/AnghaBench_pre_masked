
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ prev_heartbeat_count; scalar_t__ prev_num_intrs; scalar_t__ num_heartbeats_requested; TYPE_1__* pending_events; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_9__ {int pending; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(pqisrc_softstate_t *VAR_2)
{
 uint64_t VAR_3;
 uint8_t VAR_4 = 0;

 FUNC_2("IN\n");

 VAR_3 = FUNC_4(VAR_2, VAR_3);

 if (FUNC_5(VAR_2)) {
  if (FUNC_0(VAR_2) == VAR_2->prev_heartbeat_count) {
   VAR_4 = 1;
   goto take_ctrl_offline;
  }
  VAR_2->prev_heartbeat_count = FUNC_0(VAR_2);
  FUNC_3("CTRLR_HEARTBEAT_CNT(softs)  = %lx 		softs->prev_heartbeat_count = %lx\n",

  FUNC_0(VAR_2), VAR_2->prev_heartbeat_count);
 } else {
  if (VAR_3 == VAR_2->prev_num_intrs) {
   VAR_2->num_heartbeats_requested++;
   if (VAR_2->num_heartbeats_requested > VAR_1) {
    VAR_4 = 1;
    goto take_ctrl_offline;
   }
   VAR_2->pending_events[VAR_0].pending = 1;

   FUNC_7((void*)VAR_2);

  } else {
   VAR_2->num_heartbeats_requested = 0;
  }
  VAR_2->prev_num_intrs = VAR_3;
 }

take_ctrl_offline:
 if (VAR_4){
  FUNC_1("controller is offline\n");
  FUNC_8(VAR_2);
  FUNC_6(VAR_2);
 }
 FUNC_2("OUT\n");
}
