
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int ttt; int I; int F; int itt; int opcode; } ;
struct TYPE_12__ {TYPE_5__ nop_out; } ;
struct TYPE_13__ {TYPE_1__ ipdu; } ;
struct TYPE_15__ {TYPE_2__ pdu; } ;
typedef TYPE_4__ pduq_t ;
typedef TYPE_5__ nop_out_t ;
struct TYPE_14__ {int itt; } ;
struct TYPE_17__ {scalar_t__ cws; int isc; TYPE_3__ sn; } ;
typedef TYPE_6__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void
FUNC_6(isc_session_t *VAR_2)
{
     pduq_t *VAR_3;
     nop_out_t *VAR_4;

     FUNC_0(8);

     FUNC_5(4, "cws=%d", VAR_2->cws);
     if(VAR_2->cws == 0) {



   if((VAR_3 = FUNC_3(VAR_2->isc, VAR_1)) == ((void*)0))

        return;
   VAR_4 = &VAR_3->pdu.ipdu.nop_out;
   VAR_4->opcode = VAR_0;
   VAR_4->itt = FUNC_1(VAR_2->sn.itt);
   VAR_4->ttt = -1;
   VAR_4->I = 1;
   VAR_4->F = 1;
   if(FUNC_2(VAR_2, VAR_3) != 0) {
        FUNC_5(1, "failed");
        FUNC_4(VAR_2->isc, VAR_3);
   }
     }
}
