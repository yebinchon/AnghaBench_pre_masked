
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int pnhle_handle; int pnhle_port_id_hi; int pnhle_port_id_lo; } ;
typedef TYPE_1__ isp_pnhle_23xx_t ;


 int FUNC_0 (int *,int *,int ) ;

void
FUNC_1(ispsoftc_t *VAR_0, isp_pnhle_23xx_t *VAR_1, isp_pnhle_23xx_t *VAR_2)
{

 FUNC_0(VAR_0, &VAR_1->pnhle_port_id_lo, VAR_2->pnhle_port_id_lo);
 FUNC_0(VAR_0, &VAR_1->pnhle_port_id_hi, VAR_2->pnhle_port_id_hi);
 FUNC_0(VAR_0, &VAR_1->pnhle_handle, VAR_2->pnhle_handle);
}
