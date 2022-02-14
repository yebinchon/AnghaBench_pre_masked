
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
typedef struct TYPE_32__ TYPE_28__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_35__ {int hw; } ;
typedef TYPE_4__ ocs_t ;
struct TYPE_36__ {TYPE_4__* ocs; } ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_37__ {int tgt_task_tag; TYPE_24__* hio; int hw_priv; } ;
typedef TYPE_6__ ocs_io_t ;
struct TYPE_38__ {TYPE_24__* hio; int hw_priv; int auto_xrdy; TYPE_28__* payload; TYPE_2__* header; } ;
typedef TYPE_7__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_39__ {int additional_fcp_cdb_length; int fcp_cdb; scalar_t__ task_management_flags; int fcp_lun; } ;
typedef TYPE_8__ fcp_cmnd_iu_t ;
struct TYPE_40__ {int ox_id; } ;
typedef TYPE_9__ fc_header_t ;
struct TYPE_34__ {TYPE_8__* virt; } ;
struct TYPE_30__ {TYPE_9__* virt; } ;
struct TYPE_33__ {TYPE_1__ dma; } ;
struct TYPE_32__ {TYPE_3__ dma; } ;
struct TYPE_31__ {int indicator; TYPE_6__* ul_io; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_28__*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int *,TYPE_24__*) ;
 int FUNC_8 (int *,TYPE_7__*) ;
 int FUNC_9 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,char*,int) ;
 int FUNC_11 (TYPE_6__*,TYPE_8__*,TYPE_9__*,int ) ;
 TYPE_6__* FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,int ,int ,int,scalar_t__,int *,int ) ;
 int FUNC_15 (TYPE_5__*,TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*,TYPE_7__*) ;

__attribute__((used)) static int32_t
FUNC_17(ocs_node_t *VAR_4, ocs_hw_sequence_t *VAR_5)
{
 ocs_t *VAR_6 = VAR_4->ocs;
 fc_header_t *VAR_7 = VAR_5->header->dma.virt;
 fcp_cmnd_iu_t *VAR_8 = ((void*)0);
 ocs_io_t *VAR_9 = ((void*)0);
 uint64_t VAR_10 = VAR_3;
 int32_t VAR_11 = 0;

 FUNC_3(VAR_5->payload, -1);
 VAR_8 = VAR_5->payload->dma.virt;


 if (FUNC_16(VAR_6, VAR_5)) {
  return -1;
 }


 if (!VAR_5->auto_xrdy) {
  FUNC_2(VAR_4, "IO is not Auto Xfr Rdy assisted, dropping FCP_CMND\n");
  return -1;
 }

 VAR_10 = FUNC_0(FUNC_1(VAR_8->fcp_lun));



 VAR_9 = FUNC_12(VAR_4, VAR_2);
 if (VAR_9 == ((void*)0)) {
  uint32_t VAR_12;


  VAR_11 = FUNC_6(&VAR_6->hw, VAR_1, &VAR_12);
  if ((VAR_11 == 0) && VAR_12) {
   VAR_11 = FUNC_15(VAR_4, VAR_5);
   if (VAR_11) {
    FUNC_10(VAR_6, "ocs_sframe_send_task_set_full_or_busy failed: %d\n", VAR_11);
   }
   return VAR_11;
  }

  FUNC_9(VAR_6, "IO allocation failed ox_id %04x\n", FUNC_4(VAR_7->ox_id));
  return -1;
 }
 VAR_9->hw_priv = VAR_5->hw_priv;


 FUNC_11(VAR_9, VAR_8, VAR_7, VAR_0);

 if (VAR_8->task_management_flags) {

  FUNC_9(VAR_6, "TMF flags set 0x%x\n", VAR_8->task_management_flags);
  FUNC_13(VAR_9);
  return -1;
 } else {
  uint32_t VAR_13 = FUNC_5(VAR_8);


  FUNC_7(&VAR_6->hw, VAR_5->hio);
  VAR_9->hio = VAR_5->hio;
  VAR_5->hio->ul_io = VAR_9;
  VAR_9->tgt_task_tag = VAR_5->hio->indicator;


  FUNC_14(VAR_9, VAR_10, VAR_8->fcp_cdb,
           sizeof(VAR_8->fcp_cdb) +
           (VAR_8->additional_fcp_cdb_length * sizeof(uint32_t)),
           VAR_13, ((void*)0), 0);
 }


 FUNC_8(&VAR_6->hw, VAR_5);
 return 0;
}
