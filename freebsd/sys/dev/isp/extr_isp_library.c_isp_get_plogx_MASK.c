
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {TYPE_1__* plogx_ioparm; int plogx_rspsz_porthi; int plogx_portlo; int plogx_vphdl; int plogx_flags; int plogx_nphdl; int plogx_status; int plogx_handle; int plogx_header; } ;
typedef TYPE_2__ isp_plogx_t ;
struct TYPE_5__ {int hi16; int lo16; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, isp_plogx_t *VAR_1, isp_plogx_t *VAR_2)
{
 int VAR_3;
 FUNC_2(VAR_0, &VAR_1->plogx_header, &VAR_2->plogx_header);
 FUNC_1(VAR_0, &VAR_1->plogx_handle, VAR_2->plogx_handle);
 FUNC_0(VAR_0, &VAR_1->plogx_status, VAR_2->plogx_status);
 FUNC_0(VAR_0, &VAR_1->plogx_nphdl, VAR_2->plogx_nphdl);
 FUNC_0(VAR_0, &VAR_1->plogx_flags, VAR_2->plogx_flags);
 FUNC_0(VAR_0, &VAR_1->plogx_vphdl, VAR_2->plogx_vphdl);
 FUNC_0(VAR_0, &VAR_1->plogx_portlo, VAR_2->plogx_portlo);
 FUNC_0(VAR_0, &VAR_1->plogx_rspsz_porthi, VAR_2->plogx_rspsz_porthi);
 for (VAR_3 = 0; VAR_3 < 11; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->plogx_ioparm[VAR_3].lo16, VAR_2->plogx_ioparm[VAR_3].lo16);
  FUNC_0(VAR_0, &VAR_1->plogx_ioparm[VAR_3].hi16, VAR_2->plogx_ioparm[VAR_3].hi16);
 }
}
