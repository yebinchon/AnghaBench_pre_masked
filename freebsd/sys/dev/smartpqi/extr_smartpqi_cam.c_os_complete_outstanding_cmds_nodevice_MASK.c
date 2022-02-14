
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_8__ {int req_pending; TYPE_2__* cm_ccb; } ;
typedef TYPE_3__ rcb_t ;
struct TYPE_9__ {int max_outstanding_io; TYPE_3__* rcb; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_7__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (union ccb*) ;

void FUNC_2(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0("IN\n");

 for (VAR_3 = 1; VAR_3 < VAR_2->max_outstanding_io; VAR_3++) {
  rcb_t *VAR_4 = &VAR_2->rcb[VAR_3];
  if(VAR_4->req_pending && VAR_4->cm_ccb ) {
   VAR_4->req_pending = 0;
   VAR_4->cm_ccb->ccb_h.status = VAR_0 | VAR_1;
   FUNC_1((union ccb *)VAR_4->cm_ccb);
   VAR_4->cm_ccb = ((void*)0);
  }
 }

 FUNC_0("OUT\n");
}
