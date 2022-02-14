
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_28__ {int send_frame_seq_id; } ;
struct TYPE_26__ {TYPE_7__ hw; } ;
typedef TYPE_5__ ocs_t ;
struct TYPE_27__ {TYPE_5__* ocs; } ;
typedef TYPE_6__ ocs_node_t ;
typedef TYPE_7__ ocs_hw_t ;
struct TYPE_29__ {TYPE_4__* payload; TYPE_2__* header; } ;
typedef TYPE_8__ ocs_hw_sequence_t ;
struct TYPE_21__ {int phys; void** virt; int size; int len; } ;
struct TYPE_30__ {int d_id; int s_id; int f_ctl; TYPE_17__ payload; TYPE_8__* seq; scalar_t__ parameter; void* ox_id; void* rx_id; void* seq_id; scalar_t__ df_ctl; scalar_t__ seq_cnt; void* type; scalar_t__ cs_ctl; void* info; void* r_ctl; } ;
typedef TYPE_9__ ocs_hw_send_frame_context_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int int32_t ;
typedef int hdr ;
struct TYPE_20__ {int rx_id; int ox_id; int d_id; int s_id; } ;
typedef TYPE_10__ fc_header_t ;
typedef TYPE_9__ fc_header_le_t ;
struct TYPE_24__ {int size; uintptr_t phys; void** virt; } ;
struct TYPE_25__ {TYPE_3__ dma; } ;
struct TYPE_22__ {TYPE_10__* virt; } ;
struct TYPE_23__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,void*,int ,int ,TYPE_17__*,TYPE_9__*,int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_5__*,char*,scalar_t__) ;
 int FUNC_6 (void**,void*,int) ;
 int FUNC_7 (TYPE_9__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int32_t
FUNC_8(ocs_node_t *VAR_3, ocs_hw_sequence_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint32_t VAR_7,
         uint8_t VAR_8, void *VAR_9, uint32_t VAR_10)
{
 ocs_t *VAR_11 = VAR_3->ocs;
 ocs_hw_t *VAR_12 = &VAR_11->hw;
 ocs_hw_rtn_e VAR_13 = 0;
 fc_header_t *VAR_14 = VAR_4->header->dma.virt;
 fc_header_le_t VAR_15;
 uint32_t VAR_16 = FUNC_0(VAR_14->s_id);
 uint32_t VAR_17 = FUNC_0(VAR_14->d_id);
 uint16_t VAR_18 = FUNC_3(VAR_14->ox_id);
 uint16_t VAR_19 = FUNC_3(VAR_14->rx_id);
 ocs_hw_send_frame_context_t *VAR_20;

 uint32_t VAR_21 = VAR_4->payload->dma.size;
 uintptr_t VAR_22 = VAR_4->payload->dma.phys;
 uint8_t *VAR_23 = VAR_4->payload->dma.virt;
 uint32_t VAR_24 = 0;


 FUNC_7(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.d_id = VAR_16;
 VAR_15.r_ctl = VAR_5;
 VAR_15.info = VAR_6;
 VAR_15.s_id = VAR_17;
 VAR_15.cs_ctl = 0;
 VAR_15.f_ctl = VAR_7;
 VAR_15.type = VAR_8;
 VAR_15.seq_cnt = 0;
 VAR_15.df_ctl = 0;





 VAR_15.seq_id = (uint8_t) FUNC_2(&VAR_12->send_frame_seq_id, 1);

 VAR_15.rx_id = VAR_19;
 VAR_15.ox_id = VAR_18;
 VAR_15.parameter = 0;


 VAR_20 = (void*)(VAR_23 + VAR_24);
 VAR_24 += sizeof(*VAR_20);
 FUNC_1(VAR_24 < VAR_21, -1);
 FUNC_7(VAR_20, 0, sizeof(*VAR_20));


 VAR_20->seq = VAR_4;


 VAR_20->payload.phys = VAR_22 + VAR_24;
 VAR_20->payload.virt = VAR_23 + VAR_24;
 VAR_20->payload.size = VAR_10;
 VAR_20->payload.len = VAR_10;
 VAR_24 += VAR_10;
 FUNC_1(VAR_24 <= VAR_21, -1);


 FUNC_6(VAR_20->payload.virt, VAR_9, VAR_10);


 VAR_13 = FUNC_4(&VAR_11->hw, (void*)&VAR_15, VAR_1, VAR_0, &VAR_20->payload, VAR_20,
    VAR_2, VAR_20);
 if (VAR_13) {
  FUNC_5(VAR_11, "ocs_hw_send_frame failed: %d\n", VAR_13);
 }

 return VAR_13 ? -1 : 0;
}
