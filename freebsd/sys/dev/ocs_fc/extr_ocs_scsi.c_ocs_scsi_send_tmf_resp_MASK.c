
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int timeout; int cs_ctl; scalar_t__ offset; int ox_id; } ;
struct TYPE_18__ {TYPE_3__ fcp_tgt; scalar_t__ fcp_rsp_len; scalar_t__ data; int flags; } ;
struct TYPE_14__ {int phys; TYPE_6__* virt; } ;
struct TYPE_17__ {int wire_len; scalar_t__ tmf_cmd; int sgl_count; int timeout; TYPE_6__ iparam; int cs_ctl; int init_task_tag; TYPE_2__* sgl; TYPE_1__ rspbuf; void* scsi_tgt_cb_arg; int scsi_tgt_cb; int hio_type; int hw_dif; struct TYPE_17__* ocs; struct TYPE_17__* node; } ;
typedef TYPE_4__ ocs_t ;
typedef int ocs_scsi_tmf_resp_e ;
typedef int ocs_scsi_io_cb_t ;
typedef TYPE_4__ ocs_io_t ;
typedef int int32_t ;
typedef TYPE_6__ fcp_rsp_iu_t ;
struct TYPE_19__ {int rsp_code; int addl_rsp_info; } ;
typedef TYPE_7__ fcp_rsp_info_t ;
struct TYPE_15__ {int len; scalar_t__ dif_addr; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;






 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_4__*,int ,void*) ;

int32_t
FUNC_7(ocs_io_t *VAR_9, ocs_scsi_tmf_resp_e VAR_10, uint8_t VAR_11[3],
  ocs_scsi_io_cb_t VAR_12, void *VAR_13)
{
 int32_t VAR_14 = -1;
 ocs_t *VAR_15 = ((void*)0);
 fcp_rsp_iu_t *VAR_16 = ((void*)0);
 fcp_rsp_info_t *VAR_17 = ((void*)0);
 uint8_t VAR_18;

 FUNC_0(VAR_9, -1);
 FUNC_0(VAR_9->ocs, -1);
 FUNC_0(VAR_9->node, -1);

 VAR_15 = VAR_9->ocs;

 VAR_9->wire_len = 0;
 FUNC_4(VAR_15, ((void*)0), &VAR_9->hw_dif);

 switch(VAR_10) {
 case 133:
  VAR_18 = VAR_1;
  break;
 case 130:
 case 132:
  VAR_18 = VAR_5;
  break;
 case 131:
  VAR_18 = VAR_4;
  break;
 case 129:
  VAR_18 = VAR_3;
  break;
 case 128:
  VAR_18 = VAR_2;
  break;
 default:
  VAR_18 = VAR_4;
  break;
 }

 VAR_9->hio_type = VAR_6;

 VAR_9->scsi_tgt_cb = VAR_12;
 VAR_9->scsi_tgt_cb_arg = VAR_13;

 if (VAR_9->tmf_cmd == VAR_7) {
  VAR_14 = FUNC_6(VAR_9, VAR_12, VAR_13);
  return VAR_14;
 }


 VAR_16 = VAR_9->rspbuf.virt;
 FUNC_3(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->flags |= VAR_0;

 VAR_17 = (fcp_rsp_info_t*) VAR_16->data;
 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_17->addl_rsp_info, VAR_11, sizeof(VAR_17->addl_rsp_info));
 }
 VAR_17->rsp_code = VAR_18;

 VAR_9->wire_len = sizeof(*VAR_16) - sizeof(VAR_16->data) + sizeof(*VAR_17);

 *((uint32_t*)VAR_16->fcp_rsp_len) = FUNC_1(sizeof(*VAR_17));

 VAR_9->sgl[0].addr = VAR_9->rspbuf.phys;
 VAR_9->sgl[0].dif_addr = 0;
 VAR_9->sgl[0].len = VAR_9->wire_len;
 VAR_9->sgl_count = 1;

 FUNC_3(&VAR_9->iparam, 0, sizeof(VAR_9->iparam));
 VAR_9->iparam.fcp_tgt.ox_id = VAR_9->init_task_tag;
 VAR_9->iparam.fcp_tgt.offset = 0;
 VAR_9->iparam.fcp_tgt.cs_ctl = VAR_9->cs_ctl;
 VAR_9->iparam.fcp_tgt.timeout = VAR_9->timeout;

 VAR_14 = FUNC_5(VAR_9, VAR_8);

 return VAR_14;
}
