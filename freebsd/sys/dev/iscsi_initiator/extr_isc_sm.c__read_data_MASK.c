
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int itt; } ;
struct TYPE_17__ {TYPE_1__ bhs; } ;
struct TYPE_18__ {TYPE_2__ ipdu; } ;
struct TYPE_19__ {TYPE_3__ pdu; } ;
typedef TYPE_4__ pduq_t ;
struct TYPE_20__ {int isc; int sid; } ;
typedef TYPE_5__ isc_session_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(isc_session_t *VAR_0, pduq_t *VAR_1)
{
     pduq_t *VAR_2;

     FUNC_0(8);
     VAR_2 = FUNC_2(VAR_0, VAR_1->pdu.ipdu.bhs.itt, 1);
     if(VAR_2 != ((void*)0)) {
   if(FUNC_5(VAR_0, VAR_2, VAR_1) != 1) {
        FUNC_1(VAR_0, VAR_2);
        FUNC_4(VAR_0->isc, VAR_2);
   }
     }
     else
   FUNC_6("%d] we lost something itt=%x",
   VAR_0->sid, FUNC_3(VAR_1->pdu.ipdu.bhs.itt));
     FUNC_4(VAR_0->isc, VAR_1);
}
