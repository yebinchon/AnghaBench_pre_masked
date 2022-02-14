
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef void* uint16_t ;
struct TYPE_32__ {scalar_t__ wqe_size; scalar_t__ perf_hint; scalar_t__ sgl_pre_registered; } ;
struct TYPE_21__ {TYPE_6__ config; int os; } ;
typedef TYPE_10__ sli4_t ;
struct TYPE_22__ {scalar_t__ buffer_length; int buffer_address_high; int buffer_address_low; } ;
typedef TYPE_11__ sli4_sge_t ;
struct TYPE_33__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_34__ {TYPE_7__ data; } ;
struct TYPE_35__ {scalar_t__ buffer_length; TYPE_8__ u; void* bde_type; } ;
struct TYPE_31__ {int dword; } ;
struct TYPE_28__ {int sgl_segment_address_high; int sgl_segment_address_low; } ;
struct TYPE_27__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_29__ {TYPE_2__ blp; TYPE_1__ data; } ;
struct TYPE_30__ {scalar_t__ buffer_length; TYPE_3__ u; void* bde_type; } ;
struct TYPE_23__ {scalar_t__ payload_offset_length; int dif; int bs; int iod; int len_loc; int ccpe; int ccp; int app_id_valid; int wqes; int eat; TYPE_9__ first_data_bde; scalar_t__ fcp_data_receive_length; void* cq_id; int cmd_type; TYPE_5__ dword5; void* hlm; void* request_tag; void* remote_xid; int ct; int class; int command; void* ar; void* pu; scalar_t__ context_tag; void* xri_tag; void* xc; scalar_t__ relative_offset; TYPE_4__ bde; void* dbde; void* xbl; } ;
typedef TYPE_12__ sli4_fcp_treceive64_wqe_t ;
struct TYPE_24__ {scalar_t__* dw; } ;
typedef TYPE_13__ sli4_fcp_128byte_wqe_t ;
struct TYPE_25__ {int fc_id; scalar_t__ node_group; } ;
typedef TYPE_14__ ocs_remote_node_t ;
struct TYPE_26__ {scalar_t__ size; int phys; TYPE_11__* virt; } ;
typedef TYPE_15__ ocs_dma_t ;
typedef int int32_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_15__*,TYPE_11__*) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_12, void *VAR_13, size_t VAR_14, ocs_dma_t *VAR_15, uint32_t VAR_16,
         uint32_t VAR_17, uint32_t VAR_18, uint16_t VAR_19, uint16_t VAR_20, uint16_t VAR_21,
         uint16_t VAR_22, uint32_t VAR_23, ocs_remote_node_t *VAR_24, uint32_t VAR_25, uint8_t VAR_26, uint8_t VAR_27,
         uint8_t VAR_28, uint32_t VAR_29)
{
 sli4_fcp_treceive64_wqe_t *VAR_30 = VAR_13;
 sli4_fcp_128byte_wqe_t *VAR_31 = VAR_13;
 sli4_sge_t *VAR_32 = ((void*)0);

 FUNC_3(VAR_13, 0, VAR_14);

 if (!VAR_15 || !VAR_15->virt) {
  FUNC_2(VAR_12->os, "bad parameter sgl=%p virt=%p\n",
       VAR_15, VAR_15 ? VAR_15->virt : ((void*)0));
  return -1;
 }
 VAR_32 = VAR_15->virt;

 if (VAR_12->config.sgl_pre_registered) {
  VAR_30->xbl = VAR_0;

  VAR_30->dbde = VAR_11;
  VAR_30->bde.bde_type = VAR_1;

  VAR_30->bde.buffer_length = VAR_32[0].buffer_length;
  VAR_30->bde.u.data.buffer_address_low = VAR_32[0].buffer_address_low;
  VAR_30->bde.u.data.buffer_address_high = VAR_32[0].buffer_address_high;

  VAR_30->payload_offset_length = VAR_32[0].buffer_length;
 } else {
  VAR_30->xbl = VAR_11;


  if (!VAR_26 && (VAR_18 <= VAR_32[2].buffer_length)) {
   VAR_30->dbde = VAR_11;
   VAR_30->bde.bde_type = VAR_1;

   VAR_30->bde.buffer_length = VAR_32[2].buffer_length;
   VAR_30->bde.u.data.buffer_address_low = VAR_32[2].buffer_address_low;
   VAR_30->bde.u.data.buffer_address_high = VAR_32[2].buffer_address_high;
  } else {
   VAR_30->bde.bde_type = VAR_2;
   VAR_30->bde.buffer_length = VAR_15->size;
   VAR_30->bde.u.blp.sgl_segment_address_low = FUNC_1(VAR_15->phys);
   VAR_30->bde.u.blp.sgl_segment_address_high = FUNC_0(VAR_15->phys);
  }
 }

 VAR_30->relative_offset = VAR_17;

 if (VAR_25 & VAR_7) {
  VAR_30->xc = VAR_11;
 }
 VAR_30->xri_tag = VAR_19;

 VAR_30->context_tag = VAR_23;

 VAR_30->pu = VAR_11;

 if (VAR_25 & VAR_6) {
  VAR_30->ar = VAR_11;
 }

 VAR_30->command = VAR_10;
 VAR_30->class = VAR_4;
 VAR_30->ct = VAR_5;
 VAR_30->dif = VAR_26;
 VAR_30->bs = VAR_27;

 VAR_30->remote_xid = VAR_22;

 VAR_30->request_tag = VAR_20;

 VAR_30->iod = 1;

 VAR_30->len_loc = 0x2;

 if (VAR_24->node_group) {
  VAR_30->hlm = VAR_11;
  VAR_30->dword5.dword = VAR_24->fc_id & 0x00ffffff;
 }

 VAR_30->cmd_type = VAR_3;

 VAR_30->cq_id = VAR_21;

 VAR_30->fcp_data_receive_length = VAR_18;

 if (VAR_12->config.perf_hint) {
  VAR_30->first_data_bde.bde_type = VAR_1;
  VAR_30->first_data_bde.buffer_length = VAR_32[VAR_16].buffer_length;
  VAR_30->first_data_bde.u.data.buffer_address_low = VAR_32[VAR_16].buffer_address_low;
  VAR_30->first_data_bde.u.data.buffer_address_high = VAR_32[VAR_16].buffer_address_high;
 }


 if (VAR_28 & VAR_8) {
  VAR_30->ccpe = 1;
  VAR_30->ccp = (VAR_28 & VAR_8);
 }

 if (VAR_29 && (VAR_12->config.wqe_size == VAR_9) && !VAR_30->eat) {
  VAR_30->app_id_valid = 1;
  VAR_30->wqes = 1;
  VAR_31->dw[31] = VAR_29;
 }
 return 0;
}
