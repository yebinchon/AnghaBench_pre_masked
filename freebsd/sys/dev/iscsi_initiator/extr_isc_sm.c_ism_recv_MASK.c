
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_30__ {int S; } ;
struct TYPE_31__ {int opcode; int itt; int * OpcodeSpecificFields; } ;
struct TYPE_25__ {TYPE_6__ data_in; TYPE_7__ bhs; } ;
struct TYPE_26__ {TYPE_1__ ipdu; } ;
struct TYPE_28__ {TYPE_2__ pdu; } ;
typedef TYPE_4__ pduq_t ;
struct TYPE_27__ {scalar_t__ expCmd; int stat; int maxCmd; } ;
struct TYPE_29__ {int rsp; TYPE_3__ sn; } ;
typedef TYPE_5__ isc_session_t ;
typedef TYPE_6__ data_in_t ;
typedef TYPE_7__ bhs_t ;
struct TYPE_32__ {scalar_t__ cmd; int expCmd; } ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char*,...) ;
 TYPE_8__* VAR_0 ;
 int FUNC_10 (int *) ;

void
FUNC_11(isc_session_t *VAR_1, pduq_t *VAR_2)
{
     bhs_t *VAR_3;
     int VAR_4;

     FUNC_6(8);

     VAR_3 = &VAR_2->pdu.ipdu.bhs;
     VAR_4 = FUNC_8(VAR_3->OpcodeSpecificFields[1]);







     FUNC_9(5, "opcode=0x%x itt=0x%x stat#0x%x maxcmd=0x%0x",
     VAR_3->opcode, FUNC_8(VAR_3->itt), VAR_4, VAR_1->sn.maxCmd);

     switch(VAR_3->opcode) {
     case 132: {
   data_in_t *VAR_5 = &VAR_2->pdu.ipdu.data_in;

   if(VAR_5->S == 0)
        break;
     }

     default:
   if(VAR_4 > (VAR_1->sn.stat + 1)) {
        FUNC_9(1, "we lost some rec=0x%x exp=0x%x",
        VAR_4, VAR_1->sn.stat);

   }
   VAR_1->sn.stat = VAR_4;
     }

     switch(VAR_3->opcode) {
     case 136:
     case 128:
     case 135:
   FUNC_7(VAR_1, VAR_2);
   FUNC_10(&VAR_1->rsp);
   FUNC_9(3, "wakeup rsp");
   break;

     case 134: FUNC_1(VAR_1, VAR_2); break;
     case 130: FUNC_5(VAR_1, VAR_2); break;
     case 132: FUNC_3(VAR_1, VAR_2); break;
     case 133: FUNC_2(VAR_1, VAR_2); break;
     case 131: FUNC_4(VAR_1, VAR_2); break;
     case 137: FUNC_0(VAR_1, VAR_2); break;

     case 129:
     default:
   FUNC_9(1, "opcode=0x%x itt=0x%x not implemented yet",
   VAR_3->opcode, FUNC_8(VAR_3->itt));
   break;
     }
}
