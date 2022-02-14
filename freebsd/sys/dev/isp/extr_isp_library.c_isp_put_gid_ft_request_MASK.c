
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int snscb_fc4_type; int snscb_reserved3; int snscb_mword_div_2; int snscb_cmd; int snscb_reserved1; int snscb_sblen; int * snscb_addr; int snscb_reserved0; int snscb_rblen; } ;
typedef TYPE_1__ sns_gid_ft_req_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, sns_gid_ft_req_t *VAR_1, sns_gid_ft_req_t *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->snscb_rblen, &VAR_2->snscb_rblen);
 FUNC_0(VAR_0, VAR_1->snscb_reserved0, &VAR_2->snscb_reserved0);
 FUNC_0(VAR_0, VAR_1->snscb_addr[0], &VAR_2->snscb_addr[0]);
 FUNC_0(VAR_0, VAR_1->snscb_addr[1], &VAR_2->snscb_addr[1]);
 FUNC_0(VAR_0, VAR_1->snscb_addr[2], &VAR_2->snscb_addr[2]);
 FUNC_0(VAR_0, VAR_1->snscb_addr[3], &VAR_2->snscb_addr[3]);
 FUNC_0(VAR_0, VAR_1->snscb_sblen, &VAR_2->snscb_sblen);
 FUNC_0(VAR_0, VAR_1->snscb_reserved1, &VAR_2->snscb_reserved1);
 FUNC_0(VAR_0, VAR_1->snscb_cmd, &VAR_2->snscb_cmd);
 FUNC_0(VAR_0, VAR_1->snscb_mword_div_2, &VAR_2->snscb_mword_div_2);
 FUNC_1(VAR_0, VAR_1->snscb_reserved3, &VAR_2->snscb_reserved3);
 FUNC_1(VAR_0, VAR_1->snscb_fc4_type, &VAR_2->snscb_fc4_type);
}
