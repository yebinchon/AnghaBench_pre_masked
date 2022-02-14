
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ispsoftc_t ;
struct TYPE_4__ {scalar_t__ req_rsp_sense; int req_response_len; int req_sense_len; int req_fcp_residual; int req_scsi_status; int req_retry_delay; int req_state_flags; int req_reserved0; int req_resid; int req_oxid; int req_completion_status; int req_handle; int req_header; } ;
typedef TYPE_1__ isp24xx_statusreq_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;

void
FUNC_5(ispsoftc_t *VAR_0, isp24xx_statusreq_t *VAR_1, isp24xx_statusreq_t *VAR_2)
{
 int VAR_3;
 uint32_t *VAR_4, *VAR_5;

 FUNC_4(VAR_0, &VAR_1->req_header, &VAR_2->req_header);
 FUNC_2(VAR_0, &VAR_1->req_handle, VAR_2->req_handle);
 FUNC_1(VAR_0, &VAR_1->req_completion_status, VAR_2->req_completion_status);
 FUNC_1(VAR_0, &VAR_1->req_oxid, VAR_2->req_oxid);
 FUNC_2(VAR_0, &VAR_1->req_resid, VAR_2->req_resid);
 FUNC_1(VAR_0, &VAR_1->req_reserved0, VAR_2->req_reserved0);
 FUNC_1(VAR_0, &VAR_1->req_state_flags, VAR_2->req_state_flags);
 FUNC_1(VAR_0, &VAR_1->req_retry_delay, VAR_2->req_retry_delay);
 FUNC_1(VAR_0, &VAR_1->req_scsi_status, VAR_2->req_scsi_status);
 FUNC_2(VAR_0, &VAR_1->req_fcp_residual, VAR_2->req_fcp_residual);
 FUNC_2(VAR_0, &VAR_1->req_sense_len, VAR_2->req_sense_len);
 FUNC_2(VAR_0, &VAR_1->req_response_len, VAR_2->req_response_len);
 VAR_4 = (uint32_t *)VAR_1->req_rsp_sense;
 VAR_5 = (uint32_t *)VAR_2->req_rsp_sense;
 for (VAR_3 = 0; VAR_3 < (FUNC_0(VAR_1->req_rsp_sense) >> 2); VAR_3++) {
  VAR_5[VAR_3] = FUNC_3(VAR_0, VAR_4[VAR_3]);
 }
}
