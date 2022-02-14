
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int req_pending; int status; } ;
typedef TYPE_1__ rcb_t ;
struct TYPE_6__ {int max_outstanding_io; TYPE_1__* rcb; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

void FUNC_1(pqisrc_softstate_t *VAR_1)
{
 int VAR_2 = 0;
 rcb_t *VAR_3;

 for (VAR_2 = 1; VAR_2 <= VAR_1->max_outstanding_io; VAR_2++) {
  VAR_3 = &VAR_1->rcb[VAR_2];
  if(VAR_3->req_pending && FUNC_0(VAR_3)) {
   VAR_3->status = VAR_0;
   VAR_3->req_pending = 0;
  }
 }
}
