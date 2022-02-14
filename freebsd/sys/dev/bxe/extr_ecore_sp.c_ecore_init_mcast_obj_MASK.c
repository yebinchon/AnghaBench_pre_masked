
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int macs; } ;
struct TYPE_4__ {TYPE_1__ exact_match; } ;
struct ecore_mcast_obj {int max_cmd_len; void* set_registry_size; void* get_registry_size; int revert; int validate; int * set_one_rule; void* wait_comp; void* check_pending; int * hdl_restore; int * enqueue_cmd; int config_mcast; TYPE_2__ registry; int clear_sched; int set_sched; int check_sched; int sched_state; int pending_cmds_head; int engine_id; int raw; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ecore_mcast_obj*,int ,int) ;
 int FUNC_5 (int *,int ,int ,int ,void*,int ,int,unsigned long*,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;

void FUNC_6(struct bxe_softc *VAR_26,
     struct ecore_mcast_obj *VAR_27,
     uint8_t VAR_28, uint32_t VAR_29, uint8_t VAR_30,
     uint8_t VAR_31, void *VAR_32, ecore_dma_addr_t VAR_33,
     int VAR_34, unsigned long *VAR_35, ecore_obj_type VAR_36)
{
 FUNC_4(VAR_27, 0, sizeof(*VAR_27));

 FUNC_5(&VAR_27->raw, VAR_28, VAR_29, VAR_30,
      VAR_32, VAR_33, VAR_34, VAR_35, VAR_36);

 VAR_27->engine_id = VAR_31;

 FUNC_3(&VAR_27->pending_cmds_head);

 VAR_27->sched_state = VAR_0;
 VAR_27->check_sched = VAR_4;
 VAR_27->set_sched = VAR_18;
 VAR_27->clear_sched = VAR_5;

 if (FUNC_0(VAR_26)) {
  VAR_27->config_mcast = VAR_19;
  VAR_27->enqueue_cmd = VAR_6;
  VAR_27->hdl_restore =
   VAR_9;
  VAR_27->check_pending = VAR_3;

  if (FUNC_2(VAR_26))
   VAR_27->max_cmd_len = VAR_1;
  else
   VAR_27->max_cmd_len = VAR_2;

  VAR_27->wait_comp = VAR_25;
  VAR_27->set_one_rule = VAR_14;
  VAR_27->validate = VAR_22;
  VAR_27->revert = VAR_11;
  VAR_27->get_registry_size =
   VAR_8;
  VAR_27->set_registry_size =
   VAR_17;




  FUNC_3(&VAR_27->registry.exact_match.macs);

 } else if (FUNC_1(VAR_26)) {
  VAR_27->config_mcast = VAR_20;
  VAR_27->enqueue_cmd = ((void*)0);
  VAR_27->hdl_restore = ((void*)0);
  VAR_27->check_pending = VAR_3;




  VAR_27->max_cmd_len = -1;
  VAR_27->wait_comp = VAR_25;
  VAR_27->set_one_rule = ((void*)0);
  VAR_27->validate = VAR_23;
  VAR_27->revert = VAR_12;
  VAR_27->get_registry_size =
   VAR_7;
  VAR_27->set_registry_size =
   VAR_16;
 } else {
  VAR_27->config_mcast = VAR_21;
  VAR_27->enqueue_cmd = VAR_6;
  VAR_27->hdl_restore =
   VAR_10;
  VAR_27->check_pending = VAR_3;


  VAR_27->max_cmd_len = 16;
  VAR_27->wait_comp = VAR_25;
  VAR_27->set_one_rule = VAR_15;
  VAR_27->validate = VAR_24;
  VAR_27->revert = VAR_13;
  VAR_27->get_registry_size =
   VAR_7;
  VAR_27->set_registry_size =
   VAR_16;
 }
}
