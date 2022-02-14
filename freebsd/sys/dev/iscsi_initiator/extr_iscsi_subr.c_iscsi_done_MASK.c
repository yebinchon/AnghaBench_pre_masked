
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int status; int response; } ;
typedef TYPE_2__ scsi_rsp_t ;
struct TYPE_12__ {TYPE_2__ scsi_rsp; } ;
struct TYPE_15__ {TYPE_1__ ipdu; } ;
struct TYPE_14__ {int ccb; TYPE_4__ pdu; } ;
typedef TYPE_3__ pduq_t ;
typedef TYPE_4__ pdu_t ;
struct TYPE_16__ {int isc; } ;
typedef TYPE_5__ isc_session_t ;


 int FUNC_0 (TYPE_5__*,int ,int ,int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void
FUNC_3(isc_session_t *VAR_0, pduq_t *VAR_1, pduq_t *VAR_2)
{
     pdu_t *VAR_3 = &VAR_2->pdu;
     scsi_rsp_t *VAR_4 = &VAR_3->ipdu.scsi_rsp;

     FUNC_1(8);

     FUNC_0(VAR_0, VAR_4->response, VAR_4->status, VAR_1->ccb, VAR_2);

     FUNC_2(VAR_0->isc, VAR_1);
}
