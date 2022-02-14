
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_76__ TYPE_9__ ;
typedef struct TYPE_75__ TYPE_8__ ;
typedef struct TYPE_74__ TYPE_7__ ;
typedef struct TYPE_73__ TYPE_6__ ;
typedef struct TYPE_72__ TYPE_5__ ;
typedef struct TYPE_71__ TYPE_4__ ;
typedef struct TYPE_70__ TYPE_3__ ;
typedef struct TYPE_69__ TYPE_35__ ;
typedef struct TYPE_68__ TYPE_2__ ;
typedef struct TYPE_67__ TYPE_1__ ;
typedef struct TYPE_66__ TYPE_17__ ;
typedef struct TYPE_65__ TYPE_16__ ;
typedef struct TYPE_64__ TYPE_15__ ;
typedef struct TYPE_63__ TYPE_14__ ;
typedef struct TYPE_62__ TYPE_13__ ;
typedef struct TYPE_61__ TYPE_12__ ;
typedef struct TYPE_60__ TYPE_11__ ;
typedef struct TYPE_59__ TYPE_10__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_59__ {int rq_id; void* type_match; void* type_mask; void* r_ctl_match; void* r_ctl_mask; } ;
typedef TYPE_10__ sli4_cmd_rq_cfg_t ;
struct TYPE_60__ {int fcfi; } ;
typedef TYPE_11__ sli4_cmd_reg_fcfi_t ;
typedef int prop_buf ;
struct TYPE_62__ {scalar_t__ size; } ;
struct TYPE_75__ {int n_rq; scalar_t__ auto_xfer_rdy_size; int n_eq; int n_cq; int n_mq; int n_wq; int* filter_def; scalar_t__ emulate_tgt_wqe_timeout; scalar_t__ auto_xfer_rdy_t10_enable; scalar_t__ esoc; } ;
struct TYPE_67__ {void* mrqp; } ;
struct TYPE_68__ {TYPE_1__ flag; } ;
struct TYPE_70__ {TYPE_2__ features; } ;
struct TYPE_65__ {scalar_t__ if_type; TYPE_3__ config; } ;
struct TYPE_71__ {scalar_t__ override_fcfi; } ;
struct TYPE_61__ {int hw_rq_count; int first_domain_idx; int eq_count; int rq_count; int wq_count; int cq_count; int watchdog_timeout; TYPE_13__ loop_map; int os; TYPE_13__ fcf_dmem; TYPE_13__ domain_dmem; scalar_t__ expiration_logged; int send_frame_seq_id; TYPE_9__** hw_wq; int * wq_class_array; int wqe_timer; TYPE_8__ config; int state; TYPE_17__* cq; TYPE_16__ sli; int cq_hash; TYPE_7__* wq; int wq_hash; TYPE_6__* rq; int rq_hash; TYPE_17__* eq; int eth_license; int linkcfg; int q_hist; int fcf_indicator; TYPE_15__** hw_rq; scalar_t__ hw_mrq_count; int fcf_index_fcfi; TYPE_4__ workaround; int domains; TYPE_35__* rpi_ref; int * seq_pool; TYPE_13__ rnode_mem; int qtop; scalar_t__ sliport_healthcheck; void* auto_xfer_rdy_enabled; int io_port_dnrx; int io_timed_wqe; int io_wait_free; int io_port_owned; int io_free; int io_inuse; int cmd_lock; int cmd_pending; int cmd_head; } ;
typedef TYPE_12__ ocs_hw_t ;
typedef int ocs_hw_sequence_t ;
typedef int ocs_hw_rtn_e ;
typedef TYPE_13__ ocs_dma_t ;
struct TYPE_63__ {int * send_frame_io; } ;
typedef TYPE_14__ hw_wq_t ;
struct TYPE_64__ {scalar_t__ filter_mask; TYPE_5__* hdr; scalar_t__ entry_count; } ;
typedef TYPE_15__ hw_rq_t ;
struct TYPE_76__ {int * send_frame_io; } ;
struct TYPE_74__ {int id; } ;
struct TYPE_73__ {int id; } ;
struct TYPE_72__ {int id; } ;
struct TYPE_69__ {int rpi_attached; int rpi_count; } ;
struct TYPE_66__ {int id; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_13__*,int,int) ;
 int FUNC_5 (int ,TYPE_13__*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_12__*,void**,int ,int *,int *) ;
 int FUNC_8 (TYPE_12__*,void**) ;
 int FUNC_9 (TYPE_12__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_12__*,scalar_t__) ;
 int FUNC_11 (TYPE_12__*,int ,int) ;
 int FUNC_12 (TYPE_12__*) ;
 int FUNC_13 (TYPE_12__*,int ,int ,TYPE_12__*) ;
 int FUNC_14 (TYPE_12__*) ;
 int VAR_37 ;
 int FUNC_15 (TYPE_12__*,int ) ;
 void* FUNC_16 (TYPE_12__*) ;
 int VAR_38 ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (TYPE_12__*) ;
 scalar_t__ FUNC_19 (TYPE_12__*) ;
 int FUNC_20 (TYPE_12__*) ;
 int FUNC_21 (TYPE_12__*) ;
 scalar_t__ FUNC_22 (TYPE_12__*) ;
 int FUNC_23 (TYPE_12__*) ;
 int FUNC_24 (TYPE_12__*) ;
 scalar_t__ FUNC_25 (TYPE_12__*,int ) ;
 int FUNC_26 (TYPE_12__*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int ,int ) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int ,char*,...) ;
 int FUNC_33 (int ,char*,...) ;
 int FUNC_34 (int ,char*,int) ;
 int FUNC_35 (int ,char*) ;
 TYPE_35__* FUNC_36 (int ,int,int) ;
 int FUNC_37 (int ,int ,int) ;
 int FUNC_38 (int ,int *) ;
 int FUNC_39 (int ,int *,int ,TYPE_12__*,int ) ;
 int FUNC_40 (char*,int ,int ) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int ) ;
 TYPE_14__* FUNC_43 (int ) ;
 int FUNC_44 (TYPE_16__*,void**,int,scalar_t__) ;
 int FUNC_45 (TYPE_16__*,void**,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_46 (TYPE_16__*,void**,int,TYPE_13__*,int ,TYPE_13__*) ;
 scalar_t__ FUNC_47 (TYPE_16__*,void**,int,int ,TYPE_10__*,int ) ;
 int FUNC_48 (TYPE_16__*,int) ;
 scalar_t__ FUNC_49 (TYPE_16__*) ;
 scalar_t__ FUNC_50 (TYPE_16__*) ;
 scalar_t__ FUNC_51 (TYPE_16__*) ;
 int FUNC_52 (TYPE_16__*,int ) ;
 int FUNC_53 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_54 (TYPE_16__*) ;
 scalar_t__ FUNC_55 (TYPE_16__*) ;
 int FUNC_56 (TYPE_16__*,TYPE_17__*,void*) ;
 int VAR_39 ;
 int VAR_40 ;

ocs_hw_rtn_e
FUNC_57(ocs_hw_t *VAR_41)
{
 ocs_hw_rtn_e VAR_42;
 uint32_t VAR_43 = 0;
 uint8_t VAR_44[VAR_18];
 uint32_t VAR_45;
 int VAR_46;
 int VAR_47 = 0;
 uint32_t VAR_48;
 char VAR_49[32];
 uint32_t VAR_50 = 512;
 uint32_t VAR_51 = 0;






 FUNC_31(&VAR_41->cmd_lock);
  if (!FUNC_27(&VAR_41->cmd_head)) {
   FUNC_35(VAR_41->os, "command found on cmd list\n");
   FUNC_41(&VAR_41->cmd_lock);
   return VAR_11;
  }
  if (!FUNC_27(&VAR_41->cmd_pending)) {
   FUNC_35(VAR_41->os, "command found on pending list\n");
   FUNC_41(&VAR_41->cmd_lock);
   return VAR_11;
  }
 FUNC_41(&VAR_41->cmd_lock);


 FUNC_21(VAR_41);
 VAR_46=0;
 if (FUNC_30(&VAR_41->io_wait_free)) {
  while ((!FUNC_27(&VAR_41->io_wait_free))) {
   VAR_46++;
   FUNC_29(&VAR_41->io_wait_free);
  }
  if (VAR_46 > 0) {
   FUNC_32(VAR_41->os, "removed %d items from io_wait_free list\n", VAR_46);
  }
 }
 VAR_46=0;
 if (FUNC_30(&VAR_41->io_inuse)) {
  while ((!FUNC_27(&VAR_41->io_inuse))) {
   VAR_46++;
   FUNC_29(&VAR_41->io_inuse);
  }
  if (VAR_46 > 0) {
   FUNC_32(VAR_41->os, "removed %d items from io_inuse list\n", VAR_46);
  }
 }
 VAR_46=0;
 if (FUNC_30(&VAR_41->io_free)) {
  while ((!FUNC_27(&VAR_41->io_free))) {
   VAR_46++;
   FUNC_29(&VAR_41->io_free);
  }
  if (VAR_46 > 0) {
   FUNC_32(VAR_41->os, "removed %d items from io_free list\n", VAR_46);
  }
 }
 if (FUNC_30(&VAR_41->io_port_owned)) {
  while ((!FUNC_27(&VAR_41->io_port_owned))) {
   FUNC_29(&VAR_41->io_port_owned);
  }
 }
 FUNC_28(&VAR_41->io_inuse, VAR_38, VAR_36);
 FUNC_28(&VAR_41->io_free, VAR_38, VAR_36);
 FUNC_28(&VAR_41->io_port_owned, VAR_38, VAR_36);
 FUNC_28(&VAR_41->io_wait_free, VAR_38, VAR_36);
 FUNC_28(&VAR_41->io_timed_wqe, VAR_38, VAR_40);
 FUNC_28(&VAR_41->io_port_dnrx, VAR_38, VAR_35);


 if (VAR_41->config.n_rq == 1) {
  VAR_41->sli.config.features.flag.mrqp = VAR_0;
 }

 if (FUNC_55(&VAR_41->sli)) {
  FUNC_33(VAR_41->os, "SLI failed to initialize\n");
  return VAR_11;
 }




 VAR_41->auto_xfer_rdy_enabled = VAR_0;
 if (FUNC_49(&VAR_41->sli) &&
     VAR_41->config.auto_xfer_rdy_size > 0) {
  if (VAR_41->config.esoc){
   if (FUNC_6("ramdisc_blocksize", VAR_49, sizeof(VAR_49)) == 0) {
    VAR_50 = FUNC_40(VAR_49, 0, 0);
   }
   VAR_47 = FUNC_45(&VAR_41->sli, VAR_44, VAR_18, VAR_41->config.auto_xfer_rdy_size, 1, VAR_50);
  } else {
   VAR_47 = FUNC_44(&VAR_41->sli, VAR_44, VAR_18, VAR_41->config.auto_xfer_rdy_size);
  }
  if (VAR_47) {
   VAR_42 = FUNC_7(VAR_41, VAR_44, VAR_1, ((void*)0), ((void*)0));
   if (VAR_42 != VAR_13) {
    FUNC_33(VAR_41->os, "config auto xfer rdy failed\n");
    return VAR_42;
   }
  }
  VAR_41->auto_xfer_rdy_enabled = VAR_33;

  if (VAR_41->config.auto_xfer_rdy_t10_enable) {
   VAR_42 = FUNC_8(VAR_41, VAR_44);
   if (VAR_42 != VAR_13) {
    FUNC_33(VAR_41->os, "set parameters auto xfer rdy T10 PI failed\n");
    return VAR_42;
   }
  }
 }

 if(VAR_41->sliport_healthcheck) {
  VAR_42 = FUNC_11(VAR_41, 0, 1);
  if (VAR_42 != VAR_13) {
   FUNC_33(VAR_41->os, "Enabling Sliport Health check failed \n");
   return VAR_42;
  }
 }




 if ((VAR_41->sli.if_type == VAR_23) && (VAR_2 != 0)) {




  FUNC_10(VAR_41, VAR_2);
 }




 VAR_51 = FUNC_0(FUNC_52(&VAR_41->sli, VAR_28),
     VAR_5);
 if (VAR_41->config.n_eq > VAR_51) {
  FUNC_33(VAR_41->os, "requested %d EQ but %d allowed\n",
       VAR_41->config.n_eq, VAR_51);
  return VAR_11;
 }

 VAR_51 = FUNC_0(FUNC_52(&VAR_41->sli, VAR_27),
     VAR_4);
 if (VAR_41->config.n_cq > VAR_51) {
  FUNC_33(VAR_41->os, "requested %d CQ but %d allowed\n",
       VAR_41->config.n_cq, VAR_51);
  return VAR_11;
 }

 VAR_51 = FUNC_0(FUNC_52(&VAR_41->sli, VAR_29),
     VAR_6);
 if (VAR_41->config.n_mq > VAR_51) {
  FUNC_33(VAR_41->os, "requested %d MQ but %d allowed\n",
       VAR_41->config.n_mq, VAR_51);
  return VAR_11;
 }

 VAR_51 = FUNC_0(FUNC_52(&VAR_41->sli, VAR_30),
     VAR_7);
 if (VAR_41->config.n_rq > VAR_51) {
  FUNC_33(VAR_41->os, "requested %d RQ but %d allowed\n",
       VAR_41->config.n_rq, VAR_51);
  return VAR_11;
 }

 VAR_51 = FUNC_0(FUNC_52(&VAR_41->sli, VAR_31),
     VAR_8);
 if (VAR_41->config.n_wq > VAR_51) {
  FUNC_33(VAR_41->os, "requested %d WQ but %d allowed\n",
       VAR_41->config.n_wq, VAR_51);
  return VAR_11;
 }


 FUNC_37(VAR_41->cq_hash, 0, sizeof(VAR_41->cq_hash));
 FUNC_32(VAR_41->os, "Max CQs %d, hash size = %d\n",
   VAR_4, VAR_9);

 FUNC_37(VAR_41->rq_hash, 0, sizeof(VAR_41->rq_hash));
 FUNC_32(VAR_41->os, "Max RQs %d, hash size = %d\n",
   VAR_7, VAR_9);

 FUNC_37(VAR_41->wq_hash, 0, sizeof(VAR_41->wq_hash));
 FUNC_32(VAR_41->os, "Max WQs %d, hash size = %d\n",
   VAR_8, VAR_9);


 VAR_42 = FUNC_15(VAR_41, VAR_41->qtop);
 if (VAR_42 != VAR_13) {
  return VAR_42;
 }

 VAR_45 = FUNC_53(&VAR_41->sli, VAR_32);
 VAR_43 = FUNC_48(&VAR_41->sli, VAR_45);
 if (VAR_43) {
  ocs_dma_t VAR_52;

  VAR_42 = VAR_11;

  if (VAR_41->rnode_mem.size) {
   FUNC_5(VAR_41->os, &VAR_41->rnode_mem);
  }

  if (FUNC_4(VAR_41->os, &VAR_41->rnode_mem, VAR_43, 4096)) {
   FUNC_33(VAR_41->os, "remote node memory allocation fail\n");
   return VAR_12;
  }

  VAR_52.size = 0;
  if (FUNC_46(&VAR_41->sli, VAR_44, VAR_18,
     &VAR_41->rnode_mem, VAR_34, &VAR_52)) {
   VAR_42 = FUNC_7(VAR_41, VAR_44, VAR_1, ((void*)0), ((void*)0));

   if (VAR_52.size != 0) {

    FUNC_5(VAR_41->os, &VAR_52);
   }
  }

  if (VAR_42 != VAR_13) {
   FUNC_33(VAR_41->os, "header template registration failed\n");
   return VAR_42;
  }
 }


 VAR_42 = FUNC_20(VAR_41);
 if (VAR_42) {
  FUNC_33(VAR_41->os, "rx_allocate failed\n");
  return VAR_42;
 }


 if (VAR_41->seq_pool == ((void*)0)) {
  uint32_t VAR_53 = 0;
  uint32_t VAR_54;


  for (VAR_54 = 0; VAR_54 < VAR_41->hw_rq_count; VAR_54++) {
   VAR_53 += VAR_41->hw_rq[VAR_54]->entry_count;
  }

  VAR_41->seq_pool = FUNC_2(VAR_41->os, sizeof(ocs_hw_sequence_t), VAR_53);
  if (VAR_41->seq_pool == ((void*)0)) {
   FUNC_33(VAR_41->os, "malloc seq_pool failed\n");
   return VAR_12;
  }
 }

 if(FUNC_22(VAR_41)) {
  FUNC_33(VAR_41->os, "WARNING - error posting RQ buffers\n");
 }


 if (VAR_41->rpi_ref == ((void*)0)) {
  VAR_41->rpi_ref = FUNC_36(VAR_41->os, VAR_45 * sizeof(*VAR_41->rpi_ref),
       VAR_17 | VAR_16);
  if (VAR_41->rpi_ref == ((void*)0)) {
   FUNC_33(VAR_41->os, "rpi_ref allocation failure (%d)\n", VAR_43);
   return VAR_12;
  }
 }

 for (VAR_43 = 0; VAR_43 < VAR_45; VAR_43 ++) {
  FUNC_3(&VAR_41->rpi_ref[VAR_43].rpi_count, 0);
  FUNC_3(&VAR_41->rpi_ref[VAR_43].rpi_attached, 0);
 }

 FUNC_37(VAR_41->domains, 0, sizeof(VAR_41->domains));


 if (VAR_41->workaround.override_fcfi) {
  VAR_41->first_domain_idx = -1;
 }

 FUNC_37(VAR_41->fcf_index_fcfi, 0, sizeof(VAR_41->fcf_index_fcfi));


 if (FUNC_54(&VAR_41->sli) == VAR_26) {

  if (VAR_41->hw_mrq_count) {
   FUNC_32(VAR_41->os, "using REG_FCFI MRQ\n");

   VAR_42 = FUNC_9(VAR_41, VAR_20, 0, 0);
   if (VAR_42 != VAR_13) {
    FUNC_33(VAR_41->os, "REG_FCFI_MRQ FCFI registration failed\n");
    return VAR_42;
   }

   VAR_42 = FUNC_9(VAR_41, VAR_21, 0, 0);
   if (VAR_42 != VAR_13) {
    FUNC_33(VAR_41->os, "REG_FCFI_MRQ MRQ registration failed\n");
    return VAR_42;
   }
  } else {
   sli4_cmd_rq_cfg_t VAR_55[VAR_19];

   FUNC_32(VAR_41->os, "using REG_FCFI standard\n");


   for (VAR_43 = 0; VAR_43 < VAR_19; VAR_43++) {
    VAR_55[VAR_43].rq_id = 0xffff;
    VAR_55[VAR_43].r_ctl_mask = (uint8_t) VAR_41->config.filter_def[VAR_43];
    VAR_55[VAR_43].r_ctl_match = (uint8_t) (VAR_41->config.filter_def[VAR_43] >> 8);
    VAR_55[VAR_43].type_mask = (uint8_t) (VAR_41->config.filter_def[VAR_43] >> 16);
    VAR_55[VAR_43].type_match = (uint8_t) (VAR_41->config.filter_def[VAR_43] >> 24);
   }





   for (VAR_43 = 0; VAR_43 < FUNC_1(VAR_41->hw_rq_count, VAR_19); VAR_43++) {
    hw_rq_t *VAR_56 = VAR_41->hw_rq[VAR_43];
    uint32_t VAR_57;
    for (VAR_57 = 0; VAR_57 < VAR_19; VAR_57++) {
     uint32_t VAR_58 = (VAR_56->filter_mask != 0) ? VAR_56->filter_mask : 1;
     if (VAR_58 & (1U << VAR_57)) {
      VAR_55[VAR_57].rq_id = VAR_56->hdr->id;
      FUNC_32(VAR_41->os, "REG_FCFI: filter[%d] %08X -> RQ[%d] id=%d\n",
       VAR_57, VAR_41->config.filter_def[VAR_57], VAR_43, VAR_56->hdr->id);
     }
    }
   }

   VAR_42 = VAR_11;

   if (FUNC_47(&VAR_41->sli, VAR_44, VAR_18, 0, VAR_55, 0)) {
    VAR_42 = FUNC_7(VAR_41, VAR_44, VAR_1, ((void*)0), ((void*)0));
   }

   if (VAR_42 != VAR_13) {
    FUNC_33(VAR_41->os, "FCFI registration failed\n");
    return VAR_42;
   }
   VAR_41->fcf_indicator = ((sli4_cmd_reg_fcfi_t *)VAR_44)->fcfi;
  }

 }





 VAR_42 = FUNC_18(VAR_41);
 if (VAR_42) {
  FUNC_33(VAR_41->os, "ocs_pool_alloc hw_wq_callback_t failed: %d\n", VAR_42);
  return VAR_42;
 }

 VAR_42 = FUNC_26(VAR_41);
 if (VAR_42) {
  FUNC_33(VAR_41->os, "IO allocation failure\n");
  return VAR_42;
 }

 VAR_42 = FUNC_14(VAR_41);
 if (VAR_42) {
  FUNC_33(VAR_41->os, "IO initialization failure\n");
  return VAR_42;
 }

 FUNC_38(VAR_41->os, &VAR_41->q_hist);


 VAR_41->linkcfg = VAR_3;
 FUNC_13(VAR_41, VAR_1, VAR_37, VAR_41);


 if ((VAR_41->sli.if_type == VAR_23) &&
     (FUNC_54(&VAR_41->sli) == VAR_25)) {
  if (FUNC_25(VAR_41, VAR_41->eth_license)) {

   FUNC_33(VAR_41->os, "Failed to set ethernet license\n");
  }
 }


 if (VAR_23 == FUNC_51(&VAR_41->sli) &&
     FUNC_24(VAR_41) != VAR_13) {
  FUNC_33(VAR_41->os, "Failed to set DIF seed value\n");
  return VAR_42;
 }


 if (VAR_22 == FUNC_51(&VAR_41->sli) &&
     FUNC_50(&VAR_41->sli)) {
  VAR_42 = FUNC_23(VAR_41);
  if (VAR_42 != VAR_13) {
   FUNC_33(VAR_41->os, "Failed to set DIF mode value\n");
   return VAR_42;
  }
 }




 for (VAR_43 = 0; VAR_43 < VAR_41->eq_count; VAR_43++) {
  FUNC_56(&VAR_41->sli, &VAR_41->eq[VAR_43], VAR_33);
 }




 for (VAR_43 = 0; VAR_43 < VAR_41->rq_count; VAR_43++) {
  FUNC_17(VAR_41->rq_hash, VAR_41->rq[VAR_43].id, VAR_43);
 }




 for (VAR_43 = 0; VAR_43 < VAR_41->wq_count; VAR_43++) {
  FUNC_17(VAR_41->wq_hash, VAR_41->wq[VAR_43].id, VAR_43);
 }




 for (VAR_43 = 0; VAR_43 < VAR_41->cq_count; VAR_43++) {
  FUNC_17(VAR_41->cq_hash, VAR_41->cq[VAR_43].id, VAR_43);
  FUNC_56(&VAR_41->sli, &VAR_41->cq[VAR_43], VAR_33);
 }


 VAR_41->state = VAR_14;


 if (FUNC_19(VAR_41)) {
  FUNC_33(VAR_41->os, "WARNING - error initializing RQ pair\n");
 }


 if (VAR_41->config.emulate_tgt_wqe_timeout) {
  FUNC_39(VAR_41->os, &VAR_41->wqe_timer, VAR_39, VAR_41,
    VAR_15);
 }





 if ((VAR_48 = FUNC_42(VAR_41->wq_class_array[1])) > 0) {
  for (VAR_43 = 0; VAR_43 < VAR_48; VAR_43++) {
   hw_wq_t *VAR_59 = FUNC_43(VAR_41->wq_class_array[1]);
   VAR_59->send_frame_io = FUNC_16(VAR_41);
   if (VAR_59->send_frame_io == ((void*)0)) {
    FUNC_33(VAR_41->os, "ocs_hw_io_alloc for send_frame_io failed\n");
   }
  }
 } else {
  VAR_41->hw_wq[0]->send_frame_io = FUNC_16(VAR_41);
  if (VAR_41->hw_wq[0]->send_frame_io == ((void*)0)) {
   FUNC_33(VAR_41->os, "ocs_hw_io_alloc for send_frame_io failed\n");
  }
 }


 FUNC_3(&VAR_41->send_frame_seq_id, 0);


 VAR_41->expiration_logged = 0;
 if(VAR_41->watchdog_timeout) {
  if((VAR_41->watchdog_timeout < 1) || (VAR_41->watchdog_timeout > 65534)) {
   FUNC_33(VAR_41->os, "watchdog_timeout out of range: Valid range is 1 - 65534\n");
  }else if(!FUNC_12(VAR_41)) {
   FUNC_34(VAR_41->os, "watchdog timer configured with timeout = %d seconds \n", VAR_41->watchdog_timeout);
  }
 }

 if (FUNC_4(VAR_41->os, &VAR_41->domain_dmem, 112, 4)) {
    FUNC_33(VAR_41->os, "domain node memory allocation fail\n");
    return VAR_12;
 }

 if (FUNC_4(VAR_41->os, &VAR_41->fcf_dmem, VAR_10, VAR_10)) {
    FUNC_33(VAR_41->os, "domain fcf memory allocation fail\n");
    return VAR_12;
 }

 if ((0 == VAR_41->loop_map.size) && FUNC_4(VAR_41->os, &VAR_41->loop_map,
    VAR_24, 4)) {
  FUNC_33(VAR_41->os, "Loop dma alloc failed size:%d \n", VAR_41->loop_map.size);
 }

 return VAR_13;
}
