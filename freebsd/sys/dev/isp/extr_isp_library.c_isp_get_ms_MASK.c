
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {TYPE_1__* ms_dataseg; int ms_cmd_bcnt; int ms_rsp_bcnt; int ms_reserved2; int ms_rxid; int ms_r_ctl; int ms_type; int ms_tot_cnt; int ms_cmd_cnt; int ms_time; int ms_reserved1; int ms_flags; int ms_status; int ms_nphdl; int ms_handle; int ms_header; } ;
typedef TYPE_2__ isp_ms_t ;
struct TYPE_5__ {int ds_count; int ds_basehi; int ds_base; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, isp_ms_t *VAR_1, isp_ms_t *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_0, &VAR_1->ms_header, &VAR_2->ms_header);
 FUNC_1(VAR_0, &VAR_1->ms_handle, VAR_2->ms_handle);
 FUNC_0(VAR_0, &VAR_1->ms_nphdl, VAR_2->ms_nphdl);
 FUNC_0(VAR_0, &VAR_1->ms_status, VAR_2->ms_status);
 FUNC_0(VAR_0, &VAR_1->ms_flags, VAR_2->ms_flags);
 FUNC_0(VAR_0, &VAR_1->ms_reserved1, VAR_2->ms_reserved1);
 FUNC_0(VAR_0, &VAR_1->ms_time, VAR_2->ms_time);
 FUNC_0(VAR_0, &VAR_1->ms_cmd_cnt, VAR_2->ms_cmd_cnt);
 FUNC_0(VAR_0, &VAR_1->ms_tot_cnt, VAR_2->ms_tot_cnt);
 FUNC_2(VAR_0, &VAR_1->ms_type, VAR_2->ms_type);
 FUNC_2(VAR_0, &VAR_1->ms_r_ctl, VAR_2->ms_r_ctl);
 FUNC_0(VAR_0, &VAR_1->ms_rxid, VAR_2->ms_rxid);
 FUNC_0(VAR_0, &VAR_1->ms_reserved2, VAR_2->ms_reserved2);
 FUNC_1(VAR_0, &VAR_1->ms_rsp_bcnt, VAR_2->ms_rsp_bcnt);
 FUNC_1(VAR_0, &VAR_1->ms_cmd_bcnt, VAR_2->ms_cmd_bcnt);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->ms_dataseg[VAR_3].ds_base, VAR_2->ms_dataseg[VAR_3].ds_base);
  FUNC_1(VAR_0, &VAR_1->ms_dataseg[VAR_3].ds_basehi, VAR_2->ms_dataseg[VAR_3].ds_basehi);
  FUNC_1(VAR_0, &VAR_1->ms_dataseg[VAR_3].ds_count, VAR_2->ms_dataseg[VAR_3].ds_count);
 }
}
