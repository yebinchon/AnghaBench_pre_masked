
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int ddtl; int bo; int r2tSN; } ;
typedef TYPE_4__ r2t_t ;
struct TYPE_15__ {int itt; } ;
struct TYPE_17__ {TYPE_1__ bhs; TYPE_4__ r2t; } ;
struct TYPE_16__ {TYPE_3__ ipdu; } ;
struct TYPE_19__ {TYPE_2__ pdu; } ;
typedef TYPE_5__ pduq_t ;
struct TYPE_20__ {int isc; int sid; } ;
typedef TYPE_6__ isc_session_t ;


 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(isc_session_t *VAR_0, pduq_t *VAR_1)
{
     pduq_t *VAR_2;

     FUNC_0(8);
     VAR_2 = FUNC_1(VAR_0, VAR_1->pdu.ipdu.bhs.itt, 1);
     if(VAR_2 != ((void*)0)) {
   FUNC_2(VAR_0, VAR_2, VAR_1);
     }
     else {
   r2t_t *VAR_3 = &VAR_1->pdu.ipdu.r2t;

   FUNC_5("%d] we lost something itt=%x r2tSN=%d bo=%x ddtl=%x",
   VAR_0->sid, FUNC_3(VAR_1->pdu.ipdu.bhs.itt),
   FUNC_3(VAR_3->r2tSN), FUNC_3(VAR_3->bo), FUNC_3(VAR_3->ddtl));
     }
     FUNC_4(VAR_0->isc, VAR_1);
}
