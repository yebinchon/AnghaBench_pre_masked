
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef size_t uint32_t ;
typedef int sli4_port_type_e ;
typedef int prop_buf ;
typedef int ocs_os_handle_t ;
struct TYPE_15__ {scalar_t__ n_eq; scalar_t__ n_cq; scalar_t__ n_rq; scalar_t__ n_wq; scalar_t__ n_mq; int queue_topology; int dif_mode; void* i_only_aab; int auto_xfer_rdy_xri_cnt; int n_io; int rq_default_buffer_size; int auto_xfer_rdy_app_tag_value; int auto_xfer_rdy_app_tag_valid; int auto_xfer_rdy_ref_tag_is_lba; int auto_xfer_rdy_blk_size_chip; scalar_t__ dif_seed; int speed; } ;
struct TYPE_16__ {scalar_t__ use_dif_sec_xri; scalar_t__ override_fcfi; } ;
struct TYPE_17__ {int first_domain_idx; int ulp_start; int ulp_max; int os; TYPE_1__ config; TYPE_9__* qtop; int sli; int sec_hio_wait_list; TYPE_2__ workaround; int * num_qentries; struct TYPE_17__* fcf_index_fcfi; struct TYPE_17__* domains; int io_alloc_failed_count; int io_abort_lock; int io_lock; scalar_t__ cmd_head_count; int cmd_pending; int cmd_head; int cmd_lock; void* hw_setup_called; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_18__ {scalar_t__* entry_counts; } ;
struct TYPE_14__ {int queue_topology_string; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 TYPE_13__ VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int *,int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_9__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int *,char*,int ) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int ,char*,int,int) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (TYPE_3__*,int ,int) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (int *,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int) ;
 int FUNC_21 (int *,size_t) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,int ,int ) ;

ocs_hw_rtn_e
FUNC_25(ocs_hw_t *VAR_30, ocs_os_handle_t VAR_31, sli4_port_type_e VAR_32)
{
 uint32_t VAR_33;
 char VAR_34[32];

 if (VAR_30 == ((void*)0)) {
  FUNC_13(VAR_31, "bad parameter(s) hw=%p\n", VAR_30);
  return VAR_12;
 }

 if (VAR_30->hw_setup_called) {



  FUNC_7(VAR_30);
  return VAR_13;
 }






 FUNC_15(VAR_30, 0, sizeof(ocs_hw_t));

 VAR_30->hw_setup_called = VAR_23;

 VAR_30->os = VAR_31;

 FUNC_10(VAR_30->os, &VAR_30->cmd_lock, "HW_cmd_lock[%d]", FUNC_8(VAR_30->os));
 FUNC_9(&VAR_30->cmd_head, VAR_26, VAR_25);
 FUNC_9(&VAR_30->cmd_pending, VAR_26, VAR_25);
 VAR_30->cmd_head_count = 0;

 FUNC_10(VAR_30->os, &VAR_30->io_lock, "HW_io_lock[%d]", FUNC_8(VAR_30->os));
 FUNC_10(VAR_30->os, &VAR_30->io_abort_lock, "HW_io_abort_lock[%d]", FUNC_8(VAR_30->os));

 FUNC_1(&VAR_30->io_alloc_failed_count, 0);

 VAR_30->config.speed = VAR_0;
 VAR_30->config.dif_seed = 0;
 VAR_30->config.auto_xfer_rdy_blk_size_chip = VAR_4;
 VAR_30->config.auto_xfer_rdy_ref_tag_is_lba = VAR_5;
 VAR_30->config.auto_xfer_rdy_app_tag_valid = VAR_2;
 VAR_30->config.auto_xfer_rdy_app_tag_value = VAR_3;


 if (FUNC_24(&VAR_30->sli, VAR_30->os, VAR_32)) {
  FUNC_13(VAR_30->os, "SLI setup failed\n");
  return VAR_12;
 }

 FUNC_15(VAR_30->domains, 0, sizeof(VAR_30->domains));

 FUNC_15(VAR_30->fcf_index_fcfi, 0, sizeof(VAR_30->fcf_index_fcfi));

 FUNC_4(VAR_30);

 FUNC_17(&VAR_30->sli, VAR_20, VAR_28, VAR_30);
 FUNC_17(&VAR_30->sli, VAR_19, VAR_27, VAR_30);





 for (VAR_33 = 0; VAR_33 < FUNC_0(VAR_30->num_qentries); VAR_33++) {
  VAR_30->num_qentries[VAR_33] = FUNC_21(&VAR_30->sli, VAR_33);
 }




 VAR_30->config.rq_default_buffer_size = VAR_11;
 VAR_30->config.n_io = FUNC_22(&VAR_30->sli, VAR_22);
 if (FUNC_2("auto_xfer_rdy_xri_cnt", VAR_34, sizeof(VAR_34)) == 0) {
  VAR_30->config.auto_xfer_rdy_xri_cnt = FUNC_16(VAR_34, 0, 0);
 }


 VAR_30->config.i_only_aab = VAR_23;


 FUNC_7(VAR_30);


 if (VAR_30->workaround.override_fcfi) {
  VAR_30->first_domain_idx = -1;
 }


 if (VAR_21 == FUNC_18(&VAR_30->sli)) {
  (void)FUNC_6(VAR_30);
 }


 FUNC_3(VAR_30);


 if (! FUNC_23(&VAR_30->sli)) {
  FUNC_14(VAR_30->os, "not inline capable, setting mode to separate\n");
  VAR_30->config.dif_mode = VAR_6;
 }

 if (VAR_30->workaround.use_dif_sec_xri) {
  FUNC_9(&VAR_30->sec_hio_wait_list, VAR_29, VAR_25);
 }





 if (FUNC_19(&VAR_30->sli)) {
  if (FUNC_20(&VAR_30->sli, 0) &&
      FUNC_20(&VAR_30->sli, 1)) {
   VAR_30->ulp_start = 0;
   VAR_30->ulp_max = 1;
  } else if (FUNC_20(&VAR_30->sli, 0)) {
   VAR_30->ulp_start = 0;
   VAR_30->ulp_max = 0;
  } else {
   VAR_30->ulp_start = 1;
   VAR_30->ulp_max = 1;
  }
 } else {
  if (FUNC_20(&VAR_30->sli, 0)) {
   VAR_30->ulp_start = 0;
   VAR_30->ulp_max = 0;
  } else {
   VAR_30->ulp_start = 1;
   VAR_30->ulp_max = 1;
  }
 }
 FUNC_12(VAR_30->os, "ulp_start %d, ulp_max %d\n",
  VAR_30->ulp_start, VAR_30->ulp_max);
 VAR_30->config.queue_topology = VAR_24.queue_topology_string;

 VAR_30->qtop = FUNC_5(VAR_30, VAR_30->config.queue_topology);

 VAR_30->config.n_eq = VAR_30->qtop->entry_counts[VAR_15];
 VAR_30->config.n_cq = VAR_30->qtop->entry_counts[VAR_14];
 VAR_30->config.n_rq = VAR_30->qtop->entry_counts[VAR_17];
 VAR_30->config.n_wq = VAR_30->qtop->entry_counts[VAR_18];
 VAR_30->config.n_mq = VAR_30->qtop->entry_counts[VAR_16];


 if (VAR_30->config.n_rq > VAR_1) {
  FUNC_11(VAR_30->os, "Max supported MRQ pairs = %d\n",
    VAR_1);
  return VAR_12;
 }

 if (VAR_30->config.n_eq > VAR_8) {
  FUNC_11(VAR_30->os, "Max supported EQs = %d\n",
    VAR_8);
  return VAR_12;
 }

 if (VAR_30->config.n_cq > VAR_7) {
  FUNC_11(VAR_30->os, "Max supported CQs = %d\n",
    VAR_7);
  return VAR_12;
 }

 if (VAR_30->config.n_wq > VAR_10) {
  FUNC_11(VAR_30->os, "Max supported WQs = %d\n",
    VAR_10);
  return VAR_12;
 }

 if (VAR_30->config.n_mq > VAR_9) {
  FUNC_11(VAR_30->os, "Max supported MQs = %d\n",
    VAR_9);
  return VAR_12;
 }

 return VAR_13;
}
