
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_27__ {int io_alloc_failed_count; } ;
typedef TYPE_3__ ocs_xport_t ;
struct TYPE_28__ {int hw; TYPE_3__* xport; } ;
typedef TYPE_4__ ocs_t ;
struct TYPE_29__ {int abort_cnt; TYPE_4__* ocs; } ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_30__ {TYPE_11__* io; int payload; TYPE_2__* header; } ;
typedef TYPE_6__ ocs_node_cb_t ;
struct TYPE_31__ {int hw_priv; int payload; TYPE_2__* header; } ;
typedef TYPE_7__ ocs_hw_sequence_t ;
typedef scalar_t__ int32_t ;
struct TYPE_32__ {int rx_id; int ox_id; int d_id; int s_id; } ;
typedef TYPE_8__ fc_header_t ;
typedef int cbdata ;
struct TYPE_25__ {TYPE_8__* virt; } ;
struct TYPE_26__ {TYPE_1__ dma; } ;
struct TYPE_24__ {int seq_init; int cmd_tgt; TYPE_5__* node; TYPE_4__* ocs; int hw_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *,TYPE_7__*) ;
 int * FUNC_6 (TYPE_4__*,TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_6__*,int ,int) ;
 int FUNC_10 (TYPE_5__*,int ,TYPE_6__*) ;
 TYPE_11__* FUNC_11 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_5__*,TYPE_7__*) ;

int32_t
FUNC_13(ocs_node_t *VAR_4, ocs_hw_sequence_t *VAR_5)
{
 ocs_t *VAR_6 = VAR_4->ocs;
 ocs_xport_t *VAR_7 = VAR_6->xport;
 fc_header_t *VAR_8 = VAR_5->header->dma.virt;
 uint16_t VAR_9 = FUNC_3(VAR_8->ox_id);
 uint16_t VAR_10 = FUNC_3(VAR_8->rx_id);
 ocs_node_cb_t VAR_11;
 int32_t VAR_12 = 0;

 VAR_4->abort_cnt++;





 if (FUNC_6(VAR_6, VAR_4, VAR_9, VAR_10) == ((void*)0)) {
  uint32_t VAR_13;

  FUNC_7(VAR_6, "IO not found (ox_id %04x)\n", VAR_9);


  VAR_12 = FUNC_4(&VAR_6->hw, VAR_1, &VAR_13);
  if ((VAR_12 == 0) && VAR_13) {
   VAR_12 = FUNC_12(VAR_4, VAR_5);
   if (VAR_12) {
    FUNC_8(VAR_6, "ocs_bls_acc_send_frame failed\n");
   }
   return VAR_12;
  }

 }

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.header = VAR_5->header;
 VAR_11.payload = VAR_5->payload;

 VAR_11.io = FUNC_11(VAR_4, VAR_2);
 if (VAR_11.io != ((void*)0)) {
  VAR_11.io->hw_priv = VAR_5->hw_priv;

  VAR_11.io->seq_init = 1;


  VAR_11.io->ocs = VAR_6;
  VAR_11.io->node = VAR_4;
  VAR_11.io->cmd_tgt = VAR_3;

  FUNC_10(VAR_4, VAR_0, &VAR_11);
 } else {
  FUNC_2(&VAR_7->io_alloc_failed_count, 1);
  FUNC_1(VAR_4, "SCSI IO allocation failed for ABTS received s_id %06x d_id %06x ox_id %04x rx_id %04x\n",
       FUNC_0(VAR_8->s_id), FUNC_0(VAR_8->d_id), FUNC_3(VAR_8->ox_id), FUNC_3(VAR_8->rx_id));
 }


 FUNC_5(&VAR_6->hw, VAR_5);
 return 0;
}
