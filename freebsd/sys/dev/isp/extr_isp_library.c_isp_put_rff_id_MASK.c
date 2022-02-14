
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rffid_fc4type; int rffid_fc4features; int rffid_reserved2; int * rffid_portid; int rffid_reserved; int rffid_hdr; } ;
typedef TYPE_1__ rff_id_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, rff_id_t *VAR_1, rff_id_t *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0, &VAR_1->rffid_hdr, &VAR_2->rffid_hdr);
 FUNC_1(VAR_0, VAR_1->rffid_reserved, &VAR_2->rffid_reserved);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_1(VAR_0, VAR_1->rffid_portid[VAR_3], &VAR_2->rffid_portid[VAR_3]);
 FUNC_0(VAR_0, VAR_1->rffid_reserved2, &VAR_2->rffid_reserved2);
 FUNC_1(VAR_0, VAR_1->rffid_fc4features, &VAR_2->rffid_fc4features);
 FUNC_1(VAR_0, VAR_1->rffid_fc4type, &VAR_2->rffid_fc4type);
}
