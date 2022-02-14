
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_29__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_35__ {int hw; } ;
typedef TYPE_4__ ocs_t ;
struct TYPE_36__ {TYPE_4__* ocs; } ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_37__ {scalar_t__ app_id; int hw_priv; } ;
typedef TYPE_6__ ocs_io_t ;
struct TYPE_38__ {int hw_priv; TYPE_29__* payload; TYPE_2__* header; } ;
typedef TYPE_7__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_39__ {int additional_fcp_cdb_length; int fcp_cdb; scalar_t__ task_management_flags; int fcp_lun; } ;
typedef TYPE_8__ fcp_cmnd_iu_t ;
struct TYPE_40__ {int src_vmid; } ;
typedef TYPE_9__ fc_vm_header_t ;
struct TYPE_30__ {int df_ctl; int ox_id; } ;
typedef TYPE_10__ fc_header_t ;
struct TYPE_34__ {TYPE_8__* virt; } ;
struct TYPE_31__ {TYPE_10__* virt; } ;
struct TYPE_33__ {TYPE_1__ dma; } ;
struct TYPE_32__ {TYPE_3__ dma; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_29__*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,scalar_t__,TYPE_5__*,scalar_t__) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *,TYPE_7__*) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;
 int FUNC_10 (TYPE_4__*,char*,int) ;
 int FUNC_11 (TYPE_6__*,TYPE_8__*,TYPE_10__*,int ) ;
 TYPE_6__* FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (TYPE_6__*,scalar_t__,int ,int,int) ;
 int FUNC_14 (TYPE_5__*,TYPE_7__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*,TYPE_7__*) ;

__attribute__((used)) static int32_t
FUNC_16(ocs_node_t *VAR_9, ocs_hw_sequence_t *VAR_10)
{
 ocs_t *VAR_11 = VAR_9->ocs;
 fc_header_t *VAR_12 = VAR_10->header->dma.virt;
 fcp_cmnd_iu_t *VAR_13 = ((void*)0);
 ocs_io_t *VAR_14 = ((void*)0);
 fc_vm_header_t *VAR_15;
 uint8_t VAR_16;
 uint64_t VAR_17 = VAR_8;
 int32_t VAR_18 = 0;

 FUNC_2(VAR_10->payload, -1);
 VAR_13 = VAR_10->payload->dma.virt;


 if (FUNC_15(VAR_11, VAR_10)) {
  return -1;
 }

 VAR_17 = FUNC_0(FUNC_1(VAR_13->fcp_lun));
 if (VAR_17 == VAR_8) {
  return -1;
 }

 VAR_14 = FUNC_12(VAR_9, VAR_6);
 if (VAR_14 == ((void*)0)) {
  uint32_t VAR_19;


  VAR_18 = FUNC_7(&VAR_11->hw, VAR_5, &VAR_19);
  if ((VAR_18 == 0) && VAR_19) {
   VAR_18 = FUNC_14(VAR_9, VAR_10);
   if (VAR_18) {
    FUNC_10(VAR_11, "ocs_sframe_send_task_set_full_or_busy failed: %d\n", VAR_18);
   }
   return VAR_18;
  }

  FUNC_9(VAR_11, "IO allocation failed ox_id %04x\n", FUNC_3(VAR_12->ox_id));
  return -1;
 }
 VAR_14->hw_priv = VAR_10->hw_priv;


 VAR_14->app_id = 0;
 VAR_16 = VAR_12->df_ctl;
 if (VAR_16 & VAR_0) {
  uint32_t VAR_20 = 0;

  if (VAR_16 & VAR_1) {
   VAR_20 += VAR_2;
   FUNC_9(VAR_11, "ESP Header present. Fix ESP Size.\n");
  }

  if (VAR_16 & VAR_3) {
   VAR_20 += VAR_4;
  }
  VAR_15 = (fc_vm_header_t *) ((char *)VAR_12 + sizeof(fc_header_t) + VAR_20);
  VAR_14->app_id = FUNC_4(VAR_15->src_vmid);
 }


 FUNC_11(VAR_14, VAR_13, VAR_12, VAR_7);

 if (VAR_13->task_management_flags) {
  FUNC_5(VAR_14, VAR_13->task_management_flags, VAR_9, VAR_17);
 } else {
  uint32_t VAR_21 = FUNC_6(VAR_13);




  FUNC_13(VAR_14, VAR_17, VAR_13->fcp_cdb,
      sizeof(VAR_13->fcp_cdb) +
      (VAR_13->additional_fcp_cdb_length * sizeof(uint32_t)),
      VAR_21);
 }


 FUNC_8(&VAR_11->hw, VAR_10);
 return 0;
}
