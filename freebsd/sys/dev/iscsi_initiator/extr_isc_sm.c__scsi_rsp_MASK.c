
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_18__ {int itt; } ;
struct TYPE_19__ {TYPE_1__ bhs; } ;
struct TYPE_17__ {TYPE_2__ ipdu; } ;
struct TYPE_20__ {TYPE_12__ pdu; } ;
typedef TYPE_3__ pduq_t ;
struct TYPE_21__ {int isc; int sid; } ;
typedef TYPE_4__ isc_session_t ;


 int FUNC_0 (int,char*,int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_12__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(isc_session_t *VAR_0, pduq_t *VAR_1)
{
     pduq_t *VAR_2;

     FUNC_1(8);
     VAR_2 = FUNC_3(VAR_0, VAR_1->pdu.ipdu.bhs.itt, 0);
     FUNC_0(5, "itt=%x pq=%p opq=%p", FUNC_5(VAR_1->pdu.ipdu.bhs.itt), VAR_1, VAR_2);
     if(VAR_2 != ((void*)0)) {
   FUNC_4(VAR_0, VAR_2, VAR_1);
   FUNC_2(VAR_0, &VAR_1->pdu);
     }
     else
   FUNC_7("%d] we lost something itt=%x",
   VAR_0->sid, FUNC_5(VAR_1->pdu.ipdu.bhs.itt));
     FUNC_6(VAR_0->isc, VAR_1);
}
