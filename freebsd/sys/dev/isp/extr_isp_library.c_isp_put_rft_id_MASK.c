
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * rftid_fc4types; int * rftid_portid; int rftid_reserved; int rftid_hdr; } ;
typedef TYPE_1__ rft_id_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, rft_id_t *VAR_1, rft_id_t *VAR_2)
{
 int VAR_3;
 FUNC_2(VAR_0, &VAR_1->rftid_hdr, &VAR_2->rftid_hdr);
 FUNC_1(VAR_0, VAR_1->rftid_reserved, &VAR_2->rftid_reserved);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  FUNC_1(VAR_0, VAR_1->rftid_portid[VAR_3], &VAR_2->rftid_portid[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->rftid_fc4types[VAR_3], &VAR_2->rftid_fc4types[VAR_3]);
 }
}
