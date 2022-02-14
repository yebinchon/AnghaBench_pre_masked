
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_8__ {int status; } ;
struct ccb_scsiio {TYPE_2__ ccb_h; } ;
struct TYPE_9__ {int softs; int status; TYPE_1__* cm_ccb; } ;
typedef TYPE_3__ rcb_t ;
struct TYPE_7__ {int csio; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,struct ccb_scsiio*) ;
 int FUNC_5 (union ccb*) ;

void
FUNC_6(rcb_t *VAR_2)
{
 struct ccb_scsiio *VAR_3;

 FUNC_0("IN rcb = %p\n", VAR_2);

 if (VAR_2 == ((void*)0))
  FUNC_1("rcb is null");

 VAR_3 = (struct ccb_scsiio *)&VAR_2->cm_ccb->csio;

 if (VAR_3 == ((void*)0))
  FUNC_1("csio is null");

 VAR_2->status = VAR_1;
 VAR_3->ccb_h.status = VAR_0;

 FUNC_4(VAR_2->softs, VAR_3);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_5((union ccb *)VAR_3);

 FUNC_0("OUT\n");
}
