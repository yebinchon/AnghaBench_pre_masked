
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int encrypt_enable; int req_pending; scalar_t__ resp_qid; scalar_t__ ioaccel_handle; int * cm_ccb; int * sgt; scalar_t__ nseg; scalar_t__ bcount; int * cm_data; scalar_t__ cm_flags; int * softs; int * cdbp; int * dvp; int tag; int * req; int * error_info; } ;
typedef TYPE_1__ rcb_t ;


 int VAR_0 ;

void FUNC_0( rcb_t *VAR_1 )
{
 VAR_1->error_info = ((void*)0);
 VAR_1->req = ((void*)0);
 VAR_1->status = -1;
 VAR_1->tag = VAR_0;
 VAR_1->dvp = ((void*)0);
 VAR_1->cdbp = ((void*)0);
 VAR_1->softs = ((void*)0);
 VAR_1->cm_flags = 0;
 VAR_1->cm_data = ((void*)0);
 VAR_1->bcount = 0;
 VAR_1->nseg = 0;
 VAR_1->sgt = ((void*)0);
 VAR_1->cm_ccb = ((void*)0);
 VAR_1->encrypt_enable = 0;
 VAR_1->ioaccel_handle = 0;
 VAR_1->resp_qid = 0;
 VAR_1->req_pending = 0;
}
