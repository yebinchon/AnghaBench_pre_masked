
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int fcp_rsp_rsplen; int fcp_rsp_snslen; int fcp_rsp_resid; int fcp_rsp_scsi_status; int fcp_rsp_bits; int fcp_rsp_status_qualifier; int * fcp_rsp_reserved; } ;
typedef TYPE_1__ fcp_rsp_iu_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, fcp_rsp_iu_t *VAR_1, fcp_rsp_iu_t *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < ((sizeof (VAR_1->fcp_rsp_reserved))/(sizeof (VAR_1->fcp_rsp_reserved[0]))); VAR_3++) {
  FUNC_2(VAR_0, VAR_1->fcp_rsp_reserved[VAR_3], &VAR_2->fcp_rsp_reserved[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->fcp_rsp_status_qualifier, &VAR_2->fcp_rsp_status_qualifier);
 FUNC_2(VAR_0, VAR_1->fcp_rsp_bits, &VAR_2->fcp_rsp_bits);
 FUNC_2(VAR_0, VAR_1->fcp_rsp_scsi_status, &VAR_2->fcp_rsp_scsi_status);
 FUNC_1(VAR_0, VAR_1->fcp_rsp_resid, &VAR_2->fcp_rsp_resid);
 FUNC_1(VAR_0, VAR_1->fcp_rsp_snslen, &VAR_2->fcp_rsp_snslen);
 FUNC_1(VAR_0, VAR_1->fcp_rsp_rsplen, &VAR_2->fcp_rsp_rsplen);
}
