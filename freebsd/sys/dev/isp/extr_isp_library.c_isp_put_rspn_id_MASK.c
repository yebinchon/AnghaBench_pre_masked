
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rspnid_length; int rspnid_reserved; int rspnid_hdr; } ;
typedef TYPE_1__ rspn_id_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, rspn_id_t *VAR_1, rspn_id_t *VAR_2)
{

 FUNC_1(VAR_0, &VAR_1->rspnid_hdr, &VAR_2->rspnid_hdr);
 FUNC_0(VAR_0, VAR_1->rspnid_reserved, &VAR_2->rspnid_reserved);
 FUNC_0(VAR_0, VAR_1->rspnid_length, &VAR_2->rspnid_length);


}
