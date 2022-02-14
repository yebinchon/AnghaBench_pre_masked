
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int itt; int expStat; int maxCmd; int expCmd; int cmd; int stat; } ;
typedef TYPE_3__ sn_t ;
struct TYPE_29__ {int opcode; void* itt; void* ExpStSN; int I; void* CmdSN; } ;
struct TYPE_22__ {TYPE_7__ bhs; } ;
struct TYPE_27__ {TYPE_1__ ipdu; } ;
struct TYPE_26__ {TYPE_21__* ccb; TYPE_5__ pdu; } ;
typedef TYPE_4__ pduq_t ;
typedef TYPE_5__ pdu_t ;
struct TYPE_28__ {int flags; int isc; TYPE_3__ sn; } ;
typedef TYPE_6__ isc_session_t ;
typedef TYPE_7__ bhs_t ;
struct TYPE_24__ {int status; } ;
struct TYPE_23__ {TYPE_2__ ccb_h; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_21__*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(isc_session_t *VAR_2)
{
     sn_t *VAR_3 = &VAR_2->sn;
     pduq_t *VAR_4;
     int VAR_5, VAR_6;

     FUNC_3(8);
     VAR_5 = 0;

     while(VAR_2->flags & VAR_1) {
   pdu_t *VAR_7;
   bhs_t *VAR_8;






   VAR_6 = FUNC_0(0) | FUNC_0(1);
   if(FUNC_1(VAR_3->cmd, VAR_3->maxCmd) == 0)
        VAR_6 |= FUNC_0(2);

   FUNC_12(4, "which=%d sn->maxCmd=%d sn->cmd=%d", VAR_6, VAR_3->maxCmd, VAR_3->cmd);

   if((VAR_4 = FUNC_5(VAR_2, VAR_6)) == ((void*)0))
        break;
   FUNC_12(4, "pq=%p", VAR_4);

   VAR_7 = &VAR_4->pdu;
   VAR_8 = &VAR_7->ipdu.bhs;
   switch(VAR_8->opcode) {
   case 132:
        VAR_3->itt++;
        VAR_8->itt = FUNC_4(VAR_3->itt);

   case 135:
   case 129:
   case 134:
   case 131:
   case 133:
   case 130:
        VAR_8->CmdSN = FUNC_4(VAR_3->cmd);
        if(VAR_8->I == 0)
      VAR_3->cmd++;

   case 128:
        VAR_8->ExpStSN = FUNC_4(VAR_3->stat + 1);
        break;

   default:

        FUNC_13("bad opcode=0x%x sn(cmd=0x%x expCmd=0x%x maxCmd=0x%x expStat=0x%x itt=0x%x)",
        VAR_8->opcode,
        VAR_3->cmd, VAR_3->expCmd, VAR_3->maxCmd, VAR_3->expStat, VAR_3->itt);

   }

   FUNC_12(4, "opcode=0x%x sn(cmd=0x%x expCmd=0x%x maxCmd=0x%x expStat=0x%x itt=0x%x)",
  VAR_8->opcode,
  VAR_3->cmd, VAR_3->expCmd, VAR_3->maxCmd, VAR_3->expStat, VAR_3->itt);

   if(VAR_8->opcode != 133)





        FUNC_6(VAR_2, VAR_4);

   VAR_5 = FUNC_9(VAR_2, VAR_4);
   if(VAR_8->opcode == 133)
        FUNC_11(VAR_2->isc, VAR_4);
   if(VAR_5) {
        FUNC_13("error=%d opcode=0x%x ccb=%p itt=%x",
        VAR_5, VAR_8->opcode, VAR_4->ccb, FUNC_10(VAR_8->itt));
        FUNC_7(VAR_2, VAR_4);
        switch(VAR_5) {
        case 136:
      VAR_2->flags &= ~VAR_1;

        case 137:
      FUNC_13("requed");
      FUNC_8(VAR_2, VAR_4);
      break;

        default:
      if(VAR_4->ccb) {
    FUNC_13("back to cam");
    VAR_4->ccb->ccb_h.status |= VAR_0;
    FUNC_2(VAR_2, VAR_4->ccb);
    FUNC_11(VAR_2->isc, VAR_4);
      }
      else
    FUNC_13("we lost it!");
        }
   }
     }
     return VAR_5;
}
