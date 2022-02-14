
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_10__ {union ccb* ccb; } ;
typedef TYPE_2__ pduq_t ;
struct TYPE_11__ {int isc; } ;
typedef TYPE_3__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,union ccb*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void
FUNC_3(isc_session_t *VAR_1, pduq_t *VAR_2, pduq_t *VAR_3)
{
     union ccb *VAR_4 = VAR_2->ccb;


     FUNC_1(8);

     VAR_4->ccb_h.status = VAR_0;
     FUNC_0(VAR_1, VAR_4);

     FUNC_2(VAR_1->isc, VAR_2);
}
