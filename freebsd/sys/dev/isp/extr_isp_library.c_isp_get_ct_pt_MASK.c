
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {TYPE_1__* ctp_dataseg; int ctp_cmd_bcnt; int ctp_rsp_bcnt; int * ctp_reserved2; int ctp_rsp_cnt; int ctp_reserved1; int ctp_time; int ctp_reserved0; int ctp_vpidx; int ctp_cmd_cnt; int ctp_nphdl; int ctp_status; int ctp_handle; int ctp_header; } ;
typedef TYPE_2__ isp_ct_pt_t ;
struct TYPE_5__ {int ds_count; int ds_basehi; int ds_base; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, isp_ct_pt_t *VAR_1, isp_ct_pt_t *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_0, &VAR_1->ctp_header, &VAR_2->ctp_header);
 FUNC_1(VAR_0, &VAR_1->ctp_handle, VAR_2->ctp_handle);
 FUNC_0(VAR_0, &VAR_1->ctp_status, VAR_2->ctp_status);
 FUNC_0(VAR_0, &VAR_1->ctp_nphdl, VAR_2->ctp_nphdl);
 FUNC_0(VAR_0, &VAR_1->ctp_cmd_cnt, VAR_2->ctp_cmd_cnt);
 FUNC_2(VAR_0, &VAR_1->ctp_vpidx, VAR_2->ctp_vpidx);
 FUNC_2(VAR_0, &VAR_1->ctp_reserved0, VAR_2->ctp_reserved0);
 FUNC_0(VAR_0, &VAR_1->ctp_time, VAR_2->ctp_time);
 FUNC_0(VAR_0, &VAR_1->ctp_reserved1, VAR_2->ctp_reserved1);
 FUNC_0(VAR_0, &VAR_1->ctp_rsp_cnt, VAR_2->ctp_rsp_cnt);
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->ctp_reserved2[VAR_3], VAR_2->ctp_reserved2[VAR_3]);
 }
 FUNC_1(VAR_0, &VAR_1->ctp_rsp_bcnt, VAR_2->ctp_rsp_bcnt);
 FUNC_1(VAR_0, &VAR_1->ctp_cmd_bcnt, VAR_2->ctp_cmd_bcnt);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->ctp_dataseg[VAR_3].ds_base, VAR_2->ctp_dataseg[VAR_3].ds_base);
  FUNC_1(VAR_0, &VAR_1->ctp_dataseg[VAR_3].ds_basehi, VAR_2->ctp_dataseg[VAR_3].ds_basehi);
  FUNC_1(VAR_0, &VAR_1->ctp_dataseg[VAR_3].ds_count, VAR_2->ctp_dataseg[VAR_3].ds_count);
 }
}
