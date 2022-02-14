
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * snscb_fc4_types; int snscb_cthdr; } ;
typedef TYPE_1__ sns_gft_id_rsp_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, sns_gft_id_rsp_t *VAR_1, sns_gft_id_rsp_t *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, &VAR_1->snscb_cthdr, &VAR_2->snscb_cthdr);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_fc4_types[VAR_3],
      VAR_2->snscb_fc4_types[VAR_3]);
 }
}
