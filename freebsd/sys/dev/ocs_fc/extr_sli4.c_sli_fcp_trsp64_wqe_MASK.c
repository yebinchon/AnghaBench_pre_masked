
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_18__ {scalar_t__ wqe_size; scalar_t__ sgl_pre_registered; } ;
struct TYPE_19__ {scalar_t__ if_type; TYPE_4__ config; } ;
typedef TYPE_5__ sli4_t ;
struct TYPE_20__ {int buffer_length; int buffer_address_high; int buffer_address_low; } ;
typedef TYPE_6__ sli4_sge_t ;
struct TYPE_15__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_16__ {TYPE_1__ data; } ;
struct TYPE_17__ {int buffer_length; TYPE_2__ u; int bde_type; } ;
struct TYPE_21__ {int fcp_response_length; int dword5; int rpi; int dnrx; int len_loc; int ccpe; int ccp; int app_id_valid; int wqes; int eat; int cmd_type; void* cq_id; void* request_tag; void* remote_xid; int class; int command; void* xri_tag; void* hlm; void* xc; TYPE_3__ bde; void* xbl; void* dbde; void* ag; } ;
typedef TYPE_7__ sli4_fcp_trsp64_wqe_t ;
struct TYPE_22__ {int* dw; } ;
typedef TYPE_8__ sli4_fcp_128byte_wqe_t ;
struct TYPE_23__ {int fc_id; scalar_t__ node_group; } ;
typedef TYPE_9__ ocs_remote_node_t ;
struct TYPE_14__ {TYPE_6__* virt; } ;
typedef TYPE_10__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (void*,int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_11, void *VAR_12, size_t VAR_13, ocs_dma_t *VAR_14, uint32_t VAR_15,
     uint16_t VAR_16, uint16_t VAR_17, uint16_t VAR_18, uint16_t VAR_19, uint32_t VAR_20, ocs_remote_node_t *VAR_21,
     uint32_t VAR_22, uint8_t VAR_23, uint8_t VAR_24, uint32_t VAR_25)
{
 sli4_fcp_trsp64_wqe_t *VAR_26 = VAR_12;
 sli4_fcp_128byte_wqe_t *VAR_27 = VAR_12;

 FUNC_0(VAR_12, 0, VAR_13);

 if (VAR_22 & VAR_4) {
  VAR_26->ag = VAR_10;





  if (VAR_3 == VAR_11->if_type) {
   VAR_26->bde.buffer_length = 12;
  }
 } else {
  sli4_sge_t *VAR_28 = VAR_14->virt;

  if (VAR_11->config.sgl_pre_registered || VAR_24) {
   VAR_26->dbde = VAR_10;
  } else {
   VAR_26->xbl = VAR_10;
  }

  VAR_26->bde.bde_type = VAR_0;
  VAR_26->bde.buffer_length = VAR_28[0].buffer_length;
  VAR_26->bde.u.data.buffer_address_low = VAR_28[0].buffer_address_low;
  VAR_26->bde.u.data.buffer_address_high = VAR_28[0].buffer_address_high;

  VAR_26->fcp_response_length = VAR_15;
 }

 if (VAR_22 & VAR_5) {
  VAR_26->xc = VAR_10;
 }

 if (VAR_21->node_group) {
  VAR_26->hlm = VAR_10;
  VAR_26->dword5 = VAR_21->fc_id & 0x00ffffff;
 }

 VAR_26->xri_tag = VAR_16;
 VAR_26->rpi = VAR_20;

 VAR_26->command = VAR_9;
 VAR_26->class = VAR_2;

 VAR_26->remote_xid = VAR_19;
 VAR_26->request_tag = VAR_17;
 VAR_26->dnrx = ((VAR_22 & VAR_6) == 0 ? 0 : 1);
 VAR_26->len_loc = 0x1;
 VAR_26->cq_id = VAR_18;
 VAR_26->cmd_type = VAR_1;


 if (VAR_23 & VAR_7) {
  VAR_26->ccpe = 1;
  VAR_26->ccp = (VAR_23 & VAR_7);
 }

 if (VAR_25 && (VAR_11->config.wqe_size == VAR_8) && !VAR_26->eat) {
  VAR_26->app_id_valid = 1;
  VAR_26->wqes = 1;
  VAR_27->dw[31] = VAR_25;
 }
 return 0;
}
