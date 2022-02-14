
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int status; scalar_t__ opts; int arg; int (* cb ) (TYPE_8__*,int,scalar_t__,int ) ;TYPE_4__* dma_resp; } ;
typedef TYPE_5__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int stat_str ;
struct TYPE_16__ {int additional_status; int status; } ;
struct TYPE_20__ {int clp_status; scalar_t__ resp_length; int clp_detailed_status; TYPE_2__ hdr; } ;
typedef TYPE_6__ sli4_res_dmtf_exec_clp_cmd_t ;
struct TYPE_17__ {int status; } ;
struct TYPE_15__ {scalar_t__ embed; } ;
struct TYPE_21__ {TYPE_3__ hdr; TYPE_1__ payload; } ;
typedef TYPE_7__ sli4_cmd_sli_config_t ;
struct TYPE_22__ {int os; } ;
typedef TYPE_8__ ocs_hw_t ;
typedef TYPE_5__ ocs_hw_clp_cb_arg_t ;
typedef int int32_t ;
struct TYPE_18__ {scalar_t__ size; int virt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*,int) ;
 int FUNC_1 (TYPE_8__*,char*,char*,int,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int,int,int ,int ,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_8__*,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6(ocs_hw_t *VAR_2, int32_t VAR_3, uint8_t *VAR_4, void *VAR_5)
{
 int32_t VAR_6 = 0;
 sli4_cmd_sli_config_t* VAR_7 = (sli4_cmd_sli_config_t*) VAR_4;
 sli4_res_dmtf_exec_clp_cmd_t *VAR_8 = (sli4_res_dmtf_exec_clp_cmd_t *) VAR_7->payload.embed;
 ocs_hw_clp_cb_arg_t *VAR_9 = VAR_5;
 uint32_t VAR_10 = 0;
 int32_t VAR_11;
 char VAR_12[8];




 if (VAR_3 || VAR_7->hdr.status || VAR_8->clp_status) {
  FUNC_2(VAR_2->os, "status=x%x/x%x/x%x  addl=x%x clp=x%x detail=x%x\n",
   VAR_3,
   VAR_7->hdr.status,
   VAR_8->hdr.status,
   VAR_8->hdr.additional_status,
   VAR_8->clp_status,
   VAR_8->clp_detailed_status);
  if (VAR_3) {
   VAR_6 = VAR_3;
  } else if (VAR_7->hdr.status) {
   VAR_6 = VAR_7->hdr.status;
  } else {
   VAR_6 = VAR_8->clp_status;
  }
 } else {
  VAR_10 = VAR_8->resp_length;
 }

 if (VAR_6) {
  goto ocs_hw_cb_dmtf_clp_done;
 }

 if ((VAR_10 == 0) || (VAR_9->dma_resp->size < VAR_10)) {
  FUNC_3(VAR_2->os, "Invalid response length: resp_len=%zu result len=%d\n",
        VAR_9->dma_resp->size, VAR_10);
  VAR_6 = -1;
  goto ocs_hw_cb_dmtf_clp_done;
 }


 VAR_11 = FUNC_1(VAR_2, "status", VAR_12,
           sizeof(VAR_12),
           VAR_9->dma_resp->virt,
           VAR_10);

 if (VAR_11 <= 0) {
  FUNC_3(VAR_2->os, "failed to get status %d\n", VAR_11);
  VAR_6 = -1;
  goto ocs_hw_cb_dmtf_clp_done;
 }

 if (FUNC_4(VAR_12, "0") != 0) {
  FUNC_3(VAR_2->os, "CLP status indicates failure=%s\n", VAR_12);
  VAR_6 = -1;
  goto ocs_hw_cb_dmtf_clp_done;
 }

ocs_hw_cb_dmtf_clp_done:


 VAR_9->status = VAR_6;
 if (VAR_9->cb) {
  VAR_9->cb(VAR_2, VAR_6, VAR_10, VAR_9->arg);
 }

 if (VAR_9->opts != VAR_0) {
  FUNC_0(VAR_2->os, VAR_9, sizeof(*VAR_9));
  FUNC_0(VAR_2->os, VAR_4, VAR_1);
 }
}
