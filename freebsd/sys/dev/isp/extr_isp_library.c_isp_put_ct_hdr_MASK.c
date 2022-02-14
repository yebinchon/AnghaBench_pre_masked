
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int ct_vunique; int ct_explanation; int ct_reason; int ct_reserved1; int ct_bcnt_resid; int ct_cmd_resp; int ct_reserved0; int ct_options; int ct_fcs_subtype; int ct_fcs_type; int * ct_in_id; int ct_revision; } ;
typedef TYPE_1__ ct_hdr_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, ct_hdr_t *VAR_1, ct_hdr_t *VAR_2)
{
 FUNC_1(VAR_0, VAR_1->ct_revision, &VAR_2->ct_revision);
 FUNC_1(VAR_0, VAR_1->ct_in_id[0], &VAR_2->ct_in_id[0]);
 FUNC_1(VAR_0, VAR_1->ct_in_id[1], &VAR_2->ct_in_id[1]);
 FUNC_1(VAR_0, VAR_1->ct_in_id[2], &VAR_2->ct_in_id[2]);
 FUNC_1(VAR_0, VAR_1->ct_fcs_type, &VAR_2->ct_fcs_type);
 FUNC_1(VAR_0, VAR_1->ct_fcs_subtype, &VAR_2->ct_fcs_subtype);
 FUNC_1(VAR_0, VAR_1->ct_options, &VAR_2->ct_options);
 FUNC_1(VAR_0, VAR_1->ct_reserved0, &VAR_2->ct_reserved0);
 FUNC_0(VAR_0, VAR_1->ct_cmd_resp, &VAR_2->ct_cmd_resp);
 FUNC_0(VAR_0, VAR_1->ct_bcnt_resid, &VAR_2->ct_bcnt_resid);
 FUNC_1(VAR_0, VAR_1->ct_reserved1, &VAR_2->ct_reserved1);
 FUNC_1(VAR_0, VAR_1->ct_reason, &VAR_2->ct_reason);
 FUNC_1(VAR_0, VAR_1->ct_explanation, &VAR_2->ct_explanation);
 FUNC_1(VAR_0, VAR_1->ct_vunique, &VAR_2->ct_vunique);
}
